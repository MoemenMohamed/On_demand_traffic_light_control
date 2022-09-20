/*
 * Pedestrian_mode.c
 *
 * Created: 9/8/2022 2:39:25 PM
 *  Author: cs1
 */
#include "pedestrian_modes.h"
 
int case_1()
{	int c=0;
	//turn off red pedestrian led
	Led_Off(port_B,ped_red_led);
	
	//turn on green pedestrian led
	Led_On(port_B,ped_green_led);
	delay_ms(5000);
	
	Led_Off(port_A,Cars_red_led);
	
	//blink pedestrian/cars yellow led for 5 seconds
	while(c<5)
	{Led_toggle(port_B,ped_yellow_led);
	Led_toggle(port_A,Cars_yellow_led);
	delay_ms(1000);
	c++;}
	Led_Off(port_B,ped_yellow_led);
	Led_Off(port_A,Cars_yellow_led);
	c=0;
	
	//turn off green pedestrian led
	Led_Off(port_B,ped_green_led);
	
	//turn on red pedestrian led
	Led_On(port_B,ped_red_led);

	
	return 0;
}

int case_2()
{	int c=0;
	//turn on red pedestrian led
	Led_On(port_B,ped_red_led);
	
	Led_Off(port_A,Cars_yellow_led);
	
	Led_Off(port_A,Cars_green_led);
	//blink pedestrian/cars yellow led for 5 seconds
	while(c<5)
		{Led_toggle(port_B,ped_yellow_led);
		 Led_toggle(port_A,Cars_yellow_led);
		 delay_ms(1000);
		 c++;}
	Led_Off(port_B,ped_yellow_led);
	Led_Off(port_A,Cars_yellow_led);
	c=0;
	
	
	Led_Off(port_B,ped_red_led);		//turn off red pedestrian led
	
	Led_On(port_A,Cars_red_led);		//turn on cars red led
	
	Led_On(port_B,ped_green_led);		//turn on green pedestrian led
	delay_ms(5000);
	
	
	Led_Off(port_A,Cars_red_led);		//turn off cars red led
	
	//blink pedestrian/cars yellow led for 5 seconds
	while(c<5)
		{Led_toggle(port_B,ped_yellow_led);
		Led_toggle(port_A,Cars_yellow_led);
		delay_ms(1000);
		c++;}
	Led_Off(port_B,ped_yellow_led);
	Led_Off(port_A,Cars_yellow_led);
	c=0;
	
	Led_Off(port_B,ped_green_led);		//turn off green pedestrian led
	
	Led_On(port_B,ped_red_led);			//turn on red pedestrian led
	return 0;
}