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
      //! Timeout 
      double timeout;
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
      IMC::Announce m_announce;
      //! Target estimated state 
      IMC::EstimatedState m_estate;
      //! Target simulated state 
      IMC::SimulatedState m_sstate;
      //! Virtual heartbeat 
      IMC::Heartbeat m_hb;
      //! the last Clock::get() when the target system's position was updated
      Counter<double> m_last_update;
      //! Remote State computed heading's timestamp, for evaluating the best heading to be used
      //Counter<double> m_heading_timestamp;
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
      //! Has first estimated state
      bool m_has_first_estimate;
      //! Has an updated estimated state 
      bool m_has_updated_estimate;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_remote_heading(0),
        m_last_known_bearing(0),
        m_last_known_lat(0),
        m_last_known_lon(0),
        m_has_first_estimate(false),
        m_has_updated_estimate(false)
        //m_first_announce(true)
      {
        param("Target Name", m_args.target_name)
        .description("Target Name (system to be followed)");

        param("Virtual Source Name", m_args.source_name)
        .defaultValue("lauv-virtual-1")
        .description("Virtual System name used as source");

        param("Virtual System Enable", m_args.virtual_enable)
        .defaultValue("true")
        .description("Enable or disable virtual system");

        param("Timeout", m_args.timeout)
        .defaultValue("86400.0")
        .units(Units::Second)
        .description("Simulator timeout if no update is received");

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

        m_source = resolveSystemName(m_args.source_name);

        if(m_source == DUNE::IMC::AddressResolver::invalid())
        {
          err("Target is invalid. Check if system name: '%s' exist.", m_args.source_name.c_str());
          return;
        }

        if(m_args.virtual_enable)
        {
          m_sstate.setSource(m_source);
          m_hb.setSource(m_source);
          m_announce.setSource(m_source);
          m_announce.sys_name = m_args.source_name;
          m_announce.owner = m_source;
          debug("Virtual vehicle enabled: Source '%s', Target: '%s'", resolveSystemId(m_source), resolveSystemId(m_target));
        }
        else
        {
          m_sstate.setSource(m_target);
          m_hb.setSource(m_target);
          debug("Virtual vehicle disabled. Target: '%s'", resolveSystemId(m_target));
        }
      }

      /*void
      consume(const IMC::GpsFix* msg)
      {
        // Check if system is active and activate it if not
        if (!isActive())
          requestActivation();

        if(msg->getSource() != m_target)
          return;

        debug("Consuming GPS-Fix from target.");

        // Defining origin.
        m_sstate.lat = msg->lat;
        m_sstate.lon = msg->lon;
        m_sstate.height = msg->height;

        m_start_time = Clock::get();
        m_last_update = Clock::get();
        m_has_gps_fix = true;
      }*/

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
        trace("Consuming Estimated state from all systems.");

        // Discard messages from this system
        if(msg->getSource() == getSystemId())
          return;

        // Not the vehicle we are tracking
        if (msg->getSource() != m_target)
        {
          debug("Received EstimatedState from %s", resolveSystemId(msg->getSource()));
          return;
        }

        debug("Consuming EstimatedState from target.");

        m_estate = *msg;
        m_has_updated_estimate = true;
        m_last_update.reset();
      }

      void
      sendSimulatedState()
      {
        if(!m_has_first_estimate)
          return;

        double Ts = 0, dx = 0, dy = 0, dz = 0;

        if(m_has_updated_estimate)
        {
          // TODO (use rotatation to body and u,v,w)
          m_has_updated_estimate = false;
          debug("Has an updated estimate.");
        }

        m_sstate.lat = m_estate.lat;
        m_sstate.lon = m_estate.lon;
        m_sstate.height = m_estate.height;
        m_sstate.x = m_estate.x + Ts*dx;
        m_sstate.y = m_estate.y + Ts*dy;
        m_sstate.z = m_estate.z + Ts*dz;
        m_sstate.phi = 0;
        m_sstate.theta = m_estate.theta; // TODO: Change to plan theta
        m_sstate.psi = m_estate.psi; // TODO: Change to plan psi
        m_sstate.u = m_estate.u; // TODO: Change to plan u
        m_sstate.v = 0; 
        m_sstate.w = m_estate.w; // TODO: Change to plan w
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
      sendAnnounce()
      {
        if(!m_has_first_estimate)
          return;
          
        if(!m_args.virtual_enable)
          return;

        m_announce.lat = m_sstate.lat;
        m_announce.lon = m_sstate.lon;
        m_announce.setTimeStamp();

        dispatch(m_announce);
      }

      void 
      sendHeartBeat()
      {
        if(!m_has_first_estimate)
          return;

        m_hb.setTimeStamp();

        dispatch(m_hb);
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
