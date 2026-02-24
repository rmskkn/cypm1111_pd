/*******************************************************************************
 * File Name: cycfg_pins.h
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.60.0
 * device-db 4.35.0.9884
 * mtb-pdl-cat2 2.19.1.17368
 *
 *******************************************************************************
 * Copyright 2026 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT1
#define CYBSP_SWDCK_PORT_NUM 1U
#define CYBSP_SWDCK_PIN 0U
#define CYBSP_SWDCK_NUM 0U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_0_HSIOM
    #define ioss_0_port_1_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_1_pin_0_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define CYBSP_SWDCK_HAL_PORT_PIN P1_0
#define CYBSP_SWDCK P1_0
#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT1
#define CYBSP_SWDIO_PORT_NUM 1U
#define CYBSP_SWDIO_PIN 4U
#define CYBSP_SWDIO_NUM 4U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_4_HSIOM
    #define ioss_0_port_1_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_1_pin_4_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define CYBSP_SWDIO_HAL_PORT_PIN P1_4
#define CYBSP_SWDIO P1_4
#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define CYBSP_USER_BTN_ENABLED 1U
#define CYBSP_USER_BTN1_ENABLED CYBSP_USER_BTN_ENABLED
#define CYBSP_USER_BTN_PORT GPIO_PRT2
#define CYBSP_USER_BTN1_PORT CYBSP_USER_BTN_PORT
#define CYBSP_USER_BTN_PORT_NUM 2U
#define CYBSP_USER_BTN1_PORT_NUM CYBSP_USER_BTN_PORT_NUM
#define CYBSP_USER_BTN_PIN 0U
#define CYBSP_USER_BTN1_PIN CYBSP_USER_BTN_PIN
#define CYBSP_USER_BTN_NUM 0U
#define CYBSP_USER_BTN1_NUM CYBSP_USER_BTN_NUM
#define CYBSP_USER_BTN_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_USER_BTN1_DRIVEMODE CYBSP_USER_BTN_DRIVEMODE
#define CYBSP_USER_BTN_INIT_DRIVESTATE 1
#define CYBSP_USER_BTN1_INIT_DRIVESTATE CYBSP_USER_BTN_INIT_DRIVESTATE
#ifndef ioss_0_port_2_pin_0_HSIOM
    #define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_USER_BTN_HSIOM ioss_0_port_2_pin_0_HSIOM
#define CYBSP_USER_BTN1_HSIOM CYBSP_USER_BTN_HSIOM
#define CYBSP_USER_BTN_IRQ ioss_interrupts_gpio_2_IRQn
#define CYBSP_USER_BTN1_IRQ CYBSP_USER_BTN_IRQ

#if defined (CY_USING_HAL)
#define CYBSP_USER_BTN_HAL_PORT_PIN P2_0
#define CYBSP_USER_BTN1_HAL_PORT_PIN CYBSP_USER_BTN_HAL_PORT_PIN
#define CYBSP_USER_BTN P2_0
#define CYBSP_USER_BTN1 CYBSP_USER_BTN
#define CYBSP_USER_BTN_HAL_IRQ CYHAL_GPIO_IRQ_BOTH
#define CYBSP_USER_BTN1_HAL_IRQ CYBSP_USER_BTN_HAL_IRQ
#define CYBSP_USER_BTN_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_USER_BTN1_HAL_DIR CYBSP_USER_BTN_HAL_DIR
#define CYBSP_USER_BTN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#define CYBSP_USER_BTN1_HAL_DRIVEMODE CYBSP_USER_BTN_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define CYBSP_USER_LED_ENABLED 1U
#define CYBSP_USER_LED1_ENABLED CYBSP_USER_LED_ENABLED
#define CYBSP_USER_LED_PORT GPIO_PRT2
#define CYBSP_USER_LED1_PORT CYBSP_USER_LED_PORT
#define CYBSP_USER_LED_PORT_NUM 2U
#define CYBSP_USER_LED1_PORT_NUM CYBSP_USER_LED_PORT_NUM
#define CYBSP_USER_LED_PIN 1U
#define CYBSP_USER_LED1_PIN CYBSP_USER_LED_PIN
#define CYBSP_USER_LED_NUM 1U
#define CYBSP_USER_LED1_NUM CYBSP_USER_LED_NUM
#define CYBSP_USER_LED_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_USER_LED1_DRIVEMODE CYBSP_USER_LED_DRIVEMODE
#define CYBSP_USER_LED_INIT_DRIVESTATE 1
#define CYBSP_USER_LED1_INIT_DRIVESTATE CYBSP_USER_LED_INIT_DRIVESTATE
#ifndef ioss_0_port_2_pin_1_HSIOM
    #define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_USER_LED_HSIOM ioss_0_port_2_pin_1_HSIOM
#define CYBSP_USER_LED1_HSIOM CYBSP_USER_LED_HSIOM
#define CYBSP_USER_LED_IRQ ioss_interrupts_gpio_2_IRQn
#define CYBSP_USER_LED1_IRQ CYBSP_USER_LED_IRQ

#if defined (CY_USING_HAL)
#define CYBSP_USER_LED_HAL_PORT_PIN P2_1
#define CYBSP_USER_LED1_HAL_PORT_PIN CYBSP_USER_LED_HAL_PORT_PIN
#define CYBSP_USER_LED P2_1
#define CYBSP_USER_LED1 CYBSP_USER_LED
#define CYBSP_USER_LED_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_USER_LED1_HAL_IRQ CYBSP_USER_LED_HAL_IRQ
#define CYBSP_USER_LED_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define CYBSP_USER_LED1_HAL_DIR CYBSP_USER_LED_HAL_DIR
#define CYBSP_USER_LED_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_USER_LED1_HAL_DRIVEMODE CYBSP_USER_LED_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define CYBSP_DEBUG_UART_TX_ENABLED 1U
#define CYBSP_UART_TX_ENABLED CYBSP_DEBUG_UART_TX_ENABLED
#define CYBSP_DEBUG_UART_TX_PORT GPIO_PRT4
#define CYBSP_UART_TX_PORT CYBSP_DEBUG_UART_TX_PORT
#define CYBSP_DEBUG_UART_TX_PORT_NUM 4U
#define CYBSP_UART_TX_PORT_NUM CYBSP_DEBUG_UART_TX_PORT_NUM
#define CYBSP_DEBUG_UART_TX_PIN 0U
#define CYBSP_UART_TX_PIN CYBSP_DEBUG_UART_TX_PIN
#define CYBSP_DEBUG_UART_TX_NUM 0U
#define CYBSP_UART_TX_NUM CYBSP_DEBUG_UART_TX_NUM
#define CYBSP_DEBUG_UART_TX_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_UART_TX_DRIVEMODE CYBSP_DEBUG_UART_TX_DRIVEMODE
#define CYBSP_DEBUG_UART_TX_INIT_DRIVESTATE 1
#define CYBSP_UART_TX_INIT_DRIVESTATE CYBSP_DEBUG_UART_TX_INIT_DRIVESTATE
#ifndef ioss_0_port_4_pin_0_HSIOM
    #define ioss_0_port_4_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_DEBUG_UART_TX_HSIOM ioss_0_port_4_pin_0_HSIOM
#define CYBSP_UART_TX_HSIOM CYBSP_DEBUG_UART_TX_HSIOM
#define CYBSP_DEBUG_UART_TX_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_UART_TX_IRQ CYBSP_DEBUG_UART_TX_IRQ

#if defined (CY_USING_HAL)
#define CYBSP_DEBUG_UART_TX_HAL_PORT_PIN P4_0
#define CYBSP_UART_TX_HAL_PORT_PIN CYBSP_DEBUG_UART_TX_HAL_PORT_PIN
#define CYBSP_DEBUG_UART_TX P4_0
#define CYBSP_UART_TX CYBSP_DEBUG_UART_TX
#define CYBSP_DEBUG_UART_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_UART_TX_HAL_IRQ CYBSP_DEBUG_UART_TX_HAL_IRQ
#define CYBSP_DEBUG_UART_TX_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define CYBSP_UART_TX_HAL_DIR CYBSP_DEBUG_UART_TX_HAL_DIR
#define CYBSP_DEBUG_UART_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_UART_TX_HAL_DRIVEMODE CYBSP_DEBUG_UART_TX_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define CYBSP_DEBUG_UART_RX_ENABLED 1U
#define CYBSP_UART_RX_ENABLED CYBSP_DEBUG_UART_RX_ENABLED
#define CYBSP_DEBUG_UART_RX_PORT GPIO_PRT4
#define CYBSP_UART_RX_PORT CYBSP_DEBUG_UART_RX_PORT
#define CYBSP_DEBUG_UART_RX_PORT_NUM 4U
#define CYBSP_UART_RX_PORT_NUM CYBSP_DEBUG_UART_RX_PORT_NUM
#define CYBSP_DEBUG_UART_RX_PIN 1U
#define CYBSP_UART_RX_PIN CYBSP_DEBUG_UART_RX_PIN
#define CYBSP_DEBUG_UART_RX_NUM 1U
#define CYBSP_UART_RX_NUM CYBSP_DEBUG_UART_RX_NUM
#define CYBSP_DEBUG_UART_RX_DRIVEMODE CY_GPIO_DM_HIGHZ
#define CYBSP_UART_RX_DRIVEMODE CYBSP_DEBUG_UART_RX_DRIVEMODE
#define CYBSP_DEBUG_UART_RX_INIT_DRIVESTATE 1
#define CYBSP_UART_RX_INIT_DRIVESTATE CYBSP_DEBUG_UART_RX_INIT_DRIVESTATE
#ifndef ioss_0_port_4_pin_1_HSIOM
    #define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_DEBUG_UART_RX_HSIOM ioss_0_port_4_pin_1_HSIOM
#define CYBSP_UART_RX_HSIOM CYBSP_DEBUG_UART_RX_HSIOM
#define CYBSP_DEBUG_UART_RX_IRQ ioss_interrupts_gpio_4_IRQn
#define CYBSP_UART_RX_IRQ CYBSP_DEBUG_UART_RX_IRQ

#if defined (CY_USING_HAL)
#define CYBSP_DEBUG_UART_RX_HAL_PORT_PIN P4_1
#define CYBSP_UART_RX_HAL_PORT_PIN CYBSP_DEBUG_UART_RX_HAL_PORT_PIN
#define CYBSP_DEBUG_UART_RX P4_1
#define CYBSP_UART_RX CYBSP_DEBUG_UART_RX
#define CYBSP_DEBUG_UART_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_UART_RX_HAL_IRQ CYBSP_DEBUG_UART_RX_HAL_IRQ
#define CYBSP_DEBUG_UART_RX_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define CYBSP_UART_RX_HAL_DIR CYBSP_DEBUG_UART_RX_HAL_DIR
#define CYBSP_DEBUG_UART_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#define CYBSP_UART_RX_HAL_DRIVEMODE CYBSP_DEBUG_UART_RX_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define CYBSP_I2C_SDA_ENABLED 1U
#define CYBSP_I2C_SDA_PORT GPIO_PRT5
#define CYBSP_I2C_SDA_PORT_NUM 5U
#define CYBSP_I2C_SDA_PIN 0U
#define CYBSP_I2C_SDA_NUM 0U
#define CYBSP_I2C_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define CYBSP_I2C_SDA_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_0_HSIOM
    #define ioss_0_port_5_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_I2C_SDA_HSIOM ioss_0_port_5_pin_0_HSIOM
#define CYBSP_I2C_SDA_IRQ ioss_interrupts_gpio_5_IRQn

#if defined (CY_USING_HAL)
#define CYBSP_I2C_SDA_HAL_PORT_PIN P5_0
#define CYBSP_I2C_SDA P5_0
#define CYBSP_I2C_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_I2C_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_I2C_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

#define CYBSP_I2C_SCL_ENABLED 1U
#define CYBSP_I2C_SCL_PORT GPIO_PRT5
#define CYBSP_I2C_SCL_PORT_NUM 5U
#define CYBSP_I2C_SCL_PIN 1U
#define CYBSP_I2C_SCL_NUM 1U
#define CYBSP_I2C_SCL_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define CYBSP_I2C_SCL_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_1_HSIOM
    #define ioss_0_port_5_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_I2C_SCL_HSIOM ioss_0_port_5_pin_1_HSIOM
#define CYBSP_I2C_SCL_IRQ ioss_interrupts_gpio_5_IRQn

#if defined (CY_USING_HAL)
#define CYBSP_I2C_SCL_HAL_PORT_PIN P5_1
#define CYBSP_I2C_SCL P5_1
#define CYBSP_I2C_SCL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_I2C_SCL_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_I2C_SCL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_USER_BTN_config;

#define CYBSP_USER_BTN1_config CYBSP_USER_BTN_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_USER_BTN_obj;
#define CYBSP_USER_BTN1_obj CYBSP_USER_BTN_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_USER_LED_config;

#define CYBSP_USER_LED1_config CYBSP_USER_LED_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_USER_LED_obj;
#define CYBSP_USER_LED1_obj CYBSP_USER_LED_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_DEBUG_UART_TX_config;

#define CYBSP_UART_TX_config CYBSP_DEBUG_UART_TX_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_DEBUG_UART_TX_obj;
#define CYBSP_UART_TX_obj CYBSP_DEBUG_UART_TX_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_DEBUG_UART_RX_config;

#define CYBSP_UART_RX_config CYBSP_DEBUG_UART_RX_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_DEBUG_UART_RX_obj;
#define CYBSP_UART_RX_obj CYBSP_DEBUG_UART_RX_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_I2C_SDA_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_I2C_SDA_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t CYBSP_I2C_SCL_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_I2C_SCL_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
