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

namespace Maneuver
{
  namespace TrackSystem
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      double timeout;
      bool announce_active;
      bool remote_active;
      double offset_distance;
      double offset_direction;
      double max_approach_vel;
      double cb_delta;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Variable to save the maneuver's data
      IMC::FollowSystem m_maneuver;
      //! Follower vehicle's Estimated State
      IMC::EstimatedState m_followerEstate;
      //! Target vehicle's Estimated State
      IMC::EstimatedState m_targetEstate;
      //! Desired heading of vehicle
      DUNE::IMC::DesiredHeading m_desHeading;
      //! Desired speed of vehicle
      IMC::DesiredSpeed m_desSpeed;
      //! the start time of the maneuver measured at consume maneuver
      double m_start_time;
      //! the last Clock::get() when the neighbor system's position was updated
      Counter<double> m_last_update;
      //! this boolean tells us if we have an estimated state of the follower system already
      bool m_has_follower_estimated_state;
      //! this boolean tells us if we have an estimated state of the target system already
      bool m_has_target_estimated_state;
      //! Task Arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_has_follower_estimated_state(false),
        m_has_target_estimated_state(false)
      {
        param("Timeout", m_args.timeout)
        .defaultValue("0.0")
        .units(Units::Second)
        .description("Maneuver timeout");

        param("Using Announce", m_args.announce_active)
        .defaultValue("false")
        .description("Using announce to track system");

        param("Maximum approach velocity", m_args.max_approach_vel)
        .defaultValue("1.5")
        .units(Units::MeterPerSecond)
        .description("Maximum allowed approach velocity between target and follower.");

        param("CB delta", m_args.cb_delta)
        .defaultValue("1.0")
        .description("Constant bearing guidance tuning parameter.");

        bindToManeuver<Task, IMC::FollowSystem>();
        bind<IMC::EstimatedState>(this, true); // consume even if inactive
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.timeout))
          m_last_update.setTop(m_args.timeout);
      }

      void
      onManeuverDeactivation(void)
      {
        m_has_follower_estimated_state = false;
        m_has_target_estimated_state = false;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // do not do a thing if the announce method is not active
        if (!m_args.announce_active)
          return;

        if(msg->getSource() == getSystemId())
        {
          m_followerEstate = *msg;
          m_has_follower_estimated_state = true;
          debug("Got estimated state from follower.");
        }

        if(msg->getSource() == m_maneuver.system)
        {
          m_targetEstate = *msg;
          m_has_target_estimated_state = true;
          debug("Got estimated state from follower.");
        }

        if(m_has_follower_estimated_state && m_has_target_estimated_state)
        {
          constantBearingGuidance();
          m_has_follower_estimated_state = false;
          m_has_target_estimated_state = false;

          // update the variable last update
        m_last_update.reset();
        }
      }

      void
      consume(const IMC::FollowSystem* maneuver)
      {
        enableMovement(false);

        m_maneuver = *maneuver;
        m_start_time = Clock::get();

        // Initialize the variable last update to the beginning of the maneuver
        m_last_update.reset();

        debug("offsets are %0.2f %0.2f %0.2f", m_maneuver.x, m_maneuver.y, m_maneuver.z);
        debug("speed is %0.2f units %d", m_maneuver.speed, (int)m_maneuver.speed_units);
      }

      void constantBearingGuidance()
      {
        Matrix p_bar(2), v(2), v_t(2);
        double kappa_bar;

        p_bar(0) = m_targetEstate.x - m_followerEstate.x;
        p_bar(1) = m_targetEstate.y - m_followerEstate.y;
        v_t(0) = m_targetEstate.u;
        v_t(1) = m_targetEstate.v;

        kappa_bar = m_args.max_approach_vel*(1/sqrt((transpose(p_bar)*p_bar)(0) + pow(m_args.cb_delta,2)));
        v = v_t + kappa_bar*p_bar;

        // Set desired speed
        if(m_maneuver.speed_units == Units::MeterPerSecond)
        {
          m_desSpeed.value = v.norm_2();
          m_desSpeed.speed_units = Units::MeterPerSecond;
        }
        else if(m_maneuver.speed_units == Units::Knot)
        {
          m_desSpeed.value = v.norm_2()*Units::c_ms_to_knot;
          m_desSpeed.speed_units = Units::Knot;
        }
        else
        {
          err("ConstantBearingGuidance: Unknown speed units.");
          return;
        }

        // Set desired heading
        m_desHeading.value = atan2(v(1), v(0));

        // Dispatch setpoints
        dispatch(m_desHeading);
        dispatch(m_desSpeed);

        debug("Sent new speed setpoint: %f", m_desSpeed.value);
        debug("Sent new heading setpoint: %f", m_desHeading.value);
      }

      void
      onStateReport(void)
      {
        if (!m_maneuver.duration)
          return;

        if (m_last_update.overflow())
          signalError(DTR("timeout to receive new remote info was exceeded."));

        double delta = Clock::get() - m_start_time - m_maneuver.duration;
        if (delta >= 0)
          signalCompletion();
        else
          signalProgress((uint16_t)(Math::round(delta)));
      }

      //! Function for enabling and disabling the control loops
      void
      enableMovement(bool enable)
      {
        const uint32_t mask = (IMC::CL_SPEED & IMC::CL_YAW);

        if (enable)
          setControl(mask);
        else
          setControl(0);
      }
    };
  }
}

DUNE_TASK
