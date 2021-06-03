/*
 * dac.c
 *
 *  Created on: Jun 2, 2021
 *      Author: rdmkh
 */

#include"math.h"
#include"dac.h"
#include"stm32f4xx.h"
#include"stdbool.h"
dacsetter dacset;
double i;
uint8_t Vref = 3.3;
float x,y;
DAC_HandleTypeDef hdac;

void sine(void)
{

	for (x=-3.14159265358979323846;x<=3.14159265358979323846;x+=0.01)
	{
		HAL_DAC_Start(&hdac, DAC_CHANNEL_1);
		dacset.scaler = 4095/Vref;
		y = sin(x);
		dacset.dac_setter = y;
		dacset.scaler = y / 1.32;
		dacset.dac_value = ((dacset.scaler * 4095)/2) + 1600;
	    HAL_DAC_SetValue(&hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R, dacset.dac_value);



	}

}

