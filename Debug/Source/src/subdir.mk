################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/src/game.cpp \
../Source/src/graphics.cpp \
../Source/src/input.cpp \
../Source/src/main.cpp 

OBJS += \
./Source/src/game.o \
./Source/src/graphics.o \
./Source/src/input.o \
./Source/src/main.o 

CPP_DEPS += \
./Source/src/game.d \
./Source/src/graphics.d \
./Source/src/input.d \
./Source/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/src/%.o: ../Source/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/Users/Andrew/Documents/workspace/CaveStory/Source/headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


