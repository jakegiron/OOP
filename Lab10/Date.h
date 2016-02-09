// CS 271 - lab assignment 8
// program_name: Date.h
// Purpose: this header file defines all the public methods and private variables used in the Date class
// written by Jacob Giron
// 11/12/14
#ifndef DATE_H
#define DATE_H 
#include <iostream>
using namespace std;

class Date{
  friend ostream& operator<<(ostream &, const Date &);
  public:
    Date();
    Date(int, int, int);
    Date(const Date &);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    void displayMessage();
    void nextDay();

  private: 
    int month;
    int day;
    int year;
};
#endif