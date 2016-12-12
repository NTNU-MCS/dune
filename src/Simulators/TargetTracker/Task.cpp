//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Petter Norgren                                                   *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace TargetTracker
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Target Name
      std::string target_name;
      //! Timeout 
      double timeout;
    };

    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Target system id
      uint16_t m_target;
      //! Target estimated state 
      IMC::EstimatedState m_estate;
      //! Target simulated state 
      IMC::SimulatedState m_sstate;
      //! Target plan 
      IMC::PlanDB m_targetPlan;
      //! the last Clock::get() when the target system's position was updated
      Counter<double> m_last_update;
      //! variable that will hold the last known latittude
      double m_last_known_lat;
      //! variable that will hold the last known longitude
      double m_last_known_lon;
      //! variable that will hold the last known height reference
      double m_last_known_height;
      //! Is an update received?
      bool m_has_update;
      //! Is a plan received?
      bool m_has_plan;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_last_known_lat(0),
        m_last_known_lon(0),
        m_last_known_height(0),
        m_has_update(false),
        m_has_plan(false)
      {
        param("Target Name", m_args.target_name)
        .description("Target Name (system to be followed)");

        param("Timeout", m_args.timeout)
        .defaultValue("86400.0")
        .units(Units::Second)
        .description("Simulator timeout if no update is received");

        bind<IMC::PlanDB>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::UsblFixExtended>(this);
        
      }

      //! Acquire resources
      void
      onResourceAcquisition(void)
      {
        checkSystems();

        m_last_update.reset();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        ;
      }

      void
      onUpdateParameters(void)
      {
        checkSystems();

        if (paramChanged(m_args.timeout))
          m_last_update.setTop(m_args.timeout);
      }

      void
      checkSystems(void)
      {
        m_target = resolveSystemName(m_args.target_name);

        if(m_target == DUNE::IMC::AddressResolver::invalid())
        {
          err("Target is invalid. Check if system name: '%s' exist.", m_args.target_name.c_str());
          return;
        }

        m_sstate.setSource(m_target);
        debug("Target: '%s'", resolveSystemId(m_target));
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // Not the vehicle we are tracking
        if (msg->getSource() != m_target)
          return;

        trace("Consuming EstimatedState from target: '%s'.", resolveSystemId(msg->getSource()));

        m_estate = *msg;

        m_last_known_lat = msg->lat;
        m_last_known_lon = msg->lon;
        m_last_known_height = msg->height;

        m_has_update = true;
        m_last_update.reset();
      }

      void 
      consume(const IMC::UsblFixExtended *msg)
      {
        // Not the vehicle we are tracking
        if (msg->getSource() != m_target)
        {
          debug("Received USBL-fix from system: '%s'.", resolveSystemId(msg->getSource()));
          return;
        }

        debug("Consuming USBL-fix from target: '%s' with accuracy: %f", 
                resolveSystemId(msg->getSource()), msg->accuracy);

        m_last_known_lat = msg->lat;
        m_last_known_lon = msg->lon;
        m_last_known_height = msg->z;
        
        m_has_update = true;
        m_last_update.reset();
      }

      void 
      consume(const IMC::PlanDB* req)
      {
        // Not the vehicle we are tracking
        if (req->getSource() != m_target)
          return;

        if (req->type != IMC::PlanDB::DBT_REQUEST)
        {
          war(DTR("unexpected message"));
          return;
        }

        debug("Consuming PlanDB from target: '%s'.", resolveSystemId(req->getSource()));
 
        m_has_plan = true;
      }

      void
      sendSimulatedState()
      {
        if(!m_has_update || !m_has_plan)
          return;

        double x = 0, y = 0, z = 0, theta = 0, psi = 0, u = 0, w = 0;

        propagateAlongPlan(x, y, z, theta, psi, u, w);

        m_sstate.lat = m_last_known_lat;
        m_sstate.lon = m_last_known_lat;
        m_sstate.height = m_last_known_height;
        m_sstate.x = x;
        m_sstate.y = y;
        m_sstate.z = z;
        m_sstate.phi = 0;
        m_sstate.theta = theta;
        m_sstate.psi = psi;
        m_sstate.u = u;
        m_sstate.v = 0; 
        m_sstate.w = w;
        m_sstate.p = 0;
        m_sstate.q = 0;
        m_sstate.r = 0;
        m_sstate.svx = 0;
        m_sstate.svy = 0;
        m_sstate.svz = 0;
        m_sstate.setTimeStamp();

        dispatch(m_sstate);
      }

      void
      propagateAlongPlan(double &x, double &y, double &z, double &theta, double &psi, double &u, double &w)
      {
        // TODO
        (void)x;
        (void)y;
        (void)z;
        (void)theta;
        (void)psi;
        (void)u;
        (void)w;
      }

      void
      task(void)
      {
        sendSimulatedState();
      }
    };
  }
}

DUNE_TASK
