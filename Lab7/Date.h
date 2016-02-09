// CS 271 - lab assignment 7
// program_name: Date.h
// Purpose: this header file defines all the public methods and private variables used in the Date class
// written by Jacob Giron
// 11/06/14
#ifndef DATE_H
#define DATE_H
using namespace std;

class Date {
  public:
    Date();
    Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    void displayMessage();

  private: 
    int month;
    int day;
    int year;
};
#endif