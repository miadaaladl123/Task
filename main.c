/*
 * main.c
 *
 *  Created on: June 26, 2018
 *      Author: Dody_PC
 */
#include<stdio.h>
#include "types.h"
#include "Digital_Interrupt.h"
#include "DIO.h"


int main(){

	DEI_External_Interrupt();
	TimerInterruptInit();
	DIO_vid_SetPinValue(3,2 ,1);
	DIO_vid_SetPinDirection(1,0 ,1);

	while(1)
	{
	}

	return 0;
}
