/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : GPIO1.h
**     Project     : wolf
**     Processor   : MKE04Z128VLD4
**     Component   : GPIO_LDD
**     Version     : Component 01.128, Driver 01.08, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-12-20, 02:33, # CodeGen: 0
**     Abstract    :
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : GPIO1
**          Port                                           : GPIOA
**          Port width                                     : 32 bits
**          Mask of allocated pins                         : 0xFFE7FFC3
**          Interrupt service/event                        : Disabled
**          Bit fields                                     : 6
**            Bit field                                    : 
**              Field name                                 : IO_DATA
**              Pins                                       : 8
**                Pin                                      : 
**                  Pin                                    : PTD0/KBI0_P24/FTM2_CH2/SPI1_SCK
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD1/KBI0_P25/FTM2_CH3/SPI1_MOSI
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD2/KBI0_P26/SPI1_MISO
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD3/KBI0_P27/SPI1_PCS
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD4/KBI0_P28
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD5/KBI0_P29/PWT_IN0
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD6/KBI0_P30/UART2_RX
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTD7/KBI0_P31/UART2_TX
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_ADDR
**              Pins                                       : 13
**                Pin                                      : 
**                  Pin                                    : PTA6/KBI0_P6/FTM2_FLT1/ACMP1_IN0/ADC0_SE2
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTA7/KBI0_P7/FTM2_FLT2/ACMP1_IN1/ADC0_SE3
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB0/KBI0_P8/UART0_RX/PWT_IN1/ADC0_SE4
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB1/KBI0_P9/UART0_TX/ADC0_SE5
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB2/KBI0_P10/SPI0_SCK/FTM0_CH0/ADC0_SE6
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB3/KBI0_P11/SPI0_MOSI/FTM0_CH1/ADC0_SE7
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB4/KBI0_P12/FTM2_CH4/SPI0_MISO/ACMP1_IN2/NMI_b
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB5/KBI0_P13/FTM2_CH5/SPI0_PCS/ACMP1_OUT
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB6/KBI0_P14/I2C0_SDA/XTAL
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTB7/KBI0_P15/I2C0_SCL/EXTAL
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTC0/KBI0_P16/FTM2_CH0/ADC0_SE8
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTC1/KBI0_P17/FTM2_CH1/ADC0_SE9
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTC2/KBI0_P18/FTM2_CH2/ADC0_SE10
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_OE
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC5/KBI0_P21/FTM1_CH1/RTCO
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_RW
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC6/KBI0_P22/UART1_RX
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_CE
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTC7/KBI0_P23/UART1_TX
**                  Initial pin direction                  : Output
**                    Initial output state                 : 1
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_EA
**              Pins                                       : 2
**                Pin                                      : 
**                  Pin                                    : PTA0/KBI0_P0/FTM0_CH0/I2C0_4WSCLOUT/ACMP0_IN0/ADC0_SE0
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTA1/KBI0_P1/FTM0_CH1/I2C0_4WSDAOUT/ACMP0_IN1/ADC0_SE1
**                  Initial pin direction                  : Input
**                  Initial pin event                      : Disabled
**          Initialization                                 : 
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnPortEvent                                : Disabled
**     Contents    :
**         Init                    - LDD_TDeviceData* GPIO1_Init(LDD_TUserData *UserDataPtr);
**         SetFieldValue           - void GPIO1_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         GetFieldValue           - GPIO1_TFieldValue GPIO1_GetFieldValue(LDD_TDeviceData *DeviceDataPtr,...
**         SetFieldInputDirection  - void GPIO1_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr,...
**         SetFieldOutputDirection - void GPIO1_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr,...
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file GPIO1.h
** @version 01.08
** @brief
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
*/         
/*!
**  @addtogroup GPIO1_module GPIO1 module documentation
**  @{
*/         

#ifndef __GPIO1_H
#define __GPIO1_H

/* MODULE GPIO1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "IO_Map.h"
#include "GPIO_PDD.h"
#include "PORT_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define GPIO1_PRPH_BASE_ADDRESS  0x400FF000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define GPIO1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_GPIO1_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define GPIO1_Init_METHOD_ENABLED      /*!< Init method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldValue_METHOD_ENABLED /*!< SetFieldValue method of the component GPIO1 is enabled (generated) */
#define GPIO1_GetFieldValue_METHOD_ENABLED /*!< GetFieldValue method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldInputDirection_METHOD_ENABLED /*!< SetFieldInputDirection method of the component GPIO1 is enabled (generated) */
#define GPIO1_SetFieldOutputDirection_METHOD_ENABLED /*!< SetFieldOutputDirection method of the component GPIO1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */

/* Definition of bit field constants */
#define IO_DATA ((LDD_GPIO_TBitField)0)
#define IO_ADDR ((LDD_GPIO_TBitField)1)
#define IO_OE ((LDD_GPIO_TBitField)2)
#define IO_RW ((LDD_GPIO_TBitField)3)
#define IO_CE ((LDD_GPIO_TBitField)4)
#define IO_EA ((LDD_GPIO_TBitField)5)

/* Definition of implementation constants */
#define GPIO1_ALLOCATED_PINS_MASK 0xFFE7FFC3U /*!< Mask of all allocated pins from the port */
#define GPIO1_MODULE_BASE_ADDRESS GPIOA_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO1_PORTCONTROL_BASE_ADDRESS PORT_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO1_AVAILABLE_EVENTS_MASK 0x00U /*!< Mask of all available events */
#define GPIO1_FIELD_0_PIN_0 LDD_GPIO_PIN_24 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_1 LDD_GPIO_PIN_25 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_2 LDD_GPIO_PIN_26 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_3 LDD_GPIO_PIN_27 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_4 LDD_GPIO_PIN_28 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_5 LDD_GPIO_PIN_29 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_6 LDD_GPIO_PIN_30 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_0_PIN_7 LDD_GPIO_PIN_31 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_0 LDD_GPIO_PIN_6 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_1 LDD_GPIO_PIN_7 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_2 LDD_GPIO_PIN_8 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_3 LDD_GPIO_PIN_9 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_4 LDD_GPIO_PIN_10 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_5 LDD_GPIO_PIN_11 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_6 LDD_GPIO_PIN_12 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_7 LDD_GPIO_PIN_13 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_8 LDD_GPIO_PIN_14 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_9 LDD_GPIO_PIN_15 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_10 LDD_GPIO_PIN_16 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_11 LDD_GPIO_PIN_17 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_1_PIN_12 LDD_GPIO_PIN_18 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_2_PIN_0 LDD_GPIO_PIN_21 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_3_PIN_0 LDD_GPIO_PIN_22 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_4_PIN_0 LDD_GPIO_PIN_23 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_5_PIN_0 LDD_GPIO_PIN_0 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_FIELD_5_PIN_1 LDD_GPIO_PIN_1 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO1_IO_DATA_START_BIT 24u    /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_DATA_MASK 0xFF000000u /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_IO_ADDR_START_BIT 6u     /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_ADDR_MASK 0x0007FFC0u /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_IO_OE_START_BIT 21u      /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_OE_MASK 0x00200000u   /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_IO_RW_START_BIT 22u      /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_RW_MASK 0x00400000u   /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_IO_CE_START_BIT 23u      /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_CE_MASK 0x00800000u   /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO1_IO_EA_START_BIT 0u       /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO1_IO_EA_MASK 0x03u         /*!< Mask of the bits allocated by the bit field (within the port) */
/* Representation of unaligned data value of the port.
   Unsigned integer of proper width depending on the size of the GPIO port allocated.
   Typically the value of n-th bit represents the data for the n-th pin within the port.
   Such value is not abstracted from the physical position of the bits within the port. */
typedef uint32_t GPIO1_TPortValue;

/* Representation of right-aligned data value of the bit field.
   Typically the value of n-th bit represents the data of the n-th bit within the bit field (not within the port).
   There are used only so many lowest bits, as it is denoted by the width of the bit field.
   Such value is abstracted from the physical position of the bit field pins within the port.
   Equals to the type <compId>_TPortValue. */
typedef GPIO1_TPortValue GPIO1_TFieldValue;



/*
** ===================================================================
**     Method      :  GPIO1_Init (component GPIO_LDD)
*/
/*!
**     @brief
**         This method initializes the associated peripheral(s) and the
**         component internal variables. The method is called
**         automatically as a part of the application initialization
**         code.
**     @param
**         UserDataPtr     - Pointer to the RTOS device
**                           structure. This pointer will be passed to
**                           all events as parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* GPIO1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldValue (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets the output data value of the specified bit
**         field.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @param
**         Value           - Aligned data value to writting to the
**                           specified bit field. The bit 0 corresponds
**                           with the pin which has index 0 within the
**                           given bit field, the bit 1 corresponds with
**                           the pin which has index 1 within the given
**                           bit field, etc.
*/
/* ===================================================================*/
void GPIO1_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Value);

