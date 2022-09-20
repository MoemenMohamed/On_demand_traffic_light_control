/*
 * LEDs.h
 *
 * Created: 9/7/2022 11:00:42 PM
 *  Author: cs1
 */ 


#ifndef LEDS_H_
#define LEDS_H_
#include "../../MCAL/DIO/DIO.h"

void Led_init(uint8_t LedPort, uint8_t LedPin);

void Led_On(uint8_t LedPort, uint8_t LedPin);

void Led_Off(uint8_t LedPort, uint8_t LedPin);

void Led_toggle(uint8_t LedPort, uint8_t LedPin);

#define Cars_red_led		2
#define Cars_yellow_led		1
#define Cars_green_led		0

#define ped_red_led			2
#define ped_yellow_led		1
#define ped_green_led		0

#endif /* LEDS_H_ */