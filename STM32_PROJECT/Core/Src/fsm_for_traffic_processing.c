/*
 * traffic_processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */


#include "main.h"
#include "fsm_for_traffic_processing.h"
#include "software_timer.h"
#include "input_reading.h"


#define RED_DURATION_INIT	8
#define GREEN_DURATION_INIT 5
#define AMBER_DURATION_INIT 3

extern uint8_t traffic_state;
extern uint8_t traffic_led_7SEG_1;
extern uint8_t traffic_led_7SEG_2;

extern uint8_t red_duration;
extern uint8_t green_duration;
extern uint8_t amber_duration;



void update_traffic_state_using_button_1(){
	switch(traffic_state){
		case MODE2:
			traffic_state = MODE3;
			break;
		case MODE3:
			traffic_state = MODE4;
			break;
		case MODE4:
			traffic_state = RG;
			break;
		default:
			traffic_state = MODE2;
			break;
	}
}
void increase_red_duration(){
	traffic_led_7SEG_1 = (traffic_led_7SEG_1 == 99) ?
			 	 	 	 1 : traffic_led_7SEG_1 + 1;
}
void set_red_duration(){
	red_duration = traffic_led_7SEG_1;
}


void execute_button_2(){
	switch(traffic_state){
	case MODE2:
		increase_red_duration();
		break;
	case MODE3:
		break;
	case MODE4:
		break;
	default:break;
	}
}

void execute_button_3(){
	switch(traffic_state){
	case MODE2:
		set_red_duration();
		break;
	case MODE3:
		break;
	case MODE4:
		break;
	default:break;
	}
}