/*
** ===================================================================
**     Method      :  GPIO1_GetFieldValue (component GPIO_LDD)
*/
/*!
**     @brief
**         This method returns the current input data of the specified
**         field.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to reading. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
**     @return
**                         - Aligned current port input value masked for
**                           allocated pins of the field. The bit 0
**                           corresponds with the pin which has index 0
**                           within the given bit field, the bit 1
**                           corresponds with the pin which has index 1
**                           within the given bit field, etc.
*/
/* ===================================================================*/
GPIO1_TFieldValue GPIO1_GetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldInputDirection (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets all pins of the field to the input
**         direction.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to write. Bit fields are
**                           defined during design time and for each bit
**                           field there is a generated constant.
*/
/* ===================================================================*/
void GPIO1_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO1_SetFieldOutputDirection (component GPIO_LDD)
*/
/*!
**     @brief
**         This method sets all pins of the field to the output
**         direction.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Field           - Bit field to set to the output
**                           direction. Bit fields are defined during
**                           design time and for each bit field there is
**                           a generated constant.
**     @param
**         Value           - Aligned data value to appear on the
**                           bit field pins after they have been
**                           switched to the output direction.
*/
/* ===================================================================*/
void GPIO1_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO1_TFieldValue Value);

/* END GPIO1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __GPIO1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
