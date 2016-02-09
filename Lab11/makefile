all: lab11

lab11: Lab11.o Term.o 
	g++ Term.o Lab11.o -o Lab11

Lab11.o: Lab11.cpp Term.h
	g++ -c Lab11.cpp

Term.o: Term.cpp Term.h
	g++ -c Term.cpp

clean:
	rm -rf *.o
