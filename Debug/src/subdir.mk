################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AdjacencyMatrix.cpp \
../src/Dijkstra.cpp \
../src/Graph.cpp \
../src/Screen.cpp 

OBJS += \
./src/AdjacencyMatrix.o \
./src/Dijkstra.o \
./src/Graph.o \
./src/Screen.o 

CPP_DEPS += \
./src/AdjacencyMatrix.d \
./src/Dijkstra.d \
./src/Graph.d \
./src/Screen.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


