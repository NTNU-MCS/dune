//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>
#include <cerrno>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MCC USB headers.
#include <mccusb/pmd.h>
#include <mccusb/usb-1608G.h>

namespace Sensors
{
  namespace MCC1608G
  {
    using DUNE_NAMESPACES;

    //! Maximum number of ADC channels.
    static const size_t c_adcs_count = 8;

    //! Task arguments.
    struct Arguments
    {
      //! ADC Messages.
      std::string adc_messages[c_adcs_count];
      //! ADC entity labels.
      std::string adc_elabels[c_adcs_count];
      //! ADC conversion factors.
      std::vector<double> adc_factors[c_adcs_count];
      //! ADC range scale.
      int adc_range[c_adcs_count];
      //! ADC differential mode.
      bool adc_diff[c_adcs_count];
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! USB handle.
      libusb_device_handle* m_udev;
      //!
      float m_table_ain[NGAINS_1608G][2];
      //! Scan list used to configure the A/D channels.
      ScanList m_scan_list[NCHAN_1608G];
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_udev(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          std::string option = String::str("ADC Channel %u - Message", i);
          param(option, m_args.adc_messages[i]);

          option = String::str("ADC Channel %u - Entity Label", i);
          param(option, m_args.adc_elabels[i]);

          option = String::str("ADC Channel %u - Range Scale", i);
          param(option, m_args.adc_range[i])
          .values("1, 2, 5, 10")
          .defaultValue("5");

          option = String::str("ADC Channel %u - Differential", i);
          param(option, m_args.adc_diff[i])
          .defaultValue("false");

          option = String::str("ADC Channel %u - Conversion", i);
          param(option, m_args.adc_factors[i])
          .size(2)
          .defaultValue("1.0, 0.0");
        }
      }

      void
      onResourceInitialization(void)
      {
        connect();
        float temperature = readTemperature();
        debug("temperature: %0.2f", temperature);

        disconnect();
      }

      void
      onUpdateParameters(void)
      {
      }

      ~Task(void)
      {
        onResourceRelease();
      }


      void
      onActivation(void)
      {
      }

      void
      onDeactivation(void)
      {
      }

      float
      readTemperature(void)
      {
        float value = 0;
        usbTemperature_USB1608G(m_udev, &value);
        return value;
      }

      void
      connect(void)
      {
        debug("initializing USB library");
        int rv = libusb_init(NULL);
        if (rv < 0)
          throw std::runtime_error("failed to initialize libusb");

        debug("probing MCC device");
        m_udev = usb_device_find_USB_MCC(USB1608G_PID, NULL);
        if (m_udev == NULL)
          throw std::runtime_error("failed to find valid device");

        debug("initializing MCC device");
        usbInit_1608G(m_udev);

        debug("building gain table");
        usbBuildGainTable_USB1608G(m_udev, m_table_ain);

        uint16_t version = 0xbeef;
        usbFPGAVersion_USB1608G(m_udev, &version);
        debug("FPGA version %02x.%02x", version >> 0x8, version & 0xff);

        char serial[9] = {0};
        usbGetSerialNumber_USB1608G(m_udev, serial);
        debug("serial number: %s\n", serial);
      }

      void
      disconnect(void)
      {
        cleanup_USB1608G(m_udev);
        m_udev = NULL;
      }

      void
      setupScanList(void)
      {
        for (size_t i = 0; i < c_adcs_count; ++i)
        {
          m_scan_list[i].range = m_args.adc_range[i];
          m_scan_list[i].mode = m_args.adc_diff[i] ? DIFFERENTIAL : 0;
          m_scan_list[i].channel = i;
        }

      }

      void
      startScan(void)
      {
        usbAInScanStop_USB1608G(m_udev);
        usbAInScanClearFIFO_USB1608G(m_udev);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
