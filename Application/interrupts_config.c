/*
 * interrupts_config.c
 *
 * Created: 9/10/2022 12:56:26 PM
 *  Author: cs1
 */ 
#include "App_Headers/Configurations.h"


void interrupts_config()
{
	
	En_General_Int();
	interrupts_init(INT_0,INT0_rising_edge);
}