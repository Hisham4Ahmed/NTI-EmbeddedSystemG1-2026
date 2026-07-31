#ifndef _UART_INTERFACE_H
#define _UART_INTERFACE_H

#include <stdint.h>

#include "../../COMMON/Definition.h"
#include "../../COMMON/Bitmath.h"
#include "../Atmega32regmap.h"

#include "UART_Private.h"
#include "UART_Config.h"

/*
    1- Mode Select -> Asynch / Synch 
    2- Stop Bit not -> 1Stop / 2 Stop 
    3- Parity Check status -> even / odd / disable 
    4- 
*/


void UART_Init(Uart_Config_t Uart_Config);
void UART_SendBytePolling(uint16_t Data);
uint16_t UART_ReceiveBytePolling();

void UART_EnableRXInterrupt();
void UART_EnableTXInterrupt();
void UART_EnableREInterrupt();

void UART_DisableRXInterrupt();
void UART_DisableTXInterrupt();
void UART_DisableREInterrupt();


void UART_EnableRX();
void UART_EnableTX();
void UART_DisableRX();
void UART_DisableTX();




#endif