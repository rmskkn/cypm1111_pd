/*******************************************************************************
 * File Name: cycfg_peripherals.c
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

#include "cycfg_peripherals.h"

#define CYBSP_TIMER_INPUT_DISABLED 0x7U

const cy_stc_scb_i2c_config_t CYBSP_I2C_config =
{
    .i2cMode = CY_SCB_I2C_MASTER,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 0U,
    .slaveAddressMask = 0U,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = false,
    .lowPhaseDutyCycle = 16,
    .highPhaseDutyCycle = 9,
    .delayInFifoAddress = 0,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_I2C_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_uart_config_t CYBSP_UART_config =
{
    .uartMode = CY_SCB_UART_STANDARD,
    .enableMutliProcessorMode = false,
    .smartCardRetryOnNack = false,
    .irdaInvertRx = false,
    .irdaEnableLowPowerReceiver = false,
    .enableLinMode = false,
    .oversample = 8,
    .enableMsbFirst = false,
    .dataWidth = 8UL,
    .parity = CY_SCB_UART_PARITY_NONE,
    .stopBits = CY_SCB_UART_STOP_BITS_1,
    .enableInputFilter = false,
    .breakWidth = 11UL,
    .dropOnFrameError = false,
    .dropOnParityError = false,
    .receiverAddress = 0x0UL,
    .receiverAddressMask = 0x0UL,
    .acceptAddrInFifo = false,
    .enableCts = false,
    .ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rtsRxFifoLevel = 0UL,
    .rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rxFifoTriggerLevel = 7UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 7UL,
    .txFifoIntEnableMask = 0UL,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_UART_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 2U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_fault_vbus_ovp_cfg_t mtb_usbpd_port0_ovp_config =
{
    .enable = true,
    .mode = 2,
    .threshold = 20,
    .debounce = 10,
    .retryCount = 2,
};
const cy_stc_fault_vbus_uvp_cfg_t mtb_usbpd_port0_uvp_config =
{
    .enable = true,
    .mode = 2,
    .threshold = 80,
    .debounce = 10,
    .retryCount = 2,
};
const cy_stc_legacy_charging_cfg_t mtb_usbpd_port0_legacy_charging_config =
{
    .enable = true,
    .snkSel = 0x3,
    .srcSel = 0x1,
    .appleSrcId = 2,
    .qcSrcType = 0,
    .afcSrcCapCnt = 0,
    .afcSrcCaps = {0x0, 0x0, 0x0, 0x0},
};
const cy_stc_usbpd_config_t mtb_usbpd_port0_config =
{
    .vbusOvpConfig = &mtb_usbpd_port0_ovp_config,
    .vbusUvpConfig = &mtb_usbpd_port0_uvp_config,
    .vbusOcpConfig = NULL,
    .vbusScpConfig = NULL,
    .vbusRcpConfig = NULL,
    .vconnOcpConfig = NULL,
    .ccOvpConfig = NULL,
    .sbuOvpConfig = NULL,
    .legacyChargingConfig = &mtb_usbpd_port0_legacy_charging_config,
    .buckBoostConfig = NULL,
};
const cy_stc_tcpwm_counter_config_t CYBSP_TIMER_config =
{
    .period = 32768,
    .clockPrescaler = CY_TCPWM_COUNTER_PRESCALER_DIVBY_1,
    .runMode = CY_TCPWM_COUNTER_CONTINUOUS,
    .countDirection = CY_TCPWM_COUNTER_COUNT_UP,
    .compareOrCapture = CY_TCPWM_COUNTER_MODE_CAPTURE,
    .compare0 = 16384,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = CY_TCPWM_INT_ON_TC,
    .captureInputMode = CYBSP_TIMER_INPUT_DISABLED & 0x3U,
    .captureInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = CYBSP_TIMER_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = CYBSP_TIMER_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .stopInputMode = CYBSP_TIMER_INPUT_DISABLED & 0x3U,
    .stopInput = CY_TCPWM_INPUT_0,
    .countInputMode = CYBSP_TIMER_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t CYBSP_TIMER_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB0_CLOCK, CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB2_CLOCK, CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_RX, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_TX, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_REFGEN, CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_FILTER1, CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_ISNK, CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS0, CY_SYSCLK_DIV_16_BIT, 3U);
}
void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_I2C_obj);
    cyhal_hwmgr_reserve(&CYBSP_UART_obj);
    cyhal_hwmgr_reserve(&CYBSP_TIMER_obj);
#endif /* defined (CY_USING_HAL) */
}
