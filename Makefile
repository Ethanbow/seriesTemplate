all: series.c
	gcc -O0 -Wall series.c -lm
	./a.out
