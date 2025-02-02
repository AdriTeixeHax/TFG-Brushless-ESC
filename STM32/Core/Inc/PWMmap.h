#ifndef _PWMMAP__H_
#define _PWMMAP__H_

#define RTSPEED_ERROR -1
#define RTSPEED_OK     0

extern ADC_HandleTypeDef hadc1;

extern I2C_HandleTypeDef hi2c1;

extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;

typedef enum {HI_U = 0, HI_V, HI_W, LO_U, LO_V, LO_W} MosfetPin;

typedef struct
{
    MosfetPin 	       pin;
    TIM_HandleTypeDef *htim;
    uint8_t 		   channel;
} PWMmap;

PWMmap pwmMap[] =
{
    { HI_U, &htim2, TIM_CHANNEL_3 },
    { LO_U, &htim3, TIM_CHANNEL_4 },
    { HI_V, &htim3, TIM_CHANNEL_1 },
    { LO_V, &htim2, TIM_CHANNEL_1 },
    { HI_W, &htim4, TIM_CHANNEL_2 },
    { LO_W, &htim4, TIM_CHANNEL_1 }
};

// Number of elements in the table
#define PWM_MAP_SIZE (sizeof(pwmMap) / sizeof(PWMmap))

int8_t PWMSet(MosfetPin pin, uint16_t value)
{
	if (pin > PWM_MAP_SIZE) return RTSPEED_ERROR;
    for (size_t i = 0; i < PWM_MAP_SIZE; i++)
    {
        if (pwmMap[i].pin == pin)
        {
            __HAL_TIM_SET_COMPARE(pwmMap[i].htim, pwmMap[i].channel, value);
            return RTSPEED_OK;
        }
    }
    return RTSPEED_ERROR;
}

#endif
