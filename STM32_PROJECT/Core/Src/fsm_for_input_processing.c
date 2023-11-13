/*
 * fsm_for_input_processing.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */


#include <traffic_processing.h>
#include "main.h"
#include "input_reading.h"
#include "fsm_for_input_processing.h"
#include "software_timer.h"

#define BUTTON_RELEASED 0
#define BUTTON_PRESSED 1
#define BUTTON_PRESSED_MORE_THAN_1_SECOND 2

uint8_t buttonState = BUTTON_RELEASED;

void fsm_for_input_processing(void){
	switch(buttonState){
	case BUTTON_RELEASED :
		if(is_button_pressed(0)){
			buttonState = BUTTON_PRESSED ;
			//TODO
			update_traffic_state_using_button_1();
		}
		break ;
	case BUTTON_PRESSED :
		if(!is_button_pressed(0)) {
			buttonState = BUTTON_RELEASED ;
		}else {
			if(is_button_pressed_1s(0)){
				FlagStatus
				buttonState = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				//TODO for first time BUTTON_PRESSED_MORE_THAN_1_SECOND
				set_timer_500ms(500/TIMER_DURATION);
				update_traffic_state_using_button_1();
			}
		}
		break ;
	case BUTTON_PRESSED_MORE_THAN_1_SECOND :
		if(!is_button_pressed(0)){
			buttonState = BUTTON_RELEASED;
		}
		// set timer 500ms, if flag for timer 500ms is set -> DO something
		// TODO
		if(get_timer_500ms_flag()){
			set_timer_500ms(500/TIMER_DURATION);
			//TODO
			update_traffic_state_using_button_1();
		}
		break ;
	}
}
