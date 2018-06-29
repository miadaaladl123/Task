/*
 * TimerInterrupt.c
 *
 *  Created on: Mar 24, 2018
 *      Author: Dody_PC
 */
#include "types.h"
#include "registers.h"
#include "DIO.h"
#include "ADC.h"
#include "uart.h"
#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))
u32 counter=0;


// ISR of Interrupt
void __vector_11(void)    __attribute((signal,__INR_ATTRS));

void __vector_11(void)
{
	counter++;
	if(counter==140625)
	{
		ADC_vid_Init();
		UART_vidInit();
		char result[50];
		u8 digital;
		u8 analog;
		digital=ADC_u8Readop();

		//equation for temp sensor
		analog=(digital*500)/256;
		sprintf(result, "%d", analog);
		UART_vidTransmitDatastring(result);
		counter=0;
	}

}


void TimerInterruptInit(void)
{
	SetBit(SREG,7);
	SetBit(TCCR0,0);
	SetBit(TIMSK,0);
}


