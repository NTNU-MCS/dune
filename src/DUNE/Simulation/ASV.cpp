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
// Author: Petter Norgren                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>

// DUNE headers.
#include <DUNE/Simulation/ASV.hpp>

namespace DUNE
{
  namespace Simulation
  {
    ASVSimulation::ASVSimulation(Tasks::Task& task):
      m_task(task),
      // Simulation type
      m_sim_type("3DOF")
    {
      resetModel();
    }

    ASVSimulation::ASVSimulation(const ASVSimulation& model):
      m_task(model.m_task)
    {
      *this = model;
    }

    ASVSimulation::ASVSimulation(Tasks::Task& task, const Math::Matrix& vel):
      m_task(task),
      // Simulation type
      m_sim_type("3DOF")
    {
      resetModel();

      // Vehicle velocity vector
      setVelocity(vel);
    }

    ASVSimulation::ASVSimulation(Tasks::Task& task, const Math::Matrix& pos,
                                 const Math::Matrix& vel):
      m_task(task),
      // Simulation type
      m_sim_type("3DOF")
    {
      resetModel();

      // Vehicle position
      setPosition(pos);

      // Vehicle velocity vector
      setVelocity(vel);
    }

    ASVSimulation&
    ASVSimulation::operator=(const ASVSimulation& model)
    {
      // Motion simulation type
      m_sim_type = model.m_sim_type;

      // Environment parameters
      // Current state vector
      m_current = model.m_current;

      // Time step control
      m_timestep_lim = 1.0;

      // Vehicle position
      m_position = model.m_position;
      // Vehicle velocity vector
      m_velocity = model.m_velocity;
      // Vehicle velocity vector relative to the current, in the ground reference frame
      m_asv2current_gnd_frm = model.m_asv2current_gnd_frm;

      // Vehicle model parameters
      // - Heading time constant
      m_heading_time_cst = model.m_heading_time_cst;
      m_heading_time_cst_f = model.m_heading_time_cst_f;
      // - Speed time constant
      m_speed_time_cst = model.m_speed_time_cst;
      m_speed_time_cst_f = model.m_speed_time_cst_f;
      // Vehicle operation limits and respective initialization flags
      // - Heading rate
      m_heading_rate_lim = model.m_heading_rate_lim;
      m_heading_rate_lim_f = model.m_heading_rate_lim_f;
      // - Longitudinal acceleration
      m_lon_accel_lim = model.m_lon_accel_lim;
      m_lon_accel_lim_f = model.m_lon_accel_lim_f;

      // Control commands
      // - Heading
      m_heading_cmd = model.m_heading_cmd;
      // - Speed
      m_speed_cmd = model.m_speed_cmd;
      // Control commands initialization flags
      // - Speed
      m_speed_cmd_ini = model.m_speed_cmd_ini;

      // Simulation variables
      m_waterspeed = model.m_waterspeed;
      m_ang_attack = model.m_ang_attack;
      m_sideslip = model.m_sideslip;
      m_cos_yaw = model.m_cos_yaw;
      m_sin_yaw = model.m_sin_yaw;

      return *this;
    }

    void
    ASVSimulation::resetModel(void)
    {
      // Environment parameters
      // Current state vector
      m_current = Math::Matrix(3, 1, 0.0);

      // Time step control
      m_timestep_lim = 1.0;

      // Vehicle position
      m_position = Math::Matrix(3, 1, 0.0);
      // Vehicle velocity vector
      m_velocity = Math::Matrix(3, 1, 0.0);
      // Vehicle velocity vector relative to the wind, in the ground reference frame
      m_asv2current_gnd_frm = Math::Matrix(3, 1, 0.0);

      // Vehicle model parameters
      // - Heading time constant
      m_heading_time_cst = 0.0;
      m_heading_time_cst_f = false;
      // - Airspeed time constant
      m_speed_time_cst = 0.0;
      m_speed_time_cst_f = false;
      // Vehicle operation limits and respective initialization flags
      // - Bank rate
      m_heading_rate_lim = 0.0;
      m_heading_rate_lim_f = false;
      // - Longitudinal acceleration
      m_lon_accel_lim = 0.0;
      m_lon_accel_lim_f = false;

      // Control commands
      // - Heading
      m_heading_cmd = 0.0;
      // - Speed
      m_speed_cmd = 0.0;
      // Control commands initialization flags
      // - Speed
      m_speed_cmd_ini = false;

      // Simulation variables
      m_waterspeed = 0.0;
      m_ang_attack = 0.0;
      m_sideslip = 0.0;
      m_cos_yaw = 1.0;
      m_sin_yaw = 0.0;
    }

