CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -g

# calculator.c 是模块 11 的库实现，没有 main，需要与 main.c 一起链接。
SOURCES := $(shell find modules -name '*.c' -type f \
	! -path 'modules/11_modular_programming/main.c' \
	! -path 'modules/11_modular_programming/calculator.c' | sort)
PROGRAMS := $(patsubst %.c,build/%,$(SOURCES))
MODULAR_PROGRAM := build/modules/11_modular_programming/calculator_demo

.PHONY: all clean list

all: $(PROGRAMS) $(MODULAR_PROGRAM)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

$(MODULAR_PROGRAM): modules/11_modular_programming/main.c \
	modules/11_modular_programming/calculator.c \
	modules/11_modular_programming/calculator.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) modules/11_modular_programming/main.c \
		modules/11_modular_programming/calculator.c -o $@

list: all
	@find build -type f -perm -111 | sort

clean:
	rm -rf build
