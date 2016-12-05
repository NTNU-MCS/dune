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

    //! %Task arguments.
    struct Arguments
    {
      //! Target Name
      std::string target_name;
      //! Source Name
      std::string source_name;
      //! Use announce method
      //bool announce_active;
      //! Use remote state
      //bool remote_active;
      //! Use virtual system 
      bool virtual_enable;
    };

    struct Task: public Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Target system id
      uint16_t m_target;
      //! Source system id
      uint16_t m_source;
      //! Virtual system announce
      DUNE::IMC::Announce m_announce;
      //! Target estimated state 
      IMC::EstimatedState m_estate;
      //! Target simulated state 
      IMC::SimulatedState m_sstate;
      //! the last Clock::get() when the target system's position was updated
      Counter<double> m_last_update;
      //! Remote State computed heading's timestamp, for evaluating the best heading to be used
      Counter<double> m_heading_timestamp;
      //! this variable will hold the value of the heading computed when using the announce method instead of the remote state.
      double m_remote_heading;
      //! variable to hold the last known bearing
      double m_last_known_bearing;
      //! variable to hold the last known speed
      double m_last_known_speed;
      //! variable that will hold the last known latittude
      double m_last_known_lat;
      //! variable that will hold the last known longitude
      double m_last_known_lon;
      //! is it the first time consume announce is being ran?
      //bool m_first_announce;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_remote_heading(0),
        m_last_known_bearing(0),
        m_last_known_lat(0),
        m_last_known_lon(0)
        //m_first_announce(true)
      {
        param("Target Name", m_args.target_name)
        .description("Target Name");

        param("Source Name", m_args.source_name)
        .defaultValue("lauv-virtual-1")
        .description("System name used as source");

        param("Virtual System Enable", m_args.virtual_enable)
        .defaultValue("true")
        .description("Enable or disable virtual system");

        //bind<IMC::Announce>(this);
        bind<IMC::EstimatedState>(this);
        //bind<IMC::RemoteState>(this);
      }

      //! Acquire resources
      void
      onResourceAcquisition(void)
      {
        checkSystems();

        m_last_update.reset();
        m_heading_timestamp.reset();
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

        m_source = resolveSystemName(m_args.source_name);

        if(m_source == DUNE::IMC::AddressResolver::invalid())
        {
          err("Target is invalid. Check if system name: '%s' exist.", m_args.source_name.c_str());
          return;
        }

        if(m_args.virtual_enable)
        {
          m_sstate.setSource(m_source);
          m_announce.setSource(m_source);
          m_announce.sys_name = m_args.source_name;
          m_announce.owner = m_source;
        }
        else
        {
          m_sstate.setSource(m_target);
        }
      }

      /*void
      consume(const DUNE::IMC::RemoteState* rs)
      {
        // Not the vehicle we are tracking or remote method is inactive
        if (rs->getSource() != m_target || !m_args.remote_active)
          return;

        // update the variable last update
        m_last_update.reset();

        // update the variable last heading update
        m_heading_timestamp.reset();

        m_last_known_lat = rs->lat;
        m_last_known_lon = rs->lon;
        m_remote_heading = rs->psi;

        trace("system being pursued has heading: %0.2f", rs->psi);
        trace("remote data: lat %0.5f, lon %0.5f, depth %d, timestamp %0.4f", rs->lat, rs->lon, rs->depth, rs->getTimeStamp());
      }*/

      /*void
      consume(const IMC::Announce* msg)
      {
        // Not the vehicle we are tracking or the announce method is inactive
        if (msg->getSource() != m_target || !m_args.announce_active)
          return;

        // update the variable last update
        m_last_update.reset();

        // update "last" variables
        m_last_known_lat = msg->lat;
        m_last_known_lon = msg->lon;

        trace("system being pursued has heading: %0.2f and speed %0.2f", m_last_known_bearing, m_last_known_speed);
        trace("announce data: lat %0.5f, lon %0.5f, %0.2f, %0.4f", msg->lat, msg->lon, msg->height, msg->getTimeStamp());
      }*/

      void
      consume(const IMC::EstimatedState* msg)
      {
        // Not the vehicle we are tracking
        if (msg->getSource() != m_target)
          return;

        m_last_update.reset();
        m_last_known_lat = msg->lat;
        m_last_known_lon = msg->lon;
        m_last_known_speed = msg->u;

        m_estate = *msg;
      }

      void
      sendSimulatedState()
      {
        double lat, lon, depth, x, y, theta, psi, u, w;

        // TODO 
        lat = m_last_known_lat;
        lon = m_last_known_lon;
        u = m_last_known_speed;

        depth = 0; x = 0; y= 0; theta = 0; psi = 0; u = 0; w = 0; 

        m_sstate.lat = lat;
        m_sstate.lon = lon;
        m_sstate.height = depth;
        m_sstate.x = x;
        m_sstate.y = y;
        m_sstate.z = depth;
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
      }

      void
      sendAnnounce()
      {
        if(!m_args.virtual_enable)
          return;

        m_announce.lat = m_last_known_lat;
        m_announce.lon = m_last_known_lon;
        m_announce.setTimeStamp();
      }

      void 
      sendHeartBeat()
      {
        // TODO
      }

      void
      task(void)
      {
        sendHeartBeat();
        sendAnnounce();
        sendSimulatedState();
      }
    };
  }
}

DUNE_TASK