    ASVSimulation
    ASVSimulation::update(const double& timestep)
    {
      // Check if model has the required commands
      // - Speed
      if (!m_speed_cmd_ini)
      {
        m_task.war("Speed command missing! The state was not updated.");
        return *this;
      }

      // Time step control
      double d_timestep;
      if (m_timestep_lim > 0.0 && timestep > m_timestep_lim)
        d_timestep = m_timestep_lim;
      else
        d_timestep = timestep;

      if (m_sim_type.compare("3DOF") == 0)
        update3DOF(d_timestep);

      return *this;
    }

    ASVSimulation
    ASVSimulation::update(const double& timestep, const double& heading_cmd)
    {
      // - Heading
      commandHeading(heading_cmd);

      // Computed the updated state
      return update(timestep);
    }

    ASVSimulation
    ASVSimulation::update(const double& timestep, const double& heading_cmd, const double& speed_cmd)
    {
      // - Heading
      commandHeading(heading_cmd);
      // - Speed
      commandSpeed(speed_cmd);

      // Computed the updated state
      return update(timestep);
    }

    void
    ASVSimulation::integratePosition(const double& timestep)
    {
      // Heading state update
      m_position(2) = m_position(2) + m_velocity(2) * timestep;
      m_position(2) = Math::Angles::normalizeRadian(m_position(5));

      // Horizontal position state update
      m_position.set(0, 1, 0, 0, m_position.get(0, 1, 0, 0) + m_velocity.get(0, 1, 0, 0) * timestep);
    }

    void
    ASVSimulation::calcASV2CurrentData()
    {
      // Vehicle velocity vector, relative to the current, in the ground reference frame
      m_asv2current_gnd_frm = m_velocity.get(0, 2, 0, 0) - m_current;
      // Speed
      m_waterspeed = m_asv2current_gnd_frm.norm_2();
      // Angle-of-Attack
      m_ang_attack = std::atan(m_asv2current_gnd_frm(2) / m_asv2current_gnd_frm(0));
      // Sideslip
      m_sideslip = std::asin(m_asv2current_gnd_frm(1) / m_waterspeed);
    }

    void
    ASVSimulation::updateVelocity(void)
    {
      // ASV velocity components relative to the current over the ground reference frame
      m_asv2current_gnd_frm(0) = m_waterspeed * m_cos_yaw;
      m_asv2current_gnd_frm(1) = m_waterspeed * m_sin_yaw;
      m_asv2current_gnd_frm(2) = 0.0;
      // ASV velocity components relative to the ground over the ground reference frame
      m_velocity.set(0, 2, 0, 0, m_asv2current_gnd_frm + m_current);
    }

    void
    ASVSimulation::update3DOF(const double& timestep)
    {
      if (timestep <= 0)
        return;

      // Current effects
      calcASV2CurrentData();

      //==========================================================================
      // Vehicle Dynamics
      //==========================================================================

      integratePosition(timestep);

      // Command effect
      // - Speed command
      m_waterspeed = m_speed_cmd - m_current.norm_2();
      // - Heading command
      m_position(2) = m_heading_cmd;

      // Turn rate !!! TODO
      //m_velocity(2) = Math::c_gravity * std::tan(m_position(3)) / m_airspeed;

      updateVelocity();
    }

