#pragma once
#include "stm32f1xx_hal.h"

#define R 0.27
#define P 15
#define PSI 0.02
#define V 23

#define MILLI_R (R * 1000)
#define MILLI_PSI (PSI * 1000)
#define MILLI_V (V * 1000)

// ################################################################################

#define PWM_FREQ         49230      // PWM frequency in Hz
#define DEAD_TIME        32         // PWM deadtime

// ################################################################################

#define DEBUG_SERIAL_USART2
//#define DEBUG_SERIAL_USART3
#define DEBUG_BAUD       115200     // UART baud rate
//#define DEBUG_SERIAL_SERVOTERM
#define DEBUG_SERIAL_ASCII
//#define DEBUG_I2C_LCD
