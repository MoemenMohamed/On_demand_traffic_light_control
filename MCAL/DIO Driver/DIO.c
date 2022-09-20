/*
 * DIO.c
 *
 * Created: 9/7/2022 10:44:20 PM
 *  Author: cs1
 */ 
#include "DIO.h"

int DIO_init(uint8_t portnum, uint8_t pinNum, uint8_t direction)
{		switch (portnum)
	{
		case port_A:
			if(direction == Output)
				DDRA |= (1<<pinNum);
			else if(direction == Input)
				DDRA &= ~ (1<<pinNum);
			else
				return WRONG_PIN_DIRECTION;
			break;
		case port_B:
			if(direction == Output)
				DDRB |= (1<<pinNum);
			else if(direction == Input)
				DDRB &= ~ (1<<pinNum);
			else
				return WRONG_PIN_DIRECTION;
			break;
		case port_C:
			if(direction == Output)
				DDRC |= (1<<pinNum);
			else if(direction == Input)
				DDRC &= ~ (1<<pinNum);
			else
				return WRONG_PIN_DIRECTION;
			break;
		case port_D:
			if(direction == Output)
				DDRD |= (1<<pinNum);
			else if(direction == Input)
				DDRD &= ~ (1<<pinNum);
			else
				return WRONG_PIN_DIRECTION;
			break;
		default:
			return WRONG_DIO_PORT;
	}
		return DONE_2;
}



int DIO_write(uint8_t portnum, uint8_t pinNum, uint8_t value)
{
	switch (portnum)
	{
		case port_A:
			if(value == High)
				PORTA |= (1<<pinNum);
			else if(value == Low)
				PORTA &= ~ (1<<pinNum);
			else
				return WRONG_PIN_STATE;
			break;
		case port_B:
			if(value == High)
				PORTB |= (1<<pinNum);
			else if(value == Low)
				PORTB &= ~ (1<<pinNum);
			else
				return WRONG_PIN_STATE;
			break;
		case port_C:
			if(value == High)
				PORTC |= (1<<pinNum);
			else if(value == Low)
				PORTC &= ~ (1<<pinNum);
			else
				return WRONG_PIN_STATE;
			break;
		case port_D:
			if(value == High)
				PORTD |= (1<<pinNum);
			else if(value == Low)
				PORTD &= ~ (1<<pinNum);
			else
				return WRONG_PIN_STATE;
			break;
		default:
			return WRONG_DIO_PORT;
	}
	return DONE_2;
}


int DIO_read(uint8_t portnum, uint8_t pinNum, uint8_t *value)
{
	switch (portnum)
	{
		case port_A:
			if( (PINA &(1<<pinNum)) >>pinNum)
				*value = 1;
			else
				*value = 0;
			break;
		case port_B:
			if( (PINB &(1<<pinNum)) >>pinNum)
				*value = 1;
			else
				*value = 0;
			break;
		case port_C:
			if( (PINC &(1<<pinNum)) >>pinNum)
				*value = 1;
			else
				*value = 0;
			break;
		case port_D:
			if( (PIND &(1<<pinNum)) >>pinNum)
				*value = 1;
			else
				*value = 0;
			break;
		default:
			return WRONG_DIO_PORT;

	}
	return DONE_2;
}

int DIO_toggle(uint8_t portnum, uint8_t pinNum)
{
		switch (portnum)
		{
			case port_A:
				PORTA ^= (1<<pinNum);
				break;
			case port_B:
				PORTB ^= (1<<pinNum);
				break;
			case port_C:
				PORTC ^= (1<<pinNum);
				break;
			case port_D:
				PORTD ^= (1<<pinNum);
				break;
			default:
				return WRONG_DIO_PORT;
		}
	return DONE_2;
}