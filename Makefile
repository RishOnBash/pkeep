CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = pkeep
SRC = pkeep.c 

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
