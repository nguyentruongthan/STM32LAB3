/*
 * traffic_processing.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_FSM_FOR_TRAFFIC_PROCESSING_H_
#define INC_FSM_FOR_TRAFFIC_PROCESSING_H_

#include "main.h"


#define INIT 		0
#define RG 			1
#define RA 			2
#define GR			3
#define AR			4
#define MODE2		5
#define MODE3		6
#define MODE4		7

uint8_t traffic_state;

uint8_t traffic_led_7SEG_1;
uint8_t traffic_led_7SEG_2;

uint8_t red_duration;
uint8_t green_duration;
uint8_t amber_duration;

void update_traffic_state_using_button_1();

void execute_button_2();
void execute_button_3();



#endif /* INC_FSM_FOR_TRAFFIC_PROCESSING_H_ */
