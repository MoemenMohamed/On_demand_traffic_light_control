/*
 * Interrupts.h
 *
 * Created: 9/7/2022 5:13:02 PM
 *  Author: cs1
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

//included header files
#include "../../Application/App_Headers/Registers_Lib.h"
#include <stdio.h> 
//interrupt initialization function prototype

void En_General_Int();

void Disable_General_Int();

int interrupts_init(uint8_t INT_num,uint8_t INT_sense);

typedef enum Int_state
{
	DONE, WRONG_INT_NUM, WRONG_INT_SENSE
}Int_state;



//Interrupt sense INT1
#define Low_Lev_INT1			0X00
#define Any_Logic_change_INT1   0X04
#define INT1_falling_edge		0x08
#define INT1_rising_edge		0x0C
#define INT1_en					0x80

//Interrupt sense INT0
#define Low_Lev_INT0			0X00
#define Any_Logic_change_INT0   0X01
#define INT0_falling_edge		0x02
#define INT0_rising_edge		0x03
#define INT0_en					0x40

#define INT_0 0
#define INT_1 1
#define INT_2 2

#endif /* INTERRUPTS_H_ */