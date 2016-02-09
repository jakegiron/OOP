// CS 271 - lab assignment 10
// program_name: LongDate.h
// Purpose: This is the header file for the LongDate class
// written by Jacob Giron
// 12/08/14

#ifndef LONGDATE_H
#define LONGDATE_H
#include "Date.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class LongDate : public Date{

  public:
    LongDate(int m, int d, int y);
    string getDayOfTheWeek();
    void setDayOfTheWeek(string s);
    
  private:
    string dayOfTheWeek;
};
#endif