/*
 * output_display.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_OUTPUT_DISPLAY_H_
#define INC_OUTPUT_DISPLAY_H_

#include "global.h"

void update7SEG();
void updateTraffic7SEGBuffer(uint8_t traffic_1, uint8_t traffic_2);

void fsm_for_single_led();
void fsm_for_led_7_seg();


#endif /* INC_OUTPUT_DISPLAY_H_ */
