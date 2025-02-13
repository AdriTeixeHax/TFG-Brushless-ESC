#ifndef _ANALOG__H_
#define _ANALOG__H_

#include "Structs.h"

extern ADC_HandleTypeDef hadc1;

extern RTPhase phaseU;
extern RTPhase phaseV;
extern RTPhase phaseW;

uint32_t iUval = 0;
uint32_t vUval = 0;
uint32_t iVval = 0;
uint32_t vVval = 0;
uint32_t iWval = 0;
uint32_t vWval = 0;

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
	switch(hadc->Instance)
	{
		case phaseU.iADC: iUval = HAL_ADC_GetValue(&hadc1); break;
		case phaseU.vADC: vUval = HAL_ADC_GetValue(&hadc1); break;

		case phaseV.iADC: iVval = HAL_ADC_GetValue(&hadc1); break;
		case phaseV.vADC: vVval = HAL_ADC_GetValue(&hadc1); break;

		case phaseW.iADC: iWval = HAL_ADC_GetValue(&hadc1); break;
		case phaseW.vADC: vWval = HAL_ADC_GetValue(&hadc1); break;
		default: break;
	}
}

#endif
