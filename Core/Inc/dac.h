/*
 * dac.h
 *
 *  Created on: Jun 2, 2021
 *      Author: rdmkh
 */
#include "math.h"
#include "string.h"
#include "stm32f4xx_hal.h"
#ifndef INC_DAC_H_
#define INC_DAC_H_

typedef struct dacsetter
		{

		double dac_value;
		double dac_setter;
		double scaler;
		uint8_t Vref;
		double scaled_2v5;

		}dacsetter;

void dac(void);
void sine(void);

#endif /* INC_DAC_H_ */
