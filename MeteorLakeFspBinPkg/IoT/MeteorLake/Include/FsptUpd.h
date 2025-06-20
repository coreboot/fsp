/** @file

Copyright (c) 2025, Intel Corporation. All rights reserved.<BR>

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.
* Neither the name of Intel Corporation nor the names of its contributors may
  be used to endorse or promote products derived from this software without
  specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
  THE POSSIBILITY OF SUCH DAMAGE.

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPTUPD_H__
#define __FSPTUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** Fsp T Core UPD
**/
typedef struct {

/** Offset 0x0040
**/
  UINT32                      MicrocodeRegionBase;

/** Offset 0x0044
**/
  UINT32                      MicrocodeRegionSize;

/** Offset 0x0048
**/
  UINT32                      CodeRegionBase;

/** Offset 0x004C
**/
  UINT32                      CodeRegionSize;

/** Offset 0x0050
**/
  UINT8                       Reserved[16];
} FSPT_CORE_UPD;

/** Fsp T Configuration
**/
typedef struct {

/** Offset 0x0060 - PcdSerialIoUartDebugEnable
  Enable SerialIo Uart debug library with/without initializing SerialIo Uart device in FSP.
  0:Disable, 1:Enable and Initialize, 2:Enable without Initializing
**/
  UINT8                       PcdSerialIoUartDebugEnable;

/** Offset 0x0061 - PcdSerialIoUartNumber
  Select SerialIo Uart Controller for debug.
  0:SerialIoUart0, 1:SerialIoUart1, 2:SerialIoUart2
**/
  UINT8                       PcdSerialIoUartNumber;

/** Offset 0x0062 - PcdSerialIoUartMode - FSPT
  Select SerialIo Uart Controller mode
  0:SerialIoUartDisabled, 1:SerialIoUartPci, 2:SerialIoUartHidden, 3:SerialIoUartCom,
  4:SerialIoUartSkipInit
**/
  UINT8                       PcdSerialIoUartMode;

/** Offset 0x0063 - PcdSerialIoUartPowerGating - FSPT
  Select SerialIo Uart Controller Powergating mode
  0:Disabled, 1:Enabled, 2:Auto
**/
  UINT8                       PcdSerialIoUartPowerGating;

/** Offset 0x0064 - PcdSerialIoUartBaudRate - FSPT
  Set default BaudRate Supported from 0 - default to 6000000
**/
  UINT32                      PcdSerialIoUartBaudRate;

/** Offset 0x0068 - Pci Express Base Address
  Base address to be programmed for Pci Express
**/
  UINT64                      PcdPciExpressBaseAddress;

/** Offset 0x0070 - Pci Express Region Length
  Region Length to be programmed for Pci Express
**/
  UINT32                      PcdPciExpressRegionLength;

/** Offset 0x0074 - PcdSerialIoUartParity - FSPT
  Set default Parity.
  0: DefaultParity, 1: NoParity, 2: EvenParity, 3: OddParity
**/
  UINT8                       PcdSerialIoUartParity;

/** Offset 0x0075 - PcdSerialIoUartDataBits - FSPT
  Set default word length. 0: Default, 5,6,7,8
**/
  UINT8                       PcdSerialIoUartDataBits;

/** Offset 0x0076 - PcdSerialIoUartStopBits - FSPT
  Set default stop bits.
  0: DefaultStopBits, 1: OneStopBit, 2: OneFiveStopBits, 3: TwoStopBits
**/
  UINT8                       PcdSerialIoUartStopBits;

/** Offset 0x0077 - PcdSerialIoUartAutoFlow - FSPT
  Enables UART hardware flow control, CTS and RTS lines.
  0: Disable, 1:Enable
**/
  UINT8                       PcdSerialIoUartAutoFlow;

/** Offset 0x0078 - PcdSerialIoUartRxPinMux - FSPT
  Select RX pin muxing for SerialIo UART used for debug
**/
  UINT32                      PcdSerialIoUartRxPinMux;

/** Offset 0x007C - PcdSerialIoUartTxPinMux - FSPT
  Select TX pin muxing for SerialIo UART used for debug
**/
  UINT32                      PcdSerialIoUartTxPinMux;

/** Offset 0x0080 - PcdSerialIoUartRtsPinMux - FSPT
  Select SerialIo Uart used for debug Rts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_RTS*
  for possible values.
**/
  UINT32                      PcdSerialIoUartRtsPinMux;

/** Offset 0x0084 - PcdSerialIoUartCtsPinMux - FSPT
  Select SerialIo Uart used for debug Cts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_CTS*
  for possible values.
**/
  UINT32                      PcdSerialIoUartCtsPinMux;

/** Offset 0x0088 - PcdSerialIoUartDebugMmioBase - FSPT
  Select SerialIo Uart default MMIO resource in SEC/PEI phase when PcdSerialIoUartMode
  = SerialIoUartPci.
**/
  UINT32                      PcdSerialIoUartDebugMmioBase;

/** Offset 0x008C - PcdSerialIoUartDebugPciCfgBase - FSPT
  Specify PciCfgBase address. Allows for SerialIO UART functionality outside Bus 0
**/
  UINT32                      PcdSerialIoUartDebugPciCfgBase;

/** Offset 0x0090 - PcdLpcUartDebugEnable
  Enable to initialize LPC Uart device in FSP.
  0:Disable, 1:Enable
**/
  UINT8                       PcdLpcUartDebugEnable;

/** Offset 0x0091 - Debug Interfaces
  Debug Interfaces. BIT0-RAM, BIT1-UART, BIT3-USB3, BIT4-Serial IO, BIT5-TraceHub,
  BIT2 - Not used.
**/
  UINT8                       PcdDebugInterfaceFlags;

/** Offset 0x0092 - PcdSerialDebugLevel
  Serial Debug Message Level. 0:Disable, 1:Error Only, 2:Error & Warnings, 3:Load,
  Error, Warnings & Info, 4:Load, Error, Warnings, Info & Event, 5:Load, Error, Warnings,
  Info & Verbose.
  0:Disable, 1:Error Only, 2:Error and Warnings, 3:Load Error Warnings and Info, 4:Load
  Error Warnings and Info, 5:Load Error Warnings Info and Verbose
**/
  UINT8                       PcdSerialDebugLevel;

/** Offset 0x0093 - ISA Serial Base selection
  Select ISA Serial Base address. Default is 0x3F8.
  0:0x3F8, 1:0x2F8
**/
  UINT8                       PcdIsaSerialUartBase;

/** Offset 0x0094 - PcdSerialIo2ndUartEnable
  Enable Additional SerialIo Uart device in FSP.
  0:Disable, 1:Enable and Initialize, 2:Enable without Initializing
**/
  UINT8                       PcdSerialIo2ndUartEnable;

/** Offset 0x0095 - PcdSerialIo2ndUartNumber
  Select SerialIo Uart Controller Number
  0:SerialIoUart0, 1:SerialIoUart1, 2:SerialIoUart2
**/
  UINT8                       PcdSerialIo2ndUartNumber;

/** Offset 0x0096 - PcdSerialIo2ndUartMode - FSPT
  Select SerialIo Uart Controller mode
  0:SerialIoUartDisabled, 1:SerialIoUartPci, 2:SerialIoUartHidden, 3:SerialIoUartCom,
  4:SerialIoUartSkipInit
**/
  UINT8                       PcdSerialIo2ndUartMode;

/** Offset 0x0097
**/
  UINT8                       Rsvd020[1];

/** Offset 0x0098 - PcdSerialIo2ndUartBaudRate - FSPT
  Set default BaudRate Supported from 0 - default to 6000000
**/
  UINT32                      PcdSerialIo2ndUartBaudRate;

/** Offset 0x009C - PcdSerialIo2ndUartParity - FSPT
  Set default Parity.
  0: DefaultParity, 1: NoParity, 2: EvenParity, 3: OddParity
**/
  UINT8                       PcdSerialIo2ndUartParity;

/** Offset 0x009D - PcdSerialIo2ndUartDataBits - FSPT
  Set default word length. 0: Default, 5,6,7,8
**/
  UINT8                       PcdSerialIo2ndUartDataBits;

/** Offset 0x009E - PcdSerialIo2ndUartStopBits - FSPT
  Set default stop bits.
  0: DefaultStopBits, 1: OneStopBit, 2: OneFiveStopBits, 3: TwoStopBits
**/
  UINT8                       PcdSerialIo2ndUartStopBits;

/** Offset 0x009F - PcdSerialIo2ndUartAutoFlow - FSPT
  Enables UART hardware flow control, CTS and RTS lines.
  0: Disable, 1:Enable
**/
  UINT8                       PcdSerialIo2ndUartAutoFlow;

/** Offset 0x00A0 - PcdSerialIo2ndUartRxPinMux - FSPT
  Select RX pin muxing for SerialIo UART
**/
  UINT32                      PcdSerialIo2ndUartRxPinMux;

/** Offset 0x00A4 - PcdSerialIo2ndUartTxPinMux - FSPT
  Select TX pin muxing for SerialIo UART
**/
  UINT32                      PcdSerialIo2ndUartTxPinMux;

/** Offset 0x00A8 - PcdSerialIo2ndUartRtsPinMux - FSPT
  Select SerialIo Uart Rts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_RTS*
  for possible values.
**/
  UINT32                      PcdSerialIo2ndUartRtsPinMux;

/** Offset 0x00AC - PcdSerialIo2ndUartCtsPinMux - FSPT
  Select SerialIo Uart Cts pin muxing. Refer to GPIO_*_MUXING_SERIALIO_UARTx_CTS*
  for possible values.
**/
  UINT32                      PcdSerialIo2ndUartCtsPinMux;

/** Offset 0x00B0 - PcdSerialIo2ndUartMmioBase - FSPT
  Select SerialIo Uart default MMIO resource in SEC/PEI phase when PcdSerialIo2ndUartMode
  = SerialIoUartPci.
**/
  UINT32                      PcdSerialIo2ndUartMmioBase;

/** Offset 0x00B4 - PcdSerialIo2ndUartPciCfgBase - FSPT
  Specify PciCfgBase address. Allows for SerialIO UART functionality outside Bus 0
**/
  UINT32                      PcdSerialIo2ndUartPciCfgBase;

/** Offset 0x00B8
**/
  UINT32                      TopMemoryCacheSize;

/** Offset 0x00BC - FspDebugHandler
  <b>Optional</b> pointer to the boot loader's implementation of FSP_DEBUG_HANDLER.
**/
  UINT32                      FspDebugHandler;

/** Offset 0x00C0 - Serial Io SPI Chip Select Polarity
  Sets polarity for each chip Select. Available options: 0:SerialIoSpiCsActiveLow,
  1:SerialIoSpiCsActiveHigh
**/
  UINT8                       PcdSerialIoSpiCsPolarity[2];

/** Offset 0x00C2 - Serial Io SPI Chip Select Enable
  0:Disabled, 1:Enabled. Enables GPIO for CS0 or CS1 if it is Enabled
**/
  UINT8                       PcdSerialIoSpiCsEnable[2];

/** Offset 0x00C4 - Serial Io SPI Device Mode
  When mode is set to Pci, controller is initalized in early stage. Available modes:
  0:SerialIoSpiDisabled, 1:SerialIoSpiPci.
**/
  UINT8                       PcdSerialIoSpiMode;

/** Offset 0x00C5 - Serial Io SPI Default Chip Select Output
  Sets Default CS as Output. Available options: 0:CS0, 1:CS1
**/
  UINT8                       PcdSerialIoSpiDefaultCsOutput;

/** Offset 0x00C6 - Serial Io SPI Default Chip Select Mode HW/SW
  Sets Default CS Mode Hardware or Software. Available options: 0:HW, 1:SW
**/
  UINT8                       PcdSerialIoSpiCsMode;

/** Offset 0x00C7 - Serial Io SPI Default Chip Select State Low/High
  Sets Default CS State Low or High. Available options: 0:Low, 1:High
**/
  UINT8                       PcdSerialIoSpiCsState;

/** Offset 0x00C8 - Serial Io SPI Device Number
  Select which Serial Io SPI controller is initalized in early stage.
**/
  UINT8                       PcdSerialIoSpiNumber;

/** Offset 0x00C9
**/
  UINT8                       Rsvd030[3];

/** Offset 0x00CC - Serial Io SPI Device MMIO Base
  Assigns MMIO for Serial Io SPI controller usage in early stage.
**/
  UINT32                      PcdSerialIoSpiMmioBase;

/** Offset 0x00D0 - Serial IO SPI CS Pin Muxing
  Select SerialIo SPI CS pin muxing. Refer to GPIO_*_MUXING_SERIALIO_SPIx_CS* for
  possible values.
**/
  UINT32                      PcdSerialIoSpiCsPinMux[2];

/** Offset 0x00D8 - Serial IO SPI CLK Pin Muxing
  Select SerialIo SPI CLK pin muxing. Refer to GPIO_*_MUXING_SERIALIO_SPIx_CLK* for
  possible values.
**/
  UINT32                      PcdSerialIoSpiClkPinMux;

/** Offset 0x00DC - Serial IO SPI MISO Pin Muxing
  Select SerialIo SPI MISO pin muxing. Refer to GPIO_*_MUXING_SERIALIO_SPIx_MISO*
  for possible values.
**/
  UINT32                      PcdSerialIoSpiMisoPinMux;

/** Offset 0x00E0 - Serial IO SPI MOSI Pin Muxing
  Select SerialIo SPI MOSI pin muxing. Refer to GPIO_*_MUXING_SERIALIO_SPIx_MOSI*
  for possible values.
**/
  UINT32                      PcdSerialIoSpiMosiPinMux;

/** Offset 0x00E4 - Serial Io I2C Device MMIO Base
  Assigns MMIO for Serial Io I2C controller usage in early stage.
**/
  UINT32                      PcdSerialIoI2cMmioBase;

/** Offset 0x00E8 - Serial Io I2C Sda Gpio Pin
  Select SerialIo I2C Rts pin. Refer to GPIO_*_MUXING_SERIALIO_I2C*_SDA* for possible values.
**/
  UINT32                      PcdSerialIoI2cSdaPin;

/** Offset 0x00EC - Serial Io I2C Scl Gpio Pin
  Select SerialIo I2C Cts pin. Refer to GPIO_*_MUXING_SERIALIO_I2C*_SCL* for possible values.
**/
  UINT32                      PcdSerialIoI2cSclPin;

/** Offset 0x00F0 - Serial Io I2C Gpio Pad termination
  0x0: Hardware default, 0x1: None, 0x13: 1kOhm weak pull-up, 0x15: 5kOhm weak pull-up,
  0x19: 20kOhm weak pull-up - Enable/disable SerialIo I2C0,I2C1,... pads termination
  respectively. One byte for each controller, byte0 for I2C0, byte1 for I2C1, and so on.
**/
  UINT8                       PcdSerialIoI2cPadsTerm;

/** Offset 0x00F1 - Serial Io I2c Controller Number
  Select SerialIo I2C Controller number to be intilizaed during early boot. Default is 0xFF
  0:SerialIoI2c0, 1:SerialIoI2c1, 2:SerialIoI2c2, 0xFF:Disable
**/
  UINT8                       PcdSerialIoI2cNumber;

/** Offset 0x00F2
**/
  UINT8                       ReservedFsptUpd1[6];
} FSP_T_CONFIG;

/** Fsp T UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSPT_ARCH_UPD               FsptArchUpd;

/** Offset 0x0040
**/
  FSPT_CORE_UPD               FsptCoreUpd;

/** Offset 0x0060
**/
  FSP_T_CONFIG                FsptConfig;

/** Offset 0x00F8
**/
  UINT8                       Rsvd3[6];

/** Offset 0x00FE
**/
  UINT16                      UpdTerminator;
} FSPT_UPD;

#pragma pack()

#endif
