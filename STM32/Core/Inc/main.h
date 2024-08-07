/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define N_USER_LED_Pin GPIO_PIN_13
#define N_USER_LED_GPIO_Port GPIOC
#define I_SENSE_U_Pin GPIO_PIN_0
#define I_SENSE_U_GPIO_Port GPIOA
#define I_SENSE_V_Pin GPIO_PIN_1
#define I_SENSE_V_GPIO_Port GPIOA
#define I_SENSE_W_Pin GPIO_PIN_2
#define I_SENSE_W_GPIO_Port GPIOA
#define V_SENSE_U_Pin GPIO_PIN_3
#define V_SENSE_U_GPIO_Port GPIOA
#define V_SENSE_V_Pin GPIO_PIN_4
#define V_SENSE_V_GPIO_Port GPIOA
#define V_SENSE_W_Pin GPIO_PIN_5
#define V_SENSE_W_GPIO_Port GPIOA
#define HI_U_Pin GPIO_PIN_6
#define HI_U_GPIO_Port GPIOA
#define HI_V_Pin GPIO_PIN_7
#define HI_V_GPIO_Port GPIOA
#define HI_W_Pin GPIO_PIN_0
#define HI_W_GPIO_Port GPIOB
#define Hall_U_Pin GPIO_PIN_1
#define Hall_U_GPIO_Port GPIOB
#define Hall_U_EXTI_IRQn EXTI1_IRQn
#define Hall_V_Pin GPIO_PIN_2
#define Hall_V_GPIO_Port GPIOB
#define Hall_V_EXTI_IRQn EXTI2_IRQn
#define Hall_W_Pin GPIO_PIN_10
#define Hall_W_GPIO_Port GPIOB
#define Hall_W_EXTI_IRQn EXTI15_10_IRQn
#define LO_W_Pin GPIO_PIN_8
#define LO_W_GPIO_Port GPIOA
#define LO_V_Pin GPIO_PIN_9
#define LO_V_GPIO_Port GPIOA
#define LO_U_Pin GPIO_PIN_10
#define LO_U_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
