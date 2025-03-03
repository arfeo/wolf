/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : GPIO2.h
**     Project     : wolf
**     Processor   : MKE04Z128VLD4
**     Component   : GPIO_LDD
**     Version     : Component 01.128, Driver 01.08, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-12-20, 13:21, # CodeGen: 0
**     Abstract    :
**         The HAL GPIO component will provide a low level API for unified
**         access to general purpose digital input/output pins across
**         various device designs.
**
**         RTOS drivers using HAL GPIO API will be simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : GPIO2
**          Port                                           : GPIOB
**          Port width                                     : 32 bits
**          Mask of allocated pins                         : 0x7
**          Interrupt service/event                        : Disabled
**          Bit fields                                     : 2
**            Bit field                                    : 
**              Field name                                 : IO_DBGOUT1
**              Pins                                       : 1
**                Pin                                      : 
**                  Pin                                    : PTE0/KBI1_P0/SPI0_SCK/TCLK1/I2C1_SDA
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**            Bit field                                    : 
**              Field name                                 : IO_DBGOUT2
**              Pins                                       : 2
**                Pin                                      : 
**                  Pin                                    : PTE1/KBI1_P1/SPI0_MOSI/I2C1_SCL
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**                Pin                                      : 
**                  Pin                                    : PTE2/KBI1_P2/SPI0_MISO/PWT_IN0
**                  Initial pin direction                  : Output
**                    Initial output state                 : 0
**                  Initial pin event                      : Disabled
**          Initialization                                 : 
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnPortEvent                                : Disabled
**     Contents    :
**         Init                    - LDD_TDeviceData* GPIO2_Init(LDD_TUserData *UserDataPtr);
**         SetFieldValue           - void GPIO2_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField...
**         GetFieldValue           - GPIO2_TFieldValue GPIO2_GetFieldValue(LDD_TDeviceData *DeviceDataPtr,...
**         SetFieldInputDirection  - void GPIO2_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr,...
**         SetFieldOutputDirection - void GPIO2_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr,...
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
** @file GPIO2.h
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
**  @addtogroup GPIO2_module GPIO2 module documentation
**  @{
*/         

#ifndef __GPIO2_H
#define __GPIO2_H

/* MODULE GPIO2. */

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
#define GPIO2_PRPH_BASE_ADDRESS  0x400FF040U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define GPIO2_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_GPIO2_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define GPIO2_Init_METHOD_ENABLED      /*!< Init method of the component GPIO2 is enabled (generated) */
#define GPIO2_SetFieldValue_METHOD_ENABLED /*!< SetFieldValue method of the component GPIO2 is enabled (generated) */
#define GPIO2_GetFieldValue_METHOD_ENABLED /*!< GetFieldValue method of the component GPIO2 is enabled (generated) */
#define GPIO2_SetFieldInputDirection_METHOD_ENABLED /*!< SetFieldInputDirection method of the component GPIO2 is enabled (generated) */
#define GPIO2_SetFieldOutputDirection_METHOD_ENABLED /*!< SetFieldOutputDirection method of the component GPIO2 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */

/* Definition of bit field constants */
#define IO_DBGOUT1 ((LDD_GPIO_TBitField)0)
#define IO_DBGOUT2 ((LDD_GPIO_TBitField)1)

/* Definition of implementation constants */
#define GPIO2_ALLOCATED_PINS_MASK 0x07U /*!< Mask of all allocated pins from the port */
#define GPIO2_MODULE_BASE_ADDRESS GPIOB_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO2_PORTCONTROL_BASE_ADDRESS PORT_BASE_PTR /*!< Name of macro used as the base address */
#define GPIO2_AVAILABLE_EVENTS_MASK 0x00U /*!< Mask of all available events */
#define GPIO2_FIELD_0_PIN_0 LDD_GPIO_PIN_0 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO2_FIELD_1_PIN_0 LDD_GPIO_PIN_1 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO2_FIELD_1_PIN_1 LDD_GPIO_PIN_2 /*!< Constant for the pin in the field used in the method ConnectPin */
#define GPIO2_IO_DBGOUT1_START_BIT 0u  /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO2_IO_DBGOUT1_MASK 0x01u    /*!< Mask of the bits allocated by the bit field (within the port) */
#define GPIO2_IO_DBGOUT2_START_BIT 1u  /*!< Index of the starting bit of the bit field (0 represents LSB) */
#define GPIO2_IO_DBGOUT2_MASK 0x06u    /*!< Mask of the bits allocated by the bit field (within the port) */
/* Representation of unaligned data value of the port.
   Unsigned integer of proper width depending on the size of the GPIO port allocated.
   Typically the value of n-th bit represents the data for the n-th pin within the port.
   Such value is not abstracted from the physical position of the bits within the port. */
typedef uint32_t GPIO2_TPortValue;

/* Representation of right-aligned data value of the bit field.
   Typically the value of n-th bit represents the data of the n-th bit within the bit field (not within the port).
   There are used only so many lowest bits, as it is denoted by the width of the bit field.
   Such value is abstracted from the physical position of the bit field pins within the port.
   Equals to the type <compId>_TPortValue. */
typedef GPIO2_TPortValue GPIO2_TFieldValue;



/*
** ===================================================================
**     Method      :  GPIO2_Init (component GPIO_LDD)
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
LDD_TDeviceData* GPIO2_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  GPIO2_SetFieldValue (component GPIO_LDD)
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
void GPIO2_SetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO2_TFieldValue Value);

/*
** ===================================================================
**     Method      :  GPIO2_GetFieldValue (component GPIO_LDD)
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
GPIO2_TFieldValue GPIO2_GetFieldValue(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO2_SetFieldInputDirection (component GPIO_LDD)
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
void GPIO2_SetFieldInputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field);

/*
** ===================================================================
**     Method      :  GPIO2_SetFieldOutputDirection (component GPIO_LDD)
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
void GPIO2_SetFieldOutputDirection(LDD_TDeviceData *DeviceDataPtr, LDD_GPIO_TBitField Field, GPIO2_TFieldValue Value);

/* END GPIO2. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __GPIO2_H */
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
