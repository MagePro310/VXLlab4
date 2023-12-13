/*
 * software_timer.h
 *
 *  Created on: Nov 20, 2023
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];

void setTimer(int i, int duration);
void timer_run(int i);
void timerRun();
#endif /* INC_SOFTWARE_TIMER_H_ */
