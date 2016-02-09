// CS 271 - lab assignment 10
// program_name: Lab10.cpp
// Purpose: This Program tests the LongDate class
// written by Jacob Giron
// 12/08/14

#include "LongDate.h"
#include "Date.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //Teste dates
    LongDate date1 (10, 03, 119);
    LongDate date2 (17, 15, 2056);
    LongDate date3 ( 4, 8, 502 );
    LongDate date4 ( 7, 6, 5082 );
    LongDate date5 ( 11, 17, 781 );
    LongDate date6 (12, 8, 2014);
    
    
    //Print out Test Dates
    cout << "Day of the Week: " << setw (2) << setfill ('0') << date1.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date1.getDay ( ) << "/ "
	 << setw (2) << setfill ('0') << date1.getYear ( )
         << " is " << date1.getDayOfTheWeek () << endl;

    cout << "Day of the Week: " << setw (2) << setfill ('0') << date2.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date2.getDay ( ) << " / "
	 << setw (2) << setfill ('0') << date2.getYear ( )
         << " is " << date2.getDayOfTheWeek () << endl;	 
    
    cout << "Day of the Week: " << setw (2) << setfill ('0') << date3.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date3.getDay ( ) << "/ "
	 << setw (2) << setfill ('0') << date3.getYear ( )
         << " is " << date3.getDayOfTheWeek () << endl;  

    cout << "Day of the Week: " << setw (2) << setfill ('0') << date4.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date4.getDay ( ) << "/ "
	 << setw (2) << setfill ('0') << date4.getYear ( )
         << " is " << date4.getDayOfTheWeek () << endl;  

    cout << "Day of the Week: " << setw (2) << setfill ('0') << date5.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date5.getDay ( ) << "/ "
	 << setw (2) << setfill ('0') << date5.getYear ( )
         << " is " << date5.getDayOfTheWeek () << endl;  

    cout << "Day of the Week: " << setw (2) << setfill ('0') << date6.getMonth ( ) << "/ "
         << setw (2) << setfill ('0') << date6.getDay ( ) << "/ "
	 << setw (2) << setfill ('0') << date6.getYear ( )
         << " is " << date6.getDayOfTheWeek () << endl;  
}//end main