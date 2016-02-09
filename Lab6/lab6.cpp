// CS 271 - lab assignment 6
// program_name: lab6.cpp
// Purpose: This program will test the functions in vectorFunctions.cpp
// written by Jacob Giron
// 10/31/14

#include "vectorFunctions.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main()
{
	vector<int> integers1(1000);
	primeSieve(integers1);

	vector<int> integers2(200);
	movePrimes(integers1, integers2);

	cout << "\nPrime elements of the 1000 element vector" << endl;
	for(int i=1; integers2[i-1] != 0; i++)
	{
		cout << setw(5) << integers2[i-1]; 
			
	        if(i % 20 == 0)
		    cout << "\n"; //end if
		
	} //end for

	//PART f (repeat steps a through e

	vector<int> integers3(5000);
	primeSieve(integers3);

	vector<int> integers4(1000);
	movePrimes(integers3, integers4);

	cout << "\n\nPrime elements of the 5000 element vector" << endl;
	for(int i=1; integers4[i-1] != 0; i++)
	{
		cout << setw(5) << integers4[i-1]; 
			
		if(i % 20 == 0)
		    cout << "\n"; //end if
	} //end for

	cout << endl;

}//end main
