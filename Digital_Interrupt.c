/*
 * Digital_Interrupt.c
 *
 *  Created on: June 26, 2018
 *      Author: Dody_PC
 */
#include "types.h"
#include "registers.h"
#include "DIO.h"
#include "uart.h"


#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))

void __vector_1(void)    __attribute((signal,__INR_ATTRS));

void __vector_1(void)
{
	DIO_vid_SetPinValue(1,0 ,1);
	UART_vidInit();
	UART_vidTransmitDatastring("send");


}
void DEI_External_Interrupt()
{
	SetBit(SREG,7);
	SetBit(GICR,6);
	ClrBit(MCUCR,0);
	SetBit(MCUCR,1);
}
