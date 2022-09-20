/*
 * Configurations.h
 *
 * Created: 9/10/2022 2:42:08 PM
 *  Author: cs1
 */ 


#ifndef CONFIGURATIONS_H_
#define CONFIGURATIONS_H_
//header files
#include "../../ECUCAL/LEDs/LEDs.h"
#include "../../MCAL/Interrupts/Interrupts.h"

/************************************************************************/
/* LEDs Config                                                                     */
/************************************************************************/
void cars_traffic_led_config();

void pedestrain_traffic_led_config();

/************************************************************************/
/* Interrupts Config                                                                     */
/************************************************************************/
void interrupts_config();

#endif /* CONFIGURATIONS_H_ */