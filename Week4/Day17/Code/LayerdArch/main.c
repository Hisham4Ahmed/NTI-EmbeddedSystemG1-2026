#include <util/delay.h>
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/DIO/DIO_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
#include "MCAL/Timer0/Timer0_Interface.h"

void Scheduler()
{
    static uint32_t count = 0 ;
    count++;
    if(count==11719)
    {
        // Action
  
        // Update Preload 
        TIMER0_SetPreload(64);
        // rest Count
        count=0;
    }
}
void main()
{
    // System Toggle Two Led 
        // Led1 toggle Every 1 Sec -> While(1)
        // Led2 toggle Every 3 Sec -> Timer
        /*
            Timer = 8bit   systemfreq= 8Mhz prescaller= 8 
            Req=3sec 
            CLKTIME      = Prescaller/SystemFreq -> 1uSec
            OverFlowtime = 2^Size * CLKTIME = 256uSec
            RelationReq&Over => Req>OverFlow 
            #No OF OVF Count =   ReqTime/OverFlowTime = 3000000/256 
                             =   11718.75 => 11719
            Preload          =    2^Size *(1-0.y) = 256 * (1-0.75) = 64 
        */
       Timer0_Config_t ToggleSysteConf = 
       {
        .TimerMode=Timer0_NormalMode,
        .PreloadValue=64,
       };
       Led_Init(Dio_GroupA,Dio_Pin0);
       Led_Init(Dio_GroupA,Dio_Pin1);
       TIMER0_Init(ToggleSysteConf);
       TIMER0_SetCallBackFunction(Timer0_OverFlowInterrupt,ToggleLed1);
       GIE_Enable();
       TIMER0_Start(Timer0_Prescaller8);
       while(1)
       {
        Led_Toggle(Dio_GroupA,Dio_Pin1);
        _delay_ms(500);
       }
}



