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

extern uint8_t traffic_state;

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

