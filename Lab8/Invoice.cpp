// CS 271 - lab assignment 8
// program_name: Invoice.cpp
// Purpose: The purpose of this cpp file is to define all the methods listed as prototypes in the header file
// written by Jacob Giron
// 11/12/14

#include <iostream>
#include <iomanip>
#include "Invoice.h"
using namespace std;

//Constructor for 5 parameters
Invoice::Invoice(string pn, string des, int q, int pr, Date d){
  setPartNumber(pn);
  setDescription(des);
  setQuantity(q);
  setPrice(pr);
  setDate(d);
} //end Constructor

//Function to set ParNumber
void Invoice::setPartNumber(string pn){
  partNumber = pn;
} //end setPartNumber

//Function to set the description
void Invoice::setDescription(string des){
  description = des;
} //end setDescription

//Function to set the quantity
void Invoice::setQuantity(int q){
  
  //Quantity cannot be negative
  if(q < 0){
    q = 0;
  } //end if

  quantity = q;
} //end setQuantity

//Function to set the Price
void Invoice::setPrice(int pr){
  //Price cannot be zero or negative
  if(pr <= 0){
    pr = 1;
  } //end if
  price = pr;
} //end setPrice

//Function to set the Date    
void Invoice::setDate(Date d){
  date = d;
} //end setDate

//Function to get the PartNumber
string Invoice::getPartNumber(){
  return partNumber;
} //end getPartNumber

//Function to get Descrption
string Invoice::getDescription(){
  return description;
} //end getDescription

//Function to get the Quantity
int Invoice::getQuantity(){
  return quantity;
} //getQuantity
    
//Function to get the price    
int Invoice::getPrice(){
  return price;
} //end getPrice
   
//Function to get the Date
Date Invoice::getDate(){
  return date;  
} //end getDate

//Function to display all the data memebers of the Invoice in a readable manner
void Invoice::displayMessage(){
  cout << "\nPartNumber: " << getPartNumber()
       << "\nDescription: " << getDescription()
       << "\nQuantity: " << getQuantity()
       << "\nPrice: $" << getPrice()
       << "\nDate Ordered: " << date << endl;
       
}//end displayMessage
  

