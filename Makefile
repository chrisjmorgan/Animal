CC = g++
CFLAGS = -Wall -pedantic -g

Animal.out: AnimalMain.o Animal.o Mammel.o Reptile.o Bird.o Elephant.o Skunk.o Python.o Crocodilia.o Eagle.o
	$(CC) $(CFLAGS) AnimalMain.o Animal.o Mammel.o Reptile.o Bird.o Elephant.o Skunk.o Python.o Crocodilia.o Eagle.o -o Animal.out

AnimalMain.o: AnimalMain.cpp
	$(CC) $(CFLAGS) AnimalMain.cpp -c

Mammel.o: Mammel.cpp Mammel.h
	$(CC) $(CFLAGS) Mammel.cpp -c

Reptile.o: Reptile.cpp Reptile.h
	$(CC) $(CFLAGS) Reptile.cpp -c

Bird.o: Bird.cpp Bird.h 
	$(CC) $(CFLAGS) Bird.cpp -c

Elephant.o: Elephant.cpp Elephant.h
	$(CC) $(CFLAGS) Elephant.cpp -c

Skunk.o: Skunk.cpp Skunk.h
	$(CC) $(CFLAGS) Skunk.cpp -c

Python.o: Python.cpp Python.h
	$(CC) $(CFLAGS) Python.cpp -c

Crocodilia.o: Crocodilia.cpp Crocodilia.h
	$(CC) $(CFLAGS) Crocodilia.cpp -c

Eagle.o: Eagle.cpp Eagle.c
	$(CC) $(CFLAGS) Eagle.cpp -c               
