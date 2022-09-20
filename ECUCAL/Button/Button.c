/*
 * Button.c
 *
 * Created: 9/7/2022 10:50:35 PM
 *  Author: cs1
 */ 

#include "Button.h"

void Button_init(uint8_t buttonPort, uint8_t ButtonPin)
{
	DIO_init(buttonPort,ButtonPin,Input);
}