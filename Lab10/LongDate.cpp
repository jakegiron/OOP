// CS 271 - lab assignment 10
// program_name: LongDate.cpp
// Purpose: The program contains the function definitions of the LongDate class which is the name of the day for a given month, day and year
// written by Jacob Giron
// 12/08/14

#include "LongDate.h"
#include "Date.h"
#include <cstdlib>

using namespace std;


//Constructor for long date. Parameters: (int, int, int)
LongDate :: LongDate(int m, int d, int y) : Date(m,d,y){
  setMonth(m);
  setDay(d);
  setYear(y);
  setDayOfTheWeek("");
}// end LongDate constructor

//Mutator setDayOfTheWeek, sets the name of the day
void LongDate :: setDayOfTheWeek(string s){
  int y = getYear();
  int m = getMonth();
  int d = getDay();
  
  int x = 0;
  static int t [ ] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };  
  y -= m < 3;  
  x = ( y + y / 4 - y / 100 + y / 400 + t [ m - 1 ] + d ) % 7;
  
  if ( x == 0 )  
    dayOfTheWeek = "Sunday";    //end if
  if ( x == 1 )
    dayOfTheWeek = "Monday";    //end if
  if ( x == 2 )
    dayOfTheWeek = "Tuesday";   //end if
  if ( x == 3 )
    dayOfTheWeek = "Wednesday"; //end if
  if ( x == 4 )  
    dayOfTheWeek = "Thursday";  //end if
  if ( x == 5 )  
    dayOfTheWeek = "Fraiday";   //end if
  if ( x == 6 )  
    dayOfTheWeek = "Saturday";  //end if
} //end setDayOfTheWeek

//Accessor
string LongDate::getDayOfTheWeek(){
  return dayOfTheWeek;
}//end getDayOftheWeek