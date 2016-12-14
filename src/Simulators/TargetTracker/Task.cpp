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

#include "../../Plan/Engine/Plan.hpp"

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
      //! Target plan 
      std::string target_plan_id;
      //! Timeout 
      double timeout;
      //! Recovery plan
      //std::string recovery_plan;
      //! Entity label of the plan generator.
      std::string label_gen;
      //! Absolute maximum depth.
      float max_depth;
    };

    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Target system id
      uint16_t m_target;
      //! Target estimated state 
      IMC::EstimatedState m_estate;
      //! Target plan 
      Plan::Engine::Plan *m_target_plan;
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
      //! Has tracking maneuver started? 
      bool m_tracking_started;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_target_plan(NULL),
        m_last_known_lat(0),
        m_last_known_lon(0),
        m_last_known_height(0),
        m_has_update(false),
        m_has_plan(false),
        m_tracking_started(false)
      {
        param("Target Name", m_args.target_name)
        .description("Target Name (system to be followed).");
        
        param("Target Plan", m_args.target_plan_id)
        .description("Target Plan ID (name of plan target will follow).");

        param("Timeout", m_args.timeout)
        .defaultValue("86400.0")
        .units(Units::Second)
        .description("Simulator timeout if no update is received");

        //m_ctx.config.get("General", "Recovery Plan", "dislodge", m_args.recovery_plan);
        m_ctx.config.get("General", "Absolute Maximum Depth", "100.0", m_args.max_depth);

        bind<IMC::PlanDB>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::UsblFixExtended>(this);
        bind<IMC::FollowSystem>(this);
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
        Memory::clear(m_target_plan);
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

        if(m_target == IMC::AddressResolver::invalid())
        {
          err("Target is invalid. Check if system name: '%s' exist.", m_args.target_name.c_str());
          return;
        }

        m_estate.setSource(m_target);
        debug("Target: '%s'", resolveSystemId(m_target));
      }

      void 
      consume(const IMC::FollowSystem *msg)
      {
        if(msg->system != m_target)
        {
          err("Target is not the same as defined in FollowSystem: %s", resolveSystemId(msg->getSource()));
        }

        if(!m_tracking_started)
        {
          m_tracking_started = true;
          debug("Tracking of system '%s' started.", resolveSystemId(m_target));
        }
      }

      void
      consume(const IMC::PlanDB *req)
      {
        if(req->getDestination() != getSystemId())
        {
          return;
        }

        if(req->type == IMC::PlanDB::DBT_REQUEST)
        {
          if(req->op == IMC::PlanDB::DBOP_SET)
          {
            debug("Plan Id = '%s'", req->plan_id.c_str());

            const IMC::PlanSpecification *spec = 0;

            if(!req->arg.get(spec))
              err("No plan spesification given.");

            m_target_plan = new Plan::Engine::Plan(spec, false, false, 100, this, 10, &m_ctx.config);
            m_has_plan = true;
          }
        }
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
      sendAUVEstimatedState()
      {
        if(!m_has_update || !m_has_plan)
          return;

        double x = 0, y = 0, z = 0, theta = 0, psi = 0, u = 0, w = 0;

        propagateAlongPlan(x, y, z, theta, psi, u, w);

        m_estate.lat = m_last_known_lat;
        m_estate.lon = m_last_known_lat;
        m_estate.height = m_last_known_height;
        m_estate.x = x;
        m_estate.y = y;
        m_estate.z = z;
        m_estate.phi = 0;
        m_estate.theta = theta;
        m_estate.psi = psi;
        m_estate.u = u;
        m_estate.v = 0; 
        m_estate.w = w;
        m_estate.p = 0;
        m_estate.q = 0;
        m_estate.r = 0;
        m_estate.setTimeStamp();

        dispatch(m_estate);
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
        sendAUVEstimatedState();
      }
    };
  }
}

DUNE_TASK
