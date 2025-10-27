# Simple Makefile for Practical C by O'Reilly
# Usage: make 5 ex2
MAKEFLAGS += --no-print-directory

CC      = gcc
C_FLAGS  = -Wall -Wextra -std=c11 
LD_FLAGS = -lm
BUILD   = build

CH  := $(word 1, $(MAKECMDGOALS))
EX  := $(word 2, $(MAKECMDGOALS))
CH_DIR := $(wildcard $(CH)-*)
SRC := $(CH_DIR)/$(EX).c
BIN := $(BUILD)/$(EX)

# Prevent make from complaining about unknown targets
%:
	@if [ "$@" = "clean" ]; then \
		@rm -rf $(BUILD); \
	elif [ -z "$(CH)" ] || [ -z "$(EX)" ]; then \
		echo "Usage: make <chapter> <exercise>"; \
		echo "Example: make 5 ex2"; \
		exit 1; \
	else \
		mkdir -p $(BUILD); \
		echo "Compiling: $(EX) from Chapter $(CH)"; \
		$(CC) $(C_FLAGS) $(SRC) -o $(BIN) $(LD_FLAGS); \
		echo "Running: $(EX)"; \
		./$(BIN); \
	fi

clean:
	@rm -rf $(BUILD)