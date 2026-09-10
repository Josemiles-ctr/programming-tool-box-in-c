CC := gcc
CFLAGS := -Wall -Wextra -Iinclude
TARGET := recursion
SRC := main.c \
       src/algorithms/recursions/factorial.c
OBJ := $(SRC:.c=.o)
.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	rm -f $(OBJ) $(TARGET)
