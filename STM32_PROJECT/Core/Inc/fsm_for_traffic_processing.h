/*
 * traffic_processing.h
 *
 *  Created on: Nov 12, 2023
 *      Author: than
 */

#ifndef INC_FSM_FOR_TRAFFIC_PROCESSING_H_
#define INC_FSM_FOR_TRAFFIC_PROCESSING_H_

#include "global.h"

#define INIT 		0
#define RG 			1
#define RA 			2
#define GR			3
#define AR			4
#define MODE2		5
#define MODE3		6
#define MODE4		7

uint8_t traffic_state;
void update_traffic_state_using_button_1();


#endif /* INC_FSM_FOR_TRAFFIC_PROCESSING_H_ */
