CC = g++
CFLAGS = -Wall -pedantic -g

animal.out: AnimalMain.o animal.o Mammal.o Reptile.o bird.o Elephant.o Skunk.o Python.o Crocodilia.o eagle.o
	$(CC) $(CFLAGS) AnimalMain.o animal.o Mammal.o Reptile.o bird.o Elephant.o Skunk.o Python.o Crocodilia.o eagle.o -o animal.out

AnimalMain.o: AnimalMain.cpp
	$(CC) $(CFLAGS) AnimalMain.cpp -c

Mammal.o: Mammal.cpp Mammal.h
	$(CC) $(CFLAGS) Mammal.cpp -c

Reptile.o: Reptile.cpp Reptile.h
	$(CC) $(CFLAGS) Reptile.cpp -c

bird.o: bird.cpp bird.h 
	$(CC) $(CFLAGS) bird.cpp -c

Elephant.o: Elephant.cpp Elephant.h
	$(CC) $(CFLAGS) Elephant.cpp -c

Skunk.o: Skunk.cpp Skunk.h
	$(CC) $(CFLAGS) Skunk.cpp -c

Python.o: Python.cpp Python.h
	$(CC) $(CFLAGS) Python.cpp -c

Crocodilia.o: Crocodilia.cpp Crocodilia.h
	$(CC) $(CFLAGS) Crocodilia.cpp -c

eagle.o: eagle.cpp eagle.h
	$(CC) $(CFLAGS) eagle.cpp -c               
