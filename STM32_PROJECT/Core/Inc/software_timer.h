/*
 * software_timer.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_




// timer 1000 ms
void set_timer_1000ms(int duration);
uint8_t get_timer_1000ms_flag();


// timer for hold button 1
void set_timer_hold_button_1(int duration);
uint8_t get_timer_hold_button_1_flag();


// timer for hold button 2
void set_timer_hold_button_2(int duration);
uint8_t get_timer_hold_button_2_flag();

// TIMER FOR BLINK 2HZ
void set_timer_blink_2Hz(int duration);
uint8_t get_timer_blink_2Hz_flag();

void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
