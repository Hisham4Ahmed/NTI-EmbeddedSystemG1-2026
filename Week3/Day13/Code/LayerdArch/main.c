// doxygen style 
#include "HAL/LCD/LCD_Interface.h"

void main()
{
    LCD_Init(Lcd_8bitMode);
    KPD_Init();
    uint8_t Btn = 0 ;
    while(1)
    {
     Btn = KPD_GetButtonValue();
     LCD_WriteData(Btn,Lcd_8bitMode);

    
    }


}