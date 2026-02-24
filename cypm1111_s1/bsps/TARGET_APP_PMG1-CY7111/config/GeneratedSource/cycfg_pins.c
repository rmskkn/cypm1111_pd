/*******************************************************************************
 * File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_SWDCK_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_SWDCK_PORT_NUM,
    .channel_num = CYBSP_SWDCK_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_SWDIO_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_SWDIO_PORT_NUM,
    .channel_num = CYBSP_SWDIO_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_USER_BTN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_PULLUP,
    .hsiom = CYBSP_USER_BTN_HSIOM,
    .intEdge = CY_GPIO_INTR_BOTH,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_USER_BTN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_USER_BTN_PORT_NUM,
    .channel_num = CYBSP_USER_BTN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_USER_LED_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_USER_LED_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_USER_LED_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_USER_LED_PORT_NUM,
    .channel_num = CYBSP_USER_LED_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_DEBUG_UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = CYBSP_DEBUG_UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_DEBUG_UART_TX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_DEBUG_UART_TX_PORT_NUM,
    .channel_num = CYBSP_DEBUG_UART_TX_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_DEBUG_UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = CYBSP_DEBUG_UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_DEBUG_UART_RX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_DEBUG_UART_RX_PORT_NUM,
    .channel_num = CYBSP_DEBUG_UART_RX_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_I2C_SDA_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_I2C_SDA_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_I2C_SDA_PORT_NUM,
    .channel_num = CYBSP_I2C_SDA_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t CYBSP_I2C_SCL_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_I2C_SCL_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = CYBSP_I2C_SCL_PORT_NUM,
    .channel_num = CYBSP_I2C_SCL_PIN,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
    Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
    Cy_GPIO_Pin_Init(CYBSP_USER_BTN_PORT, CYBSP_USER_BTN_PIN, &CYBSP_USER_BTN_config);
    Cy_GPIO_Pin_Init(CYBSP_USER_LED_PORT, CYBSP_USER_LED_PIN, &CYBSP_USER_LED_config);
    Cy_GPIO_Pin_Init(CYBSP_DEBUG_UART_TX_PORT, CYBSP_DEBUG_UART_TX_PIN, &CYBSP_DEBUG_UART_TX_config);
    Cy_GPIO_Pin_Init(CYBSP_DEBUG_UART_RX_PORT, CYBSP_DEBUG_UART_RX_PIN, &CYBSP_DEBUG_UART_RX_config);
    Cy_GPIO_Pin_Init(CYBSP_I2C_SDA_PORT, CYBSP_I2C_SDA_PIN, &CYBSP_I2C_SDA_config);
    Cy_GPIO_Pin_Init(CYBSP_I2C_SCL_PORT, CYBSP_I2C_SCL_PIN, &CYBSP_I2C_SCL_config);
}
void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
    cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
    cyhal_hwmgr_reserve(&CYBSP_USER_BTN_obj);
    cyhal_hwmgr_reserve(&CYBSP_USER_LED_obj);
    cyhal_hwmgr_reserve(&CYBSP_DEBUG_UART_TX_obj);
    cyhal_hwmgr_reserve(&CYBSP_DEBUG_UART_RX_obj);
    cyhal_hwmgr_reserve(&CYBSP_I2C_SDA_obj);
    cyhal_hwmgr_reserve(&CYBSP_I2C_SCL_obj);
#endif /* defined (CY_USING_HAL) */
}
