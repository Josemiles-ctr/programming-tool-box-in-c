CC := gcc
CFLAGS := -Wall -Wextra -Iinclude

TARGET := recursion
OUTPUT_DIR := build

SRC := main.c \
       src/algorithms/recursions/factorial.c

OBJ := $(SRC:%.c=$(OUTPUT_DIR)/%.o)

.PHONY: all clean

all: $(OUTPUT_DIR)/$(TARGET)

$(OUTPUT_DIR)/$(TARGET): $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) -o $@ $^

$(OUTPUT_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OUTPUT_DIR)
