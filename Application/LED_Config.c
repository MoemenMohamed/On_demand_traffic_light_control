/*
 * LED_Config.c
 *
 * Created: 9/10/2022 2:38:37 PM
 *  Author: cs1
 */
#include "App_Headers/Configurations.h"
 
void cars_traffic_led_config()
{
	Led_init(port_A,Cars_green_led);
	Led_init(port_A,Cars_red_led);
	Led_init(port_A,Cars_yellow_led);
}

void pedestrain_traffic_led_config()
{
	Led_init(port_B,ped_red_led);
	Led_init(port_B,ped_yellow_led);
	Led_init(port_B,ped_green_led);
}