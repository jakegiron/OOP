// CS 271 - lab assignment #2
// triples.c
// This program calculates and displays all possible Pythagorean triangles from numbers 1 to 1000
// written by Jacob Giron
// 09/03/14

#include <stdio.h>
#include <math.h>

int main(void){

  int s1, s2, hyp;	//sides of the triangle
  int sum;		//sum of side1 and side2 squared

  printf("Side 1     Side 2     Hypotenuse\n");	//Print Heading for Output
  printf("------     ------     ----------\n");
  
  for(s1=1; s1<=1000; s1++){
    for(s2=1; s2<=1000; s2++){
    
    sum = pow(s1,2) + pow(s2,2);	//Compute the sum
      
      for(hyp=1; hyp<=1000; hyp++){
	if(pow(hyp,2) == sum)
	  printf("%6d       %4d           %4d\n", s1, s2, hyp); //Print Pythagorean Triple
      }//end of for loop
    }//end of for loop
  }//end of for loop

}//end main