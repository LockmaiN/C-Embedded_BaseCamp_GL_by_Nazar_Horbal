/*
 * libNazar.h
 *
 *  Created on: Nov 15, 2021
 *      Author: lockmain
 */

#ifndef INC_LIBNAZAR_H_
#define INC_LIBNAZAR_H_
#include "main.h"

void enableOut(void);
void disableOutTim4(void);
void setDutyCycle(uint16_t pwmWidth);
void setPwmFrequency(uint16_t frequency);
void enableSleepMode(void);
void disableSleepMode(void);




#endif /* INC_LIBNAZAR_H_ */
