#include <util/delay.h>
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
static volatile uint8_t UartData = 0 ;
void main()
{
    /*
        Program to control on the 2 Led 
        first Led will be toggle every sec -> Background   -> half done 
        secod led will be turn on or off when pressed on Button  -> Forground 
            Button -> EXTI 
            Led2  -> ISR 
    */
   //Leds
    // 1- Led Toggle 
    Led_Init(Dio_GroupA,Dio_Pin0);
    // 1- Led On OFf By Switch 
    Led_Init(Dio_GroupA,Dio_Pin1);
   //Int0 -> PD2    as input 
   DIO_InitPin(Dio_GroupD,Dio_Pin2,Input);
   EXTI_Init(Exti_Interrupt0,Exti_AnyChange);
   EXTI_Enable(Exti_Interrupt0);
       GIE_Enable(); 
    
   while(1)
   {
    Led_on(Dio_GroupA,Dio_Pin0,SourceConnection);
    _delay_ms(1000);
    Led_off(Dio_GroupA,Dio_Pin0,SourceConnection);
    _delay_ms(1000);

   }

    // GIE_Disable(); // DeadCode 
}

void __vector_1(void)  __attribute__((signal));
void __vector_1(void)
{
    static uint8_t LedState = Off;
    if(LedState==Off)
    {
        // LedON
        Led_on(Dio_GroupA,Dio_Pin1,SourceConnection);
        LedState= On;
        UartData = UDR_Reg;
    }
    else if (LedState==On)
    {
        //Led OFF 
        Led_off(Dio_GroupA,Dio_Pin1,SourceConnection);
        LedState=Off;

    }
 
}

