#ifndef _LCD_INTERFACE_H
#define _LCD_INTERFACE_H
#include <stdint.h>
void LCD_WriteInstruction(uint8_t Command);
void LCD_WriteData(uint8_t Char);
void LCD_Init();


#endif