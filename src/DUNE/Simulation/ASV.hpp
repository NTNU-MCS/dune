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

#ifndef DUNE_SIMULATION_ASV_HPP_INCLUDED_
#define DUNE_SIMULATION_ASV_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/General.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  // Forward declarations.
  namespace Math {class Matrix; }

  namespace Simulation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ASVSimulation;

    class ASVSimulation
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("ASV simulation error: " + msg)
        { }
      };

      /*
      class Warning: public std::warn
      {
        Warning(const std::string& msg):
          std::warn("ASV simulation warning: " + msg)
        { }
      };
      */

      //! Constructor.
      //! Create a simulation model with null initial state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      ASVSimulation(Tasks::Task& task);

      //! Constructor.
      //! Create a simulation model as a copy of another
      //! @param[in] simul - simulation model to be replicated
      ASVSimulation(const ASVSimulation& simul);

      //! Constructor.
      //! Create a simulation model based on the initial velocity state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      //! @param[in] vel - initial velocity vector
      ASVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& vel);

      //! Constructor.
      //! Create a simulation model based on the initial state.
      //! 3 DOF simulation.
      //! @param[in] task - filter parent task.
      //! @param[in] pos - initial position vector
      //! @param[in] vel - initial velocity vector
      ASVSimulation(Tasks::Task& task, const DUNE::Math::Matrix& pos, const DUNE::Math::Matrix& vel);

      //! This method assigns a UAVSimulation with another UAVSimulation.
      //! @param[in] model reference to UAV simulation model to be assigned
      //! @return reference to resultant UAV simulation model
      ASVSimulation&
      operator=(const ASVSimulation& model);

      //! This method resets all the vehicle model variables.
      void
      resetModel(void);

      //! This method updates the simulated state with the defined time step.
      //! @param[in] timestep - time step for the update
      //! @return the updated state
      ASVSimulation
      update(const double& timestep);

      //! This method updates the simulated state with the defined time step and controls.
      //! @param[in] timestep - time step for the update
      //! @param[in] heading_cmd - applied heading command
      //! @return the updated state
      ASVSimulation
      update(const double& timestep, const double& heading_cmd);

      //! This method updates the simulated state with the defined time step and controls.
      //! @param[in] timestep - time step for the update
      //! @param[in] heading_cmd - applied heading command
      //! @param[in] speed_cmd - applied speed command
      //! @return the updated state
      ASVSimulation
      update(const double& timestep, const double& heading_cmd, const double& speed_cmd);

      //! This method sets the vehicle model control parameters.
      //! @param[in] heading_time_cst - bank angle time constant
      //! @param[in] speed_time_cst - speed time constant
      void
      setCtrl(const double& heading_time_cst, const double& speed_time_cst);

      //! This method sets the vehicle model heading rate operation constraint.
      //! @param[in] bank_rate_lim - bank rate limit
      void
      setHeadingRateLim(const double& heading_rate_lim);

      //! This method sets the vehicle model longitudinal acceleration operation constraint.
      //! @param[in] lon_accel_lim - longitudinal acceleration limit
      void
      setAccelLim(const double& lon_accel_lim);

      //! This method gets the vehicle state.
      //! @returns pos - current position vector
      DUNE::Math::Matrix
      getPosition(void);

      //! This method gets the vehicle state.
      //! @returns vel - current velocity vector
      DUNE::Math::Matrix
      getVelocity(void);

      //! This method gets the vehicle state.
      //! @returns waterspeed - current speed over water of vehicle
      double
      getWaterSpeed(void);

      //! This method gets the vehicle state.
      //! @returns groundspeed - current speed over ground of vehicle
      double
      getGroundSpeed(void);

      //! This method gets the vehicle heading command.
      //! @returns heading command
      double
      getHeadingCmd(void);

      //! This method gets the vehicle speed command.
      //! @returns speed command
      double
      getSpeedCmd(void);

      //! This method sets the vehicle state.
      //! @param[in] pos - new position vector
      void
      setPosition(const DUNE::Math::Matrix& pos);

      //! This method sets the vehicle state.
      //! @param[in] vel - new velocity vector
      void
      setVelocity(const DUNE::Math::Matrix& vel);

      //! This method sets the vehicle control commands.
      //! @param[in] bank_cmd - applied heading command
      void
      command(const double& heading_cmd);

      //! This method sets the vehicle control commands.
      //! @param[in] heading_cmd - applied heading command
      //! @param[in] speed_cmd - applied speed command
      void
      command(const double& heading_cmd, const double& speed_cmd);

      //! This method sets the vehicle heading command.
      //! @param[in] bank_cmd - applied heading command
      void
      commandHeading(const double& heading_cmd);

      //! This method sets the vehicle airspeed command.
      //! @param[in] airspeed_cmd - applied airspeed command
      void
      commandSpeed(const double& speed_cmd);

      // Parent task.
      Tasks::Task& m_task;

      //! Simulation type
      std::string m_sim_type;

      //! Current state vector
      DUNE::Math::Matrix m_current;

      //! Time step control
      //! - If negative, the time step limitation is disabled
      double m_timestep_lim;

    private:
      //! Vehicle position
      DUNE::Math::Matrix m_position;
      //! Vehicle velocity vector
      DUNE::Math::Matrix m_velocity;
      //! Vehicle velocity vector relative to the wind, in the ground reference frame
      DUNE::Math::Matrix m_asv2current_gnd_frm;

      //! Kinematic models' variables
      //! Vehicle model parameters and respective initialization flags
      //! - Heading time constant
      double m_heading_time_cst;
      bool m_heading_time_cst_f;
      //! - Speed time constant
      double m_speed_time_cst;
      bool m_speed_time_cst_f;
      //! Vehicle operation limits and respective initialization flags
      //! - Heading rate
      double m_heading_rate_lim;
      bool m_heading_rate_lim_f;
      //! - Longitudinal acceleration
      double m_lon_accel_lim;
      bool m_lon_accel_lim_f;

      //! Control commands
      //! - Heading
      double m_heading_cmd;
      //! - Speed
      double m_speed_cmd;
      //! Control commands initialization flags
      //! - Speed
      bool m_speed_cmd_ini;

      //! Stream data
      //double m_groundSpeed;
      double m_waterspeed;
      double m_ang_attack;
      double m_sideslip;

      //! Simulation optimization variables
      double m_cos_yaw;
      double m_sin_yaw;

      //! Simulation update functions
      void
      integratePosition(const double& timestep);

      void
      calcASV2CurrentData(void);

      void
      updateVelocity(void);

      void
      update3DOF(const double& timestep);

      /*
      //! This method acts as destructor.
      void
      erase(void);

      //! This method creates a unique copy of the data of a Matrix.
      void
      split(void);
      */
    };
  }
}

#endif
