all: Lab10

Lab10: Lab10.o Date.o LongDate.o
	g++ -o Lab10 Lab10.o Date.o LongDate.o

Lab10.o: 
	g++ -c Lab10.cpp
Date.o:
	g++ -c Date.cpp

LongDate.o:
	g++ -c LongDate.cpp

clean:
	rm -rf *.o