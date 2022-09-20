/*
 * Interrupts.c
 *
 * Created: 9/7/2022 5:13:14 PM
 *  Author: cs1
 */ 
#include "Interrupts.h"


void En_General_Int()
{
	//enable global interrupts
	Status_Reg |= (1<<7);
}

int interrupts_init(uint8_t INT_num,uint8_t INT_sense)
{   
	switch (INT_num)
	{
	case INT_1:
		if(INT_sense == Low_Lev_INT1)
			MCUCR |= Low_Lev_INT1;
		else if(INT_sense == Any_Logic_change_INT1)
			MCUCR |= Any_Logic_change_INT1;
		else if(INT_sense == INT1_falling_edge)
			MCUCR |= INT1_falling_edge;
		else if(INT_sense == INT1_rising_edge)
			MCUCR |= INT1_rising_edge;
		else
			return WRONG_INT_SENSE;
		GICR |= INT1_en;			//enable INT1
		return DONE;
	case INT_0:
		if(INT_sense == Low_Lev_INT0)
			MCUCR |= Low_Lev_INT0;
		else if(INT_sense == Any_Logic_change_INT0)
			MCUCR |= Any_Logic_change_INT0;
		else if(INT_sense == INT0_falling_edge)
			MCUCR |= INT0_falling_edge;
		else if(INT_sense == INT0_rising_edge)
			MCUCR |= INT0_rising_edge;
		else
			return WRONG_INT_SENSE;
		GICR |= INT0_en;			//enable INT0
		return DONE;

		
	default:
		return WRONG_INT_NUM;
	}
	
}

void Disable_General_Int()
{
	//disable global interrupts
	Status_Reg &= ~(1<<7);
}
