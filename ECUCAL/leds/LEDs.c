/*
 * LEDs.c
 *
 * Created: 9/7/2022 11:00:30 PM
 *  Author: cs1
 */ 
#include "LEDs.h"

void Led_init(uint8_t LedPort, uint8_t LedPin)
{
	DIO_init(LedPort,LedPin,Output);
}

void Led_On(uint8_t LedPort, uint8_t LedPin)
{
	DIO_write(LedPort,LedPin,High);
}

void Led_Off(uint8_t LedPort, uint8_t LedPin)
{
	DIO_write(LedPort,LedPin,Low);
}

void Led_toggle(uint8_t LedPort, uint8_t LedPin)
{
	DIO_toggle(LedPort,LedPin);
}