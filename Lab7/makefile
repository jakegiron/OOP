all: lab7

lab7: DateTest.o Date.o 
	g++ Date.o DateTest.o -o DateTest

DateTest.o: DateTest.cpp Date.h
	g++ -c DateTest.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

clean:
	rm -rf *.o
