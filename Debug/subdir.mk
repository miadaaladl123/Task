################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../DIO.c \
../Digital_Interrupt.c \
../TimerInterrupt.c \
../main.c \
../uart.c 

OBJS += \
./ADC.o \
./DIO.o \
./Digital_Interrupt.o \
./TimerInterrupt.o \
./main.o \
./uart.o 

C_DEPS += \
./ADC.d \
./DIO.d \
./Digital_Interrupt.d \
./TimerInterrupt.d \
./main.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