    void
    ASVSimulation::setPosition(const Math::Matrix& pos)
    {
      int i_pos_size = pos.rows();
      if (i_pos_size != 3)
        m_task.war("Invalid position vector dimension. Vector size must be 3.");

      // Vehicle position
      m_position.set(0, i_pos_size - 1, 0, 0, pos);

      // Simulation variables
      m_cos_yaw = std::cos(m_position(5));
      m_sin_yaw = std::sin(m_position(5));
    }

    void
    ASVSimulation::setVelocity(const Math::Matrix& vel)
    {
      int i_vel_size = vel.rows();
      if (i_vel_size != 3)
        m_task.war("Invalid velocity vector dimension. Vector size must be 3.");

      // Vehicle velocity vector, relative to the ground, in the ground reference frame
      m_velocity.set(0, i_vel_size - 1, 0, 0, vel);

      calcASV2CurrentData();
    }

    void
    ASVSimulation::setCtrl(const double& heading_time_cst, const double& speed_time_cst)
    {
      // Vehicle model parameters
      // - Heading time constant
      m_heading_time_cst = heading_time_cst;
      m_heading_time_cst_f = true;
      // - Speed time constant
      m_speed_time_cst = speed_time_cst;
      m_speed_time_cst_f = true;
    }

    void
    ASVSimulation::setHeadingRateLim(const double& heading_rate_lim)
    {
      // Vehicle operation heading rate limit and respective initialization flag
      m_heading_rate_lim = heading_rate_lim;
      if (heading_rate_lim > 0)
        m_heading_rate_lim_f = true;
      else
        m_heading_rate_lim_f = false;
    }

    void
    ASVSimulation::setAccelLim(const double& lon_accel_lim)
    {
      // Vehicle operation longitudinal acceleration limit and respective initialization flag
      m_lon_accel_lim = lon_accel_lim;
      if (lon_accel_lim > 0)
        m_lon_accel_lim_f = true;
      else
        m_lon_accel_lim_f = false;
    }

    Math::Matrix
    ASVSimulation::getPosition(void)
    {
      // Vehicle position
      return m_position;
    }

    Math::Matrix
    ASVSimulation::getVelocity(void)
    {
      // Vehicle velocity vector, relative to the ground, in the ground reference frame
      return m_velocity;
    }

    double
    ASVSimulation::getWaterSpeed(void)
    {
      // Vehicle's total water speed
      return m_waterspeed;
    }

    double
    ASVSimulation::getGroundSpeed(void)
    {
      // Vehicle's total ground speed
      return m_waterspeed + m_current.norm_2();
    }

    double
    ASVSimulation::getHeadingCmd(void)
    {
      // Vehicle heading
      return m_heading_cmd;
    }

    double
    ASVSimulation::getSpeedCmd(void)
    {
      // Vehicle speed
      return m_speed_cmd;
    }

    void
    ASVSimulation::command(const double& heading_cmd)
    {
      // Control commands
      // - Heading
      commandHeading(heading_cmd);
    }

    void
    ASVSimulation::command(const double& heading_cmd, const double& speed_cmd)
    {
      // Control commands
      // - Heading
      commandHeading(heading_cmd);
      // - Speed
      commandSpeed(speed_cmd);
    }

    void
    ASVSimulation::commandHeading(const double& heading_cmd)
    {
      if (Math::isNaN(heading_cmd)) // Check if the command is a real value
        m_task.war("ASV Simulation - Heading command rejected - Commanded value is not a number!\n");
      else
        m_heading_cmd = heading_cmd;
    }

    void
    ASVSimulation::commandSpeed(const double& speed_cmd)
    {
      if (Math::isNaN(speed_cmd)) // Check if the command is a real value
        m_task.war("ASV Simulation - Speed command rejected - Commanded value is not a number!\n");
      else
      {
        m_speed_cmd = speed_cmd;
        m_speed_cmd_ini = true;
      }
    }
  }
}
