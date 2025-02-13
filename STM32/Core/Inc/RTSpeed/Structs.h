#ifndef _GLOBALS__H_
#define _GLOBALS__H_

typedef enum {HI_U = 0, HI_V, HI_W, LO_U, LO_V, LO_W} MosfetPin;

typedef struct
{
    MosfetPin 	       pin;
    TIM_HandleTypeDef *htim;
    uint8_t 		   channel;
} PWMmap;

#define PWM_MAP_SIZE (sizeof(pwmMap) / sizeof(PWMmap))

typedef struct
{
	uint8_t hallState;
	MosfetPin hi;
	MosfetPin lo;
	uint32_t iVal;
	uint32_t vVal;
	ADC_TypeDef iADC;
	ADC_TypeDef vADC;
} RTPhase;

RTPhase phaseU = {0, HI_U, LO_U, 0, 0, ADC0, ADC1};
RTPhase phaseV = {0, HI_V, LO_V, 0, 0, ADC4, ADC5};
RTPhase phaseW = {0, HI_W, LO_W, 0, 0, ADC8, ADC9};

#endif
