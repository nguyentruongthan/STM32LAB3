/*
 * software_timer.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "main.h"


// timer 1000 ms
void set_timer_1000ms(int duration);
uint8_t get_timer_1000ms_flag();



void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
