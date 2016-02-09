// CS 271 - lab assignment 7
// program_name: DateTest.cpp
// Purpose: This program will test the class functions of Date.cpp by making several Date data types
// written by Jacob Giron
// 11/06/14

#include <iostream>
#include <iomanip>
#include "Date.h" 
using namespace std;

int main(void){
  Date date1;
  Date date2(5,17,2030);
  Date date3(50,17,2030);
  Date date4(5,32,2030);
  Date date5(5,17,-1);
  Date date6(2,28,1998);
  Date date7(0,50,1775);

  date1.displayMessage();
  
  //Test mutators
  date1.setMonth(7);
  date1.setDay(25);
  date1.setYear(1556);
  
  //Test Accessors
  cout << "Date 1 Month: " << date1.getMonth() << endl;
  cout << "Date 1 Day: " << date1.getDay() << endl;
  cout << "Date 1 Year: " << date1.getYear() << endl;
  
  //Test displays to see if date checking works.
  date2.displayMessage();
  date3.displayMessage();
  date4.displayMessage();
  date5.displayMessage();
  date6.displayMessage();
  date7.displayMessage();
    
} //end main