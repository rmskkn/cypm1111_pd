/*
 * Copyright 2026 Roman Skakun
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
 */

#include "cybsp.h"
#include "cy_pdl.h"

#define LED_BLINK_DELAY_MS (500u)
#define GREETING           "Hello world\r\n"

/*
 * Brings up the board, greets over UART, then blinks the user LED at 1 Hz
 * forever.
 */
int main(void)
{
    cy_stc_scb_uart_context_t uart_context;

    if (cybsp_init() != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    Cy_SCB_UART_Init(CYBSP_UART_HW, &CYBSP_UART_config, &uart_context);
    Cy_SCB_UART_Enable(CYBSP_UART_HW);

    __enable_irq();

    Cy_SCB_UART_PutString(CYBSP_UART_HW, GREETING);

    for (;;)
    {
        Cy_GPIO_Inv(CYBSP_USER_LED_PORT, CYBSP_USER_LED_PIN);
        Cy_SysLib_Delay(LED_BLINK_DELAY_MS);
    }
}
