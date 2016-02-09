all: Orders

Orders: Orders.o Date.o Invoice.o
	g++ -o Orders Orders.o Date.o Invoice.o

Orders.o:
	g++ -c Orders.cpp
Date.o:
	g++ -c Date.cpp

Invoice.o:
	g++ -c Invoice.cpp

clean:
	rm -rf *.o
