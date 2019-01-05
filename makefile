# doing by hand
# g++ main.cpp hello.cpp factorial.cpp -o hello

# SYNTAX
#	target: dependencies
#	[tab] system command

# the compiler to use.
CC=g++
# options I'll pass to the compiler.
CFLAGS=-c -Wall

all: hello
	./a.out

hello: hello.c
	$(CC) g++ glfw-example.cpp /usr/lib/libGL.so -lglfw

clean:
	rm -v *o hello *.out
