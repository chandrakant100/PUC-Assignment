all: run

hello.o: hello.c
	@echo "Creating object.."
	gcc -c hello.c

run: hello.o
	./hello

.PHONY: all run
