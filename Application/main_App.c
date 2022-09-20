/*
 * On_demand_traffic_light_control.c
 *
 * Created: 9/7/2022 5:02:49 PM
 * Author : cs1
 */ 

//MCAL Libraries
#include "../MCAL/Timer0_delay_func/delay.h"

//system Library
#include "avr/interrupt.h"

//ECUCAL Libraries
#include "../ECUCAL/Button/Button.h"

#include "pedestrian_modes.h"
#include "App_Headers/Configurations.h"

int flag;
ISR(INT0_vect)
{
	if( ( (PORTA & (1<<2)) >> 2 ) == 1)
	flag =1;
	else if ( ( (PORTA & (1<<0)) ) == 1)
	flag =2;
	else
	flag =2;
}

int main(void)
{
    Button_init(port_D,button_pin);  //initialize INT0 pin to Input 
	cars_traffic_led_config();
	pedestrain_traffic_led_config();
	interrupts_config();
	
    while (1) 
    {	
		int c=0;
		//cars green led is on
		Led_On(port_A,Cars_green_led);
		delay_ms(5000);
		
		//button interrupt
		if (flag == 2)
			{case_2();
			 flag = 0;
			 continue;}
		Led_Off(port_A,Cars_green_led);
		
		//blink cars led
		while(c<5)
			{Led_toggle(port_A,Cars_yellow_led);
			delay_ms(1000);
			//button interrupt
			if (flag == 2)
				{case_2();
				//flag = 0;
				break;}
			c++;}
		Led_Off(port_A,Cars_yellow_led);
		if(flag ==2)
			{flag = 0;
			continue;}
		c=0;
		
		//cars red led on
		Led_On(port_A,Cars_red_led);
		delay_ms(5000);
		
		//button interrupt
		if (flag == 1)
			{case_1();
			 flag = 0;
			 continue;}
		
		Led_Off(port_A,Cars_red_led);
		
		//blink cars led
		while(c<5)
			{Led_toggle(port_A,Cars_yellow_led);
			 delay_ms(1000);
			 //button interrupt
			 if (flag == 2)
				{case_2();
				 flag = 0;
				 break;}
		     c++;}
		Led_Off(port_A,Cars_yellow_led);
		c=0;

    }
}


