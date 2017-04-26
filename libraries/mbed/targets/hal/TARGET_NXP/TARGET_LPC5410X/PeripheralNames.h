/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
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
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ADC_0 = 0,
    ADC_1,
    ADC_2,
    ADC_3,
    ADC_4,
    ADC_5,
    ADC_6,
    ADC_7,
    ADC_8,
    ADC_9,
    ADC_10,
    ADC_11,

} ADCName;

typedef enum {
    UART_0 = (int)LPC_USART0_BASE,
    UART_1 = (int)LPC_USART1_BASE,
    UART_2 = (int)LPC_USART2_BASE,
    UART_3 = (int)LPC_USART3_BASE
} UARTName;

typedef enum {
    SPI_0 = (int)LPC_SPI0_BASE,
    SPI_1 = (int)LPC_SPI1_BASE
} SPIName;

typedef enum {
    I2C_0 = (int)LPC_I2C0_BASE,
    I2C_1 = (int)LPC_I2C1_BASE,
    I2C_2 = (int)LPC_I2C2_BASE
} I2CName;

typedef enum {
    PWM_0 = 0,
    PWM_1,
    PWM_2,
    PWM_3,
    PWM_4,
    PWM_5,
    PWM_6,
    PWM_7
} PWMName;

#define STDIO_UART        UART_0

#ifdef __cplusplus
}
#endif

#endif