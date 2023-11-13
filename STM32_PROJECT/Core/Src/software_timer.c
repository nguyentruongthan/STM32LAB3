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



// timer for hold button 1
uint8_t timer_hold_button_1_flag;
int timer_hold_button_1_count;
void set_timer_hold_button_1(int duration){
	timer_hold_button_1_count = duration;
	timer_hold_button_1_flag = 0;
}
uint8_t get_timer_hold_button_1_flag(){
	return timer_hold_button_1_flag;
}

// timer for hold button 2
uint8_t timer_hold_button_2_flag;
int timer_hold_button_2_count;
void set_timer_hold_button_2(int duration){
	timer_hold_button_2_count = duration;
	timer_hold_button_2_flag = 0;
}
uint8_t get_timer_hold_button_2_flag(){
	return timer_hold_button_2_flag;
}


// TIMER FOR BLINK 2HZ
int timer_blink_2Hz_flag;
uint8_t timer_blink_2Hz_count;
void set_timer_blink_2Hz(int duration){
	timer_blink_2Hz_count = duration;
	timer_blink_2Hz_flag = 0;
}
uint8_t get_timer_blink_2Hz_flag(){
	return timer_blink_2Hz_flag;
}

void timer_run(){

	timer_1000ms_count --;
	if(timer_1000ms_count <= 0){
		timer_1000ms_flag = 1;
	}

	timer_hold_button_1_count --;
	if(timer_hold_button_1_count <= 0){
		timer_hold_button_1_flag = 1;
	}

	timer_hold_button_2_count --;
	if(timer_hold_button_2_count <= 0){
		timer_hold_button_2_flag = 1;
	}

}
