################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/OLED/SSD1306.cpp 

OBJS += \
./Drivers/OLED/SSD1306.o 

CPP_DEPS += \
./Drivers/OLED/SSD1306.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/OLED/SSD1306.o: ../Drivers/OLED/SSD1306.cpp Drivers/OLED/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++17 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I"/home/bartek/STM32CubeIDE/workspace_1.6.1/MEWA/Drivers/Pin" -I"/home/bartek/STM32CubeIDE/workspace_1.6.1/MEWA/Drivers" -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -Og -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Drivers/OLED/SSD1306.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

