/*
 * delay.c
 *
 * Created: 9/8/2022 11:45:39 AM
 *  Author: cs1
 */ 
#include "delay.h"

void delay_ms(int time)
{	int overflow =0,i;
	//timer initialization
	TCCR0 = 0X00;  //timer mode - clk source
	TCNT0 = 0X06;  //load starting value in timer/counter register
	
	TCCR0 |= (1<<0); //start timing
	//delay time milliseconds
	for (i=0;i<time;i++)
	{
		//delay 1 miilisecond
		while(overflow < milli_sec_over_flow)
		{	while((TIFR & (1<<0))== 0);
			//CLEAR Overflow FLAG
			TIFR |= (1<<00);
			overflow++;
		}
		overflow =0;
	}
	
	//stop timer
	TCCR0 = 0x00;
	
}