#define F_CPU 8000000UL
#include <util/delay.h>
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
#include "MCAL/Timer0/Timer0_Interface.h"

// generate a 1 kHz PWM signal using a timer.

// Prescaller 
// timer0 
// Dutycycle 
void main()
{
    Timer0_Config_t   PWMConfig = 
    {
        .TimerMode=Timer0_FastPWM,
        .PWMOutputMode=Timer0_OC0NinInverting,
    };
    TIMER0_Init(PWMConfig);
    DIO_InitPin(Dio_GroupB,Dio_Pin3,Output);
    TIMER0_Start(Timer0_Prescaller8);
    while(1)
    {
        TIMER0_SetPWMDutyCycle(50);
        _delay_ms(1000);
        
        TIMER0_SetPWMDutyCycle(90);
        _delay_ms(1000);

    }
}



