// CS 271 - lab assignment 11
// program_name: Lab11.cpp
// Purpose: This Program tests Term class
// written by Jacob Giron
// 12/08/14


#include "Term.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  Term k(2, 3);
  Term r;
  cout << ("Input a term in the form of 'x^y': ");
  cin >> r;
  cout << "the sum of k and r is " << (k + r) << endl;
  cout << "\nTry Subtraction:"<<endl;
  cout << ("Input a term in the form of 'x^y': ");
  cin >> r;
  cout << "the subtraction of k and r is " << (k - r) << endl;
  cout << "\nTry Multiplication:" << endl;
  cout << ("Input a term in the form of 'x^y': ");
  cin >> r;
  cout << "the product of k and r is " << (k * r) << endl;
  
  
}//end main