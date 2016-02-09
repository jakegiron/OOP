//CS 271 - lab assignment 6
//program_name: vectorFunctions.cpp
//Purpose: This program contains the two functions that manipulate vectors: primeSieve implements the Sieve of Era
//sthosthenes algortithm and movePrimes looks for non-zero elements in a vetor to store as subscripts of the non-
//zero elements in another vector
// written by Jacob Giron
// 10/31/14

#include "vectorFunctions.h"
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

//This method take a vector as a parameter and initializes all elements in it as 1.
//The program then sets all non-prime subscripts in the vector to 0.
void primeSieve(vector<int> &vec1)
{
	//Initialize all elements in vector to one
	for(int i=0; i<vec1.size(); i++)
		vec1[i] = 1;
	//end for
	vec1[0] = 0;
	vec1[1] = 0;
	

	for(int i=2; i<vec1.size(); i++)
	{
		for(int k=i*2; k<vec1.size(); k = k+i)
		{
			vec1[k] = 0;	
			
		} //end for
	} //end for
	
}//end primeSieve

//This function will take two vectors references at parameters and look for non-zero elements in the first vector
//the function will then store the subscript of the non-zero element into the 2nd vector.
void movePrimes(const vector<int> &vec1, vector<int> &vec2)
{
	try{
		int k = 0;
		for(int i=0; i < vec1.size(); i++)
		{
			if(vec1[i] != 0){
				vec2.at(k) = i;
				k++;
			} //end if
		} //end for
	}//end try
	catch(out_of_range& ex){
		cout << "Vector 2 is out of space to store" << ex.what() << endl;
	}//end catch	
	

}//end movePrimes


