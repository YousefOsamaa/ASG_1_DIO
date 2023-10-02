################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/Timer/subdir.mk
-include MCAL/SREG/subdir.mk
-include MCAL/EXTI/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/LED/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
ASG_1_DIO.lss \

FLASH_IMAGE += \
ASG_1_DIO.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: ASG_1_DIO.elf secondary-outputs

# Tool invocations
ASG_1_DIO.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ASG_1_DIO.map -mmcu=atmega32 -o "ASG_1_DIO.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ASG_1_DIO.lss: ASG_1_DIO.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ASG_1_DIO.elf  >"ASG_1_DIO.lss"
	@echo 'Finished building: $@'
	@echo ' '

ASG_1_DIO.hex: ASG_1_DIO.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex ASG_1_DIO.elf  "ASG_1_DIO.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ASG_1_DIO.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ASG_1_DIO.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ASG_1_DIO.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
