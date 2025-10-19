# Simple Makefile for Practical C by O'Reilly
# Usage: make 5 ex2
MAKEFLAGS += --no-print-directory

CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11
BUILD   = build

CH  := $(word 1, $(MAKECMDGOALS))
EX  := $(word 2, $(MAKECMDGOALS))
CH_DIR := $(wildcard $(CH)-chapter-*)
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
		$(CC) $(CFLAGS) $(SRC) -o $(BIN); \
		echo "Running: $(EX)"; \
		./$(BIN); \
	fi

clean:
	@rm -rf $(BUILD)