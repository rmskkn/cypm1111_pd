.DEFAULT_GOAL := all

TOOLCHAIN ?= arm-none-eabi-

CC      := $(TOOLCHAIN)gcc
AS      := $(TOOLCHAIN)gcc
OBJCOPY := $(TOOLCHAIN)objcopy
OBJDUMP := $(TOOLCHAIN)objdump
SIZE    := $(TOOLCHAIN)size

BUILD := build

V ?= @

CPU_FLAGS=-fno-common			\
			-mcpu=cortex-m0 	\
			-mthumb				\
			-Wall				\
			-Wextra				\
			-Wcast-align		\
			-Wcast-qual			\
			-Wimplicit			\
			-Wpointer-arith		\
			-Wswitch			\
			-Wredundant-decls	\
			-Wreturn-type		\
			-Wshadow -Wunused

CFLAGS+= $(CPU_FLAGS)				\
		-std=c11					\
		-Wall -Wextra				\
		-ffreestanding				\
		-fno-builtin				\
		-Os

PROJECT := cypm1111_s1
TARGET := $(BUILD)/$(PROJECT).elf

MAPFILE := $(BUILD)/$(PROJECT).map
LINKER_SCRIPT := $(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/TOOLCHAIN_GCC_ARM/linker.ld

MAKEFILE := $(lastword $(MAKEFILE_LIST))

LDFLAGS := $(CPU_FLAGS)		\
		-T $(LINKER_SCRIPT)	\
		-nostartfiles		\
		-Wl,--gc-sections	\
		-Wl,--no-undefined	\
		-Wl,--sort-section=alignment \

# Map file to track obj sizes
LDFLAGS += -Wl,-Map=$(MAPFILE),--cref

srcs := $(PROJECT)/main.c	\
		$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/cybsp.c \
		$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/system_cat2.c \
		$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/startup_pmg1s1.c

srcs += $(shell find $(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/config/GeneratedSource -name '*.c')

# SDK
PDL_DIR := mtb_shared/mtb-pdl-cat2/release-v2.19.1/drivers/source
sdk_src := $(shell find $(PDL_DIR) -name '*.c')

# !TODO: separate target for static libs (sdk, pd)
srcs += $(shell find $(PDL_DIR) -name '*.c')
srcs_asm :=mtb_shared/mtb-pdl-cat2/release-v2.19.1/drivers/source/COMPONENT_CM0/TOOLCHAIN_GCC_ARM/cy_syslib_gcc.S

# Subst
objs := $(srcs:%.c=$(BUILD)/%.o) $(srcs_asm:%.S=$(BUILD)/%.o)
deps := $(objs:.o=.d)

INCLUDES := -I$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111 \
			-Imtb_shared/core-lib/release-v1.6.0/include \
			-Imtb_shared/mtb-pdl-cat2/release-v2.19.1/drivers/include \
			-Imtb_shared/mtb-pdl-cat2/release-v2.19.1/devices/include \
			-Imtb_shared/cmsis/release-v5.8.2/Core/Include

# Target system configs
INCLUDES += -I$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111/config/GeneratedSource \
			-I$(PROJECT)/bsps/TARGET_APP_PMG1-CY7111

CFLAGS += -DCYPM1111_40LQXIT -include mtb_shared/mtb-pdl-cat2/release-v2.19.1/devices/include/pmg1s1_config.h

$(BUILD):
	$(V)mkdir -p $(BUILD)

$(TARGET): $(objs)
	@echo "Building target: $^"
	$(V)$(CC) $^ $(LDFLAGS) -o $@
	$(SIZE) $@

$(BUILD)/%.o: %.c $(MAKEFILE)
	@echo "Compiling $<"
	$(V)mkdir -p $(dir $@)
	$(V)$(CC) $(CFLAGS) $(INCLUDES) -MMD -MP -c $< -o $@

$(BUILD)/%.o: %.S $(MAKEFILE)
	@echo "Compiling ASM $<"
	$(V)mkdir -p $(dir $@)
	$(V)$(CC) $(CPU_FLAGS) -MMD -MP -c $< -o $@

all: $(TARGET)

clean:
	@rm -rf $(BUILD)

-include $(deps)

.PHONY: all clean
