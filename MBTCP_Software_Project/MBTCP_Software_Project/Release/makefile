################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L0xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
MBTCP_Software_Project.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
MBTCP_Software_Project.list \


# All Target
all: MBTCP_Software_Project.elf secondary-outputs

# Tool invocations
MBTCP_Software_Project.elf: $(OBJS) $(USER_OBJS) C:\Users\eober\Documents\Git\ Repos\MBTCPWeatherDevice\MBTCP_Software_Project\MBTCP_Software_Project\STM32L073RZTX_FLASH.ld
	arm-none-eabi-gcc -o "MBTCP_Software_Project.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0plus -T"C:\Users\eober\Documents\Git Repos\MBTCPWeatherDevice\MBTCP_Software_Project\MBTCP_Software_Project\STM32L073RZTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="MBTCP_Software_Project.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

MBTCP_Software_Project.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "MBTCP_Software_Project.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
