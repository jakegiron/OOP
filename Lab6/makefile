all: lab6

lab6: lab6.o vectorFunctions.o 
	g++ vectorFunctions.o lab6.o -o lab6

lab6.o: lab6.cpp vectorFunctions.h
	g++ -c lab6.cpp

vectorFunctions.o: vectorFunctions.cpp vectorFunctions.h
	g++ -c vectorFunctions.cpp

clean:
	rm -rf *.o
