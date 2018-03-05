CC=gcc
CFLAGS=-Wall
TARGET=hello
MAIN=main.c

all:hello.o
	$(CC) $(CFLAGS) $(MAIN) $^ -o $(TARGET)
	
%.o:%.c
	$(CC) $(CFLAGS) -c $^
	
clean:
	rm *.o $(TARGET)