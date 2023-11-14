/*
 * traffic_processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */


#include "fsm_for_traffic_processing.h"


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
void execute_GR(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000/TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for green 1 led expert, we change state to AMBER - RED
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = AR;
		}
	}
}

void execute_AR(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000/TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for amber 1 led expert, we change state to RED - GREEN
		if(traffic_led_7SEG_1 <= 0){
			traffic_state = RG;
		}
	}
}

void execute_RG(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000/TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for green 2 led expert, we change state to RED - AMBER
		if(traffic_led_7SEG_2 <= 0){
			traffic_state = RA;
		}
	}
}

void execute_RA(){
	if(get_timer_1000ms_flag()){
		set_timer_1000ms(1000/TIMER_DURATION);
		//TODO
		traffic_led_7SEG_1 --;
		traffic_led_7SEG_2 --;
		// if counter for amber 2 led expert, we change state to RED - AMBER
		if(traffic_led_7SEG_2 <= 0){
			traffic_state = RA;
		}
	}
}
void fsm_for_traffic_state(){
	switch(traffic_state){
	case INIT:
		traffic_state = GR;
		break;
	case GR:
		execute_GR();
		break;
	case AR:
		execute_AR();
		break;
	case RG:
		execute_RG();
		break;
	case RA:
		execute_RA();
		break;
	case MODE2:
		break;
	case MODE3:
		break;
	case MODE4:
		break;
	default: break;
	}
}
