all:main.o queue.o
	gcc -Wall -g main.o queue.o -o main

main.o: main.c queue.h
	gcc -c -g main.c
queue.o: queue.c
	gcc -c -g queue.c

clean:
	rm main *.o
