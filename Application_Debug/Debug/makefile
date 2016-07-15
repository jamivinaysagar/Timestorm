################################################################################
# Automatically-generated file. Do not edit!
################################################################################

### Toolchain: nitrogen6x-armv7l-timesys-linux-gnueabi-gcc-4.9.3- ###
CC=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-gcc
STRIP=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-strip
CXX=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-g++
CPP=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-cpp
RANLIB=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-ranlib
DEBUGGER=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-gdb
AR=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-ar
AS=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-as
OBJCOPY=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-objcopy
OBJDUMP=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-objdump
LD=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-ld
NM=/home/shyam/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabi-nm

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Application_Debug

# Tool invocations
Application_Debug: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	$(CC)  -o "Application_Debug" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Application_Debug
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
