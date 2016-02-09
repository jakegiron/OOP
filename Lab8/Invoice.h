// CS 271 - lab assignment 8
// program_name: Date.h
// Purpose: this header file defines all the public methods and private variables used in Invoice class
// written by Jacob Giron
// 11/12/14
#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Invoice {
  public:
    Invoice(string, string, int, int, Date);
    void setPartNumber(string);
    void setDescription(string);
    void setQuantity(int);
    void setPrice(int);
    void setDate(Date);
    string getPartNumber();
    string getDescription();
    int getQuantity();
    int getPrice();
    Date getDate();
    void displayMessage();
 
  private: 
    string partNumber;             //part number
    string description;
    int quantity;
    int price;
    Date date;
};
#endif