################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/I2C_LCD/I2C_LCD.c \
../ECUAL/I2C_LCD/I2C_LCD_cfg.c 

OBJS += \
./ECUAL/I2C_LCD/I2C_LCD.o \
./ECUAL/I2C_LCD/I2C_LCD_cfg.o 

C_DEPS += \
./ECUAL/I2C_LCD/I2C_LCD.d \
./ECUAL/I2C_LCD/I2C_LCD_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/I2C_LCD/%.o ECUAL/I2C_LCD/%.su ECUAL/I2C_LCD/%.cyclo: ../ECUAL/I2C_LCD/%.c ECUAL/I2C_LCD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ECUAL-2f-I2C_LCD

clean-ECUAL-2f-I2C_LCD:
	-$(RM) ./ECUAL/I2C_LCD/I2C_LCD.cyclo ./ECUAL/I2C_LCD/I2C_LCD.d ./ECUAL/I2C_LCD/I2C_LCD.o ./ECUAL/I2C_LCD/I2C_LCD.su ./ECUAL/I2C_LCD/I2C_LCD_cfg.cyclo ./ECUAL/I2C_LCD/I2C_LCD_cfg.d ./ECUAL/I2C_LCD/I2C_LCD_cfg.o ./ECUAL/I2C_LCD/I2C_LCD_cfg.su

.PHONY: clean-ECUAL-2f-I2C_LCD

