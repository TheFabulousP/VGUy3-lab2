/*
 * software_timer.h
 *
 *  Created on: 11 Mar 2024
 *      Author: ACER
 */

#ifndef SOFTWARE_TIMER_H_
#define SOFTWARE_TIMER_H_

void setTimer(int index, int value);
int isTimerExpired(int index);

void timerRun();


#endif /* SOFTWARE_TIMER_H_ */
