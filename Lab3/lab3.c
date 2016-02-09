// CS 271 - lab assignment #3
// program_name: lab3.c
// Purpose: to include functions from another .c file and call the functions to 
//          calculate if a number is perfect, if a number is prime, and to 
//          print out the number in reverse order
// written by Jacob Giron
// 09/18/14

#include "lab3functions.c" //include fucntions from lab3functions.c
#include <stdio.h>
int main (void) {
  int x; //counting variable

  //Print out Perfect Number from 1 to < 1000 using function
  printf("Perfect Numbers:\n");

  for(x = 1; x<1000; x++){
    if(perfect(x))
	printf("%d\n", x);
   } //end for

   //Print out Prime Numbers from 1 to 20
   printf("\nPrime Numbers: \n");

   for(x = 1; x<=20; x++){
     if(prime(x))
       printf("%d\n", x);
   }  //end for

   //Print out several different numbers in reverse order
   printf("\nReverse Numbers: \n");

   printf("%d\n", revDigits(156));
   printf("%d\n", revDigits(-1156));
   printf("%d\n", revDigits(897));
   printf("%d\n", revDigits(41257));
   printf("%d\n", revDigits(-32));
   printf("%d\n", revDigits(-7412));
   printf("%d\n", revDigits(3652));

} //end main
   
