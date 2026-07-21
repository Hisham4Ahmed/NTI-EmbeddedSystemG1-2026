#include "../Atmega32regmap.h"
#include "../Bitmath.h"
#include <stdint.h>
#include "LCD_Private.h"
void LCD_WriteData(uint8_t Char)
{
    // RS -> A0 
      SetBit(PORTA_Reg,0);
    // RW -> A1
      ClearBit(PORTA_Reg,1);
    // Data -> C  
        PORTC_Reg=Char;
    // E -> A2 
        SetBit(PORTA_Reg,2);
    // delay
        _delay_ms(1);
    // E -> A2 
        ClearBit(PORTA_Reg,2); 
}
void LCD_WriteInstruction(uint8_t Command)
{
    // RS -> A0 
      ClearBit(PORTA_Reg,0);
    // RW -> A1
      ClearBit(PORTA_Reg,1);
    // Data -> C  
        PORTC_Reg=Command;
    // E -> A2 
        SetBit(PORTA_Reg,2);
    // delay
        _delay_ms(1);
    // E -> A2 
        ClearBit(PORTA_Reg,2); 
}
void LCD_Init()
{
    // Direction 
    SetBit(DDRA_Reg,0); // RS
    SetBit(DDRA_Reg,1); // RW
    SetBit(DDRA_Reg,2); // E 
    DDRC_Reg = 0xFF ; 
    // 8bit init 
    _delay_ms(35);
    //FunctionSet 
    LCD_WriteInstruction(0x38);
    _delay_ms(1);
    LCD_WriteInstruction(Lcd_DisplayOn);
    _delay_ms(1);
    LCD_WriteInstruction(0x01);
    _delay_ms(2);
    LCD_WriteInstruction(/*EntryMode*/);
    
}