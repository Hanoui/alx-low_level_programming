CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=gnu89
SRC := 0-whatsmyname.c
OBJ := $(SRC:.c=.o)
TARGET := mynameis

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(TARGET)
