// CS 271 - lab assignment 7
// program_name: Date.cpp
// Purpose: This program provides the definitions for all the class methods of Date type, 
//          including constructors, accessors, and mutators
// written by Jacob Giron
// 11/06/14

#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

//Default constructor
Date::Date(){
  setMonth(1);
  setDay(1);
  setYear(2014);
} //end default constructor

//Constructor with three int parameters month, day, year
Date::Date(int m, int d, int y){  
  setMonth(m);
  setDay(d);
  setYear(y);
} //end Date 3 parameter constructor

//Mutator method that sets and checks the month of the Date type
void Date::setMonth(int m){
 
  //check if month is between 1 and 12
  if(m < 1 || m > 12){
    m = 1;
  } //end if
  
  month = m;
  
} //end setMonth

//Mutator method that sets and checks the day of the Date type
void Date::setDay(int d){
  //Check if day is between 1 and number of days in month
  if((getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 || getMonth() == 10 || getMonth() == 12) && (d > 31 || d < 1)){
    d = 1;
  } //end if
  else if((getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11) && (d > 30 || d < 1)){
    d = 1;
  } //end if
  else if(getMonth() == 2 && (d > 28 || d < 1)){
    d = 1;
  } //end if
  
  day = d;
  
} //end setDay

//Mutator method that sets checks the year of the Date type
void Date::setYear(int y){
  //Check if year is positive
  if(y < 1){
    y = 2014;
  } //end if
  
  year = y;
  
} //end setYear

//Accessor method that returns the month of the Date type
int Date::getMonth(){
  return month;
} //end getMonth

//Accessor method that returns the day of the Date type
int Date::getDay(){
  return day;
} //end getDay

//Accessor method that returns the year of the Date type
int Date::getYear(){
  return year;
} //end getYear

//This method displays the Date class in format: MM/DD/YYYY
void Date::displayMessage(){
  cout << setw(2) << setfill('0') << getMonth() << "/"
       << setw(2) << setfill('0') << getDay() << "/"
       << setw(4) << setfill('0') << getYear() << endl;
} //end displayMessage