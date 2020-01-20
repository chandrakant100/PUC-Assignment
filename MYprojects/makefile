# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean
CC = gcc                        # compiler to use

LINKERFLAG = -lm

SRCS := hello.c
BINS := hello

all:hello

hello: hello.o
	@echo "Checking.."
	gcc -lm hello.c -o hello && ./hello


hello.o: hello.c
	@echo "Creating object.."
	gcc -c hello.c

clean:
	@echo "Cleaning up..."
	rm -rvf hello.o hello
