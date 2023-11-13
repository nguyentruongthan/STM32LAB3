/*
 * software_timer.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#include "software_timer.h"


uint8_t timer_1000ms_flag;
int timer_1000ms_count;


void set_timer_1000ms(int duration){
	timer_1000ms_count = duration;
	timer_1000ms_flag = 0;
}
uint8_t get_timer_1000ms_flag(){
	return timer_1000ms_flag;
}

void timer_run(){

	timer_1000ms_count --;
	if(timer_1000ms_count <= 0){
		timer_1000ms_flag = 1;
	}


}
