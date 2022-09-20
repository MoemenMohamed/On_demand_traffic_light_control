/*
 * DIO.h
 *
 * Created: 9/7/2022 10:44:34 PM
 *  Author: cs1
 */ 


#ifndef DIO_H_
#define DIO_H_

//included header files

#include "../../Application/App_Headers/Registers_Lib.h"

//MACROS

#define port_A 'A'
#define port_B 'B'
#define port_C 'C'
#define port_D 'D'

#define Input 0
#define Output 1

#define Low 0
#define High 1


typedef enum DIO_state
{
	DONE_2, WRONG_DIO_PORT, WRONG_PIN_DIRECTION, WRONG_PIN_STATE
}DIO_state;

//FUNCTION PROTOYPES
int DIO_init(uint8_t portnum, uint8_t pinNum, uint8_t direction); //initialization function

int DIO_write(uint8_t portnum, uint8_t pinNum, uint8_t value); //write to DIO pin


int DIO_read(uint8_t portnum, uint8_t pinNum, uint8_t *value); //read DIO pin status

int DIO_toggle(uint8_t portnum, uint8_t pinNum); //read DIO pin status


#endif /* DIO_H_ */