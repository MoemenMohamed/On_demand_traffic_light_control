/*
 * delay.h
 *
 * Created: 9/8/2022 11:45:54 AM
 *  Author: cs1
 */ 


#ifndef DELAY_H_
#define DELAY_H_

#include "../../Application/App_Headers/Registers_Lib.h"

#define milli_sec_over_flow 4 //4 overflows to delay 1ms

void delay_ms(int time);





#endif /* DELAY_H_ */