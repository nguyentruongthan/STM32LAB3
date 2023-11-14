/*
 * global.h
 *
 *  Created on: Nov 13, 2023
 *      Author: than
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "input_reading.h"
#include "fsm_for_input_processing.h"
#include "fsm_for_traffic_processing.h"
#include "output_display.h"

uint32_t TIMER_DURATION;//ms


#define INIT 		0
#define RG 			1
#define RA 			2
#define GR			3
#define AR			4
#define MODE2		5
#define MODE3		6
#define MODE4		7

uint8_t traffic_state = INIT;

uint8_t traffic_led_7SEG_1;
uint8_t traffic_led_7SEG_2;

#endif /* INC_GLOBAL_H_ */
