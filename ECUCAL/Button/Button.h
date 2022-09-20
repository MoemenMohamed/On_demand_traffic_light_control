/*
 * Button.h
 *
 * Created: 9/7/2022 10:50:47 PM
 *  Author: cs1
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/DIO.h"

void Button_init(uint8_t buttonPort, uint8_t ButtonPin);

#define button_pin  0x04



#endif /* BUTTON_H_ */