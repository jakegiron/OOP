// CS 271 - lab assignment 11
// program_name: Term.h
// Purpose: This program describes the Term calss
// written by Jacob Giron
// 11/12/14

#ifndef TERM_H
#define TERM_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Term{
  friend ostream &operator<<( ostream &, const Term & );
  friend istream &operator>>( istream &, Term & );
  
  private:
    int coefficient;
    int exponent;
  
  public:
    Term ( int coef = 0, int exp = 0);
    void setCoefficient ( int );
    void setExponent ( int );
    int getCoefficient ();
    int getExponent( );
    Term operator+ (const Term & ) const;
    Term operator- (const Term & ) const;
    Term operator* (const Term & ) const;
};
#endif