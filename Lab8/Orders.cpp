// CS 271 - lab assignment 8
// program_name: Orders.cpp
// Purpose: The purpose of this program is to test the new Date cpp file and the Invoice cpp file
// written by Jacob Giron
// 11/12/14

#include <iostream>
#include <iomanip>
#include "Date.h" 
#include "Invoice.h"
using namespace std;

int main(void){
  //2 Date classes used for testing
  Date test1(12, 30, 2015);
  Date test2(5, 7, 2013);

  //Test Copy constructor
  Date testcopy(test1);

  //Test nextDay function
  testcopy.nextDay();
  testcopy.nextDay();

  //test << operator
  cout << "Testing << overload operator with Date: " << endl;
  cout << "\nStarting Date: " << test1 << "\n2 days later: " << testcopy << endl;
  cout << test2;

  //7 Invoice classes used for testing
  Invoice invoice1("151ftdf", "Ginger", 50, 5, test1);
  Invoice invoice2("151fvvc", "Ale", 30, 31, test2);
  Invoice invoice3("1241fgm", "Paper", 79, 13, test1);
  Invoice invoice4("151frew", "Baseballs", 100, 80, test1);
  Invoice invoice5("156zda", "Candy", 90, 100, testcopy);
  Invoice invoice6("2345fym", "Yo-yos", 67, 234, testcopy);
  Invoice invoice7("56sdvc", "World of Warcraft", 1, 60, test2);

  //Test Accessors
  cout << "\nInvoice 1 printed out using Accessor Methods" << endl;
  cout << "\nPartNumber: " << invoice1.getPartNumber()
       << "\nDecription: " << invoice1.getDescription()
       << "\nQuantity: " << invoice1.getQuantity()
       << "\nPrice: " << invoice1.getPrice()
       << "\nDate Ordered: " << invoice1.getDate() << endl;
       
  //Test Mutators     
  invoice1.setPartNumber("12345");
  invoice1.setDescription("Im in Hell");
  invoice1.setQuantity(-50);
  invoice1.setPrice(0);
  test2.nextDay();
  invoice1.setDate(test2);
  cout << "Invoice 1 After Mutator calls: " << endl;
  invoice1.displayMessage();
       
       
  invoice2.displayMessage();
  invoice3.displayMessage();
  invoice4.displayMessage();
  invoice5.displayMessage();
  invoice6.displayMessage();
  invoice7.displayMessage();

}