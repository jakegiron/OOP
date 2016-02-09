// written by Jacob Giron
// This program will test functions by passing values into through pass by value and pass by reference
// and see how the function affects on our test array. The program will also scan in an array and find 
// it's maximum value.
// Lab 5 
// October 16, 2014
#include <iostream>
#include <iomanip>
using namespace std;

//This function will attept to swap the values a and b using pass by value
void swap1(int a, int b);

//This function will attept to swap the values a and b using pass by reference
void swap2(int *aPtr, int *bPtr);

//Function uses an array and it's length to find the maximum value in the array
float maximum(float *fPtr, int l);

int main()
{

	int values[5];

	int i;
	for(i=0; i<5; i++)
	{
		values[i] = i * 2 + 2;
	} //end for

	int x = 1;
	int y = 2;

	//Do first swap
	swap1(values[x],values[y]);

	//show first swap
	cout << "After the first swap:\n";
	for(i=0; i<5; i++)
	{
		cout << "values[" << i << "]" << " = " << values[i] << " ";
	} //end for
	cout << "\n\n";

	int *aPtr = &values[0];
	int *vPtr = &values[1];
	int *wPtr = &values[2];

	//Do 2nd swap
	swap2(vPtr, wPtr);

	//show 2nd swap
	cout << "After the second swap:\n";
	for(i=0; i<5; i++)
	{
		cout << "valus[" << i << "]" << " = " << values[i] << " ";
	} //end for
	cout << "\n\n";

	//Show array using pointer/offset notation
	cout << "Using Pointer/Offset Notation:\n";
	for(i=0; i<5; ++i)
	{
		cout << "*(values + " << i << ") = " << *( values + i ) << " ";
	} //end for
	cout << "\n";

	//Show array using pointer subscripting notation
	cout << "\nUsing Pointer subscripting:\n";
	for(i=0; i<5; ++i)
	{
		cout << "*aPtr[" << i << "] = " << aPtr[ i ] << " ";
	} //end for
	cout << "\n\n";

	// print aPtr
	cout << "Address of first element in array values = " << aPtr << "\n";
	// print aPtr + 3
	cout << "Address of 4th element in array values = " << aPtr + 3 << *aPtr << "\n";
	// print the value stored at aPtr + 3 
	cout << "Contents of 4th element address = " << *(aPtr + 3) << "\n";

	//Scan a list of 10 float value from user
	float list[10];

	cout << "\nInput 10 float values: ";
	for(i=0; i<10; i++)
	{
		cin >> list[i];
	}
	
	float max = maximum(list,10);
	
	//find and print max
	cout << "Maximum of list = " << max << endl;

}// end the main function

// Swaps int a and int b using face value passing
void swap1(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
} //end swap1

//Swaps int a and int b using their references
void swap2(int *aPtr, int *bPtr)
{
	int tmp = *aPtr;
	*aPtr = *bPtr;
	*bPtr = tmp;
} //end swap2

//Finds the maximum value in the reference to the array(*fPtr)
float maximum(float *fPtr, int l)
{
	float max = fPtr[0];
	for(int i=0; i<l; i++)
	{
		if(fPtr[i] > max)
		{
			max = fPtr[i];
		} //end if
	} //end for
	return max;
} //end maximum

