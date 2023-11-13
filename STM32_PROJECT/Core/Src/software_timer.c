/*
 * software_timer.c
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#include "main.h"
#include "software_timer.h"

// TIMER 1000 MS
uint8_t timer_1000ms_flag;
int timer_1000ms_count;
void set_timer_1000ms(int duration){
	timer_1000ms_count = duration;
	timer_1000ms_flag = 0;
}
uint8_t get_timer_1000ms_flag(){
	return timer_1000ms_flag;
}
// TIMER 500 MS
uint8_t timer_500ms_flag;
int timer_500ms_count;
void set_timer_500ms(int duration){
	timer_500ms_count = duration;
	timer_500ms_flag = 0;
}

uint8_t get_timer_500ms_flag(){
	return timer_500ms_flag;
}


void timer_run(){

	timer_1000ms_count --;
	if(timer_1000ms_count <= 0){
		timer_1000ms_flag = 1;
	}

	timer_500ms_count --;
	if(timer_500ms_count <= 0){
		timer_500ms_flag = 1;
	}

}
