/*
 * uart.h
 *
 *  Created on: Apr 13, 2018
 *      Author: Dody_PC
 */
#include "uart_config.h"
#include "registers.h"
#ifndef UART_H_
#define UART_H_

#define myBR (freq/16/BR)-1
void UART_vidInit(void);
void UART_vidTransmitData(u8 Data);
void UART_vidTransmitDatastring(u8*arr);
u8 UART_u8ReceiveData(void);

#endif /* UART_H_ */
