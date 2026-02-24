/*******************************************************************************
 * File Name: cycfg_peripherals.h
 *
 * Description:
 * Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_scb_i2c.h"
#include "cy_sysclk.h"
#include "cy_scb_uart.h"
#include "cy_usbpd_common.h"
#include "cy_tcpwm_counter.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define CYBSP_I2C_ENABLED 1U
#define CYBSP_I2C_HW SCB0
#define CYBSP_I2C_IRQ scb_0_interrupt_IRQn
#define CYBSP_UART_ENABLED 1U
#define CYBSP_UART_HW SCB2
#define CYBSP_UART_IRQ scb_2_interrupt_IRQn
#define PD_PORT0_ENABLED 1U
#define mtb_usbpd_port0_HW PDSS0
#define mtb_usbpd_port0_HW_TRIM PDSS_TRIMS0
#define mtb_usbpd_port0_IRQ usbpd_0_interrupt_IRQn
#define mtb_usbpd_port0_DS_IRQ usbpd_0_interrupt_wakeup_IRQn
#define CYBSP_TIMER_ENABLED 1U
#define CYBSP_TIMER_HW TCPWM
#define CYBSP_TIMER_NUM 0UL
#define CYBSP_TIMER_MASK (1UL << 0)
#define CYBSP_TIMER_IRQ tcpwm_interrupts_0_IRQn

extern const cy_stc_scb_i2c_config_t CYBSP_I2C_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_I2C_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_uart_config_t CYBSP_UART_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_UART_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_fault_vbus_ovp_cfg_t mtb_usbpd_port0_ovp_config;
extern const cy_stc_fault_vbus_uvp_cfg_t mtb_usbpd_port0_uvp_config;
extern const cy_stc_legacy_charging_cfg_t mtb_usbpd_port0_legacy_charging_config;
extern const cy_stc_usbpd_config_t mtb_usbpd_port0_config;
extern const cy_stc_tcpwm_counter_config_t CYBSP_TIMER_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t CYBSP_TIMER_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
