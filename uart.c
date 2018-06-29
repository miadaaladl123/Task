/*
 * uart.c
 *
 *  Created on: Apr 13, 2018
 *      Author: Dody_PC
 */

#include "types.h"
#include "registers.h"
#include "DIO.h"
#include "uart_config.h"
#include "uart.h"

#define get_bit(reg,pin) ((reg>> pin)&1)
#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))

void UART_vidInit(void)
{
	DIO_vid_SetPinDirection(3,0 ,0);
	DIO_vid_SetPinDirection(3,0 ,1);

	SetBit(UCSRB,3);
	SetBit(UCSRB,4);


	SetBit(UCSRC,1);
	SetBit(UCSRC,2);

	UBRRL=myBR;
	UBRRH=0;
}


void UART_vidTransmitData(u8 Data)
{
	while(get_bit(UCSRA,5)==0);
	UDR=Data;
}


u8 UART_u8ReceiveData(void)
{
	while(get_bit(UCSRA,7)==0);
	return UDR;

}

void UART_vidTransmitDatastring(u8*arr)
{
  u8 counter=0;
  while (arr[counter]!='\0')
  {

	  UART_vidTransmitData(arr[counter]);
	  counter++;

  }

}


