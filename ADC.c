/*
 * ADC.c
 *
 *  Created on: Mar 17, 2018
 *      Author: Dody_PC
 */


#include "types.h"
#include "registers.h"
#include "DIO.h"
#define SetBit(Register,Pin)   Register|=(1<<Pin)
#define ClrBit(Register,Pin)   Register&=(~(1<<Pin))
#define get_bit(Register,Pin)  ( (Register >> Pin) & 1)

void ADC_vid_Init(void)
{

	    SetBit(ADMUX,6);
	    SetBit(ADMUX,5);
	    SetBit(ADCSRA,7);
}


u8 ADC_u8Readop(void)
{
    SetBit(ADCSRA,6);
    while(get_bit(ADCSRA,4)==0);
    SetBit(ADCSRA,4) ;
    return ADCH;


}

