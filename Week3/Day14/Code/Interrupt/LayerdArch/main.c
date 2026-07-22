// doxygen style 
#include "HAL/LCD/LCD_Interface.h"

void main()
{

    KPD_Init();
    EXTI_Init( Exti_Interrupt0,Exti_LowLevel);
    uint8_t Btn = 0 ;
    while(1)
    {
     Btn = KPD_GetButtonValue();
     LCD_WriteData(Btn,Lcd_8bitMode);

    
    }


}

void __vector_1(void) __attribute__((signal));

void __vector_1(void)
{
    static int x  = 0 ;
    x++;
}