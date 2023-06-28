CC = gcc
FLAGS = -pthread

INCLUDE = -I include

SRC = test
MAIN = test.c

OUTPUT = spinner

all: build

build:
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)/$(MAIN) -o $(OUTPUT)

clean:
	rm -f $(SRC)