#ifndef _RTSPEED__H_
#define _RTSPEED__H_

#include "PWMmap.h"

uint8_t Hall_U_State = 0;
uint8_t Hall_V_State = 0;
uint8_t Hall_W_State = 0;

uint8_t state = 0;

uint32_t speed = 256;

void updateState(void)
{
	state = (Hall_U_State << 2) | (Hall_V_State << 1) | (Hall_W_State);

	switch(state)
	{
	case 0b100:
		PWMSet(HI_U, 0);
		PWMSet(LO_U, 0);
		PWMSet(HI_V, speed);
		PWMSet(LO_V, 0);
		PWMSet(HI_W, 0);
		PWMSet(LO_W, 256);
		break;
	case 0b110:
		PWMSet(HI_U, 0);
		PWMSet(LO_U, 256);
		PWMSet(HI_V, speed);
		PWMSet(LO_V, 0);
		PWMSet(HI_W, 0);
		PWMSet(LO_W, 0);
		break;
	case 0b010:
		PWMSet(HI_U, 0);
		PWMSet(LO_U, 256);
		PWMSet(HI_V, 0);
		PWMSet(LO_V, 0);
		PWMSet(HI_W, speed);
		PWMSet(LO_W, 0);
		break;
	case 0b011:
		PWMSet(HI_U, 0);
		PWMSet(LO_U, 0);
		PWMSet(HI_V, 0);
		PWMSet(LO_V, 256);
		PWMSet(HI_W, speed);
		PWMSet(LO_W, 0);
		break;
	case 0b001:
		PWMSet(HI_U, speed);
		PWMSet(LO_U, 0);
		PWMSet(HI_V, 0);
		PWMSet(LO_V, 256);
		PWMSet(HI_W, 0);
		PWMSet(LO_W, 0);
		break;
	case 0b101:
		PWMSet(HI_U, speed);
		PWMSet(LO_U, 0);
		PWMSet(HI_V, 0);
		PWMSet(LO_V, 0);
		PWMSet(HI_W, 0);
		PWMSet(LO_W, 256);
		break;
	default:
		break;
	} // !switch
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(GPIO_Pin == GPIO_PIN_8)
  {
	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_Pin) == GPIO_PIN_SET)
		  Hall_U_State = 1;
	  else
		  Hall_U_State = 0;
  }
  else if(GPIO_Pin == GPIO_PIN_9)
  {
	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_Pin) == GPIO_PIN_SET)
		  Hall_V_State = 1;
	  else
		  Hall_V_State = 0;
  }
  else if(GPIO_Pin == GPIO_PIN_10)
  {
	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_Pin) == GPIO_PIN_SET)
		  Hall_W_State = 1;
	  else
		  Hall_W_State = 0;
  }
  updateState();
}

#endif
