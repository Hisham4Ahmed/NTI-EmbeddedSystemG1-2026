#define F_CPU 8000000UL
#include <util/delay.h>
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
#include "MCAL/Timer0/Timer0_Interface.h"
#include "MCAL/UART/UART_Interface.h"
// generate a 1 kHz PWM signal using a timer.

// Prescaller = 8
// timer0  = 8bit 

//PWM Frequence =  SystemFreq / Prescaller * 2^n ;
// ->             8Mhz / 8 * 256 => 3906.25 -> 3.9Khz
// ->             8Mhz / 64 * 256 => 488.28125 -> 0.488khz
// ->             16Mhz / 64 * 256 => 976.5625 -> 



void main()
{
    UART_Init(Config);
    UART_SendBytePolling(0x00FF);
    
}



