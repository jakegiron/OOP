// CS 271 - lab assignment 11
// program_name: Term.cpp
// Purpose: This program defines all of the properties of a term
// written by Jacob Giron
// 11/12/14

#include "Term.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor
Term::Term(int coef, int exp){
  setCoefficient(coef);
  setExponent(exp);
}//end Constructor

//Mutators
void Term::setCoefficient(int coef){
  coefficient = coef;
}//end setCoefficient

void Term::setExponent(int exp){
  exponent = exp;
}//end setExponent

//Accessors
int Term::getCoefficient(){
  return coefficient;
}//end getCoefficient

int Term::getExponent(){
  return exponent;
}//end getExpoennt

//Adds a plus operators to Terms
Term Term::operator+(const Term& other) const{
  if(exponent != other.exponent)
    return Term(0,0);
  
  int result = coefficient + other.coefficient;
  return Term(result, exponent);
}

//Overloads - operator so you can subtract terms
Term Term::operator-(const Term& other) const{
  if(exponent != other.exponent)
    return Term(0,0);
  
  int result = coefficient - other.coefficient;
  return Term(result, exponent);
}//end operator-

//Overloads operator* so you can multiply 
Term Term::operator* (const Term& other) const{
  int result_co = coefficient * other.coefficient;
  int result_exp = exponent + other.exponent;
  return Term(result_co, result_exp);
}//end operator*

//This function overloads the << operator to display the date as mm/dd/yyyy
ostream& operator<< (ostream &output, const Term &t){
  // date format is mm/dd/year
  output <<  t.coefficient << "x^" <<t.exponent;
  
  // remember return type is ostream &
  return output;  
} //end ostream overload function
  
//This function overlaods the >> operator to read in term values  
istream& operator >>(istream &input, Term &t){
  input >> t.coefficient;
  input.ignore(1);
  input >> t.exponent;
  return input;
}//end istream overload function
  


