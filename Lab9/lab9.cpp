// written by Jacob Giron
//CS271 - lab9
//Purpose - This program creates three structs: date, time, and event. The user can then
//          use input data to store information about events and print them out in a organized fashion
// 12/02/2014

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Structure for Date
struct date{
    int month;
    int day;
    int year;
}; //End of date struct

typedef struct date Date;

//Structure for Time
struct time{
    int hour;
    int minute;
    int second;
}; //End of time struct

typedef struct time Time;

//Structure for Event
struct event{
    struct date eventDate;
    struct time eventTime;
};

typedef struct event Event;
typedef Event * EventPtr;

//FUCNTION PROTO-TYPES
void inputDate(Date *d);
void inputTime(Time *t);
void outputDate(const Date *const d);
void outputTime(const Time *const t);
void swapEvents(Event *e1, Event *e2);

int main(){
  int eventCount;
  EventPtr newPtr;
  
  cout << "How many events do you need?" << endl;
  cin >> eventCount;
      
  newPtr = (EventPtr) malloc (eventCount * sizeof(Event));
  
  //Checks in newptr is valid
  if(newPtr == NULL){
    cout << "unable to allocate enough memory" <<endl;
    return 1;
  } //end if
  
  EventPtr ePtr;
  ePtr = newPtr;
  
  //Get Inputs
  int i = 1;
  while(i <= eventCount){
    cout << "Event #" << i << endl;
    inputDate(&(ePtr->eventDate));
    inputTime(&(ePtr->eventTime));
    ePtr++;
    i++;
  } //end while loop
  
  //Print Events
  ePtr = newPtr;
  i=1;
  while(i <= eventCount){ 
    cout << "Event #" << i << ":    ";
    outputTime(&(ePtr->eventTime));
    cout << "    ";
    outputDate(&(ePtr->eventDate));
    cout << endl;
    ePtr++;
    i++;
  } //end while
  
  ePtr = newPtr;
  cout << "\nAfter Swapping first and last Event: " << endl; 
  
  if(eventCount > 0){
    swapEvents(ePtr, (ePtr+eventCount-1));
  }//end if
  
  //Print Events
  i=1;
  while(i <= eventCount){ 
    cout << "Event #" << i << ":    ";
    outputTime(&(ePtr->eventTime));
    cout << "    ";
    outputDate(&(ePtr->eventDate));
    cout << endl;
    ePtr++;
    i++;
  } //end while
  
  //Free Memory
  free(newPtr);
} //end main

//The function asks the user for the variables in their event date and validates them
void inputDate(Date *d){
  
    cout <<"Please enter the month of the event: ";
    cin >> d->month;

    //Check month is a valid month
    if(d->month <= 0 || d->month > 12){
        d->month = 1;
    } //end if

    cout << "Please enter the day of the event: ";
    cin >> d->day;
      
    //Check if month is valid
    if((d->month == 1 || d->month == 3 || d->month == 5 || d->month == 7 || d->month == 8 || d->month == 10 || d->month == 12) && (d->day > 31 || d->day < 1)){
      d->day = 1;
    } //end if
    else if((d->month == 4 || d->month == 6 || d->month == 9 || d->month == 11) && (d->day > 30 || d->day < 1)){
      d->day = 1;
    } //end if
    else if(d->month == 2 && (d->day > 28 || d->day < 1)){
      d->day = 1;
    } //end if

    cout << "Please enter the year of the event: ";
    cin >> d->year;

    //Check if year is valid
    if(d->year < 0){
      d->year = 2014;
    } //end if
      
} //end inputDate

//This function asks for the variables in the users Event time and validates them
void inputTime(Time *t){

    cout << "Please enter the hour of the event: ";
    cin >> t->hour;

    //Check if hours is valid
    if(t->hour < 1 || t->hour > 12){
        t->hour = 1;
    }//end if

    cout << "Please enter the minute of the event: ";
    cin >> t->minute;

    //Checks if minutes are valid
    if(t->minute < 0 || t->minute >59){
        t->minute = 0;
    }//end if

    cout << "Please enter the second of the event: ";
    cin >> t->second;

    //check if seconds are valid
    if(t->second < 0 || t->second >59){
        t->second = 0;
    }//end if

} //end inputTime

//Outputs the Date in format: mm/dd/yyyy
void outputDate(const Date *const d){
    cout << setw(2) << setfill('0') << d->month << "/"
         << setw(2) << setfill('0') << d->day << "/"
         << setw(4) << setfill('0') << d->year;

}//end outputDate

//Outputs the Time in the format: hh:mm:ss
void outputTime(const Time *const t){
    cout << setw(2) << setfill('0') << t->hour << ":"
         << setw(2) << setfill('0') << t->minute << ":"
         << setw(2) << setfill('0') << t->second;
} //end outputTime

//This function takes two Event points and swaps their values.
void swapEvents(Event *e1, Event *e2){
     Event temp;
     
     temp.eventDate = e1->eventDate;
     temp.eventTime = e1->eventTime;
     
     e1->eventDate = e2->eventDate;
     e1->eventTime = e2->eventTime;
     
     e2->eventDate = temp.eventDate;
     e2->eventTime = temp.eventTime;
} //end swapEvents