//CS 271 - lab assignment 3
//program_name: lab3functions.c
//Purpose: This program contains the 3 functions that calculate if a number is
//         perfect, if a nubmer is prime, and the reverse order of the number
// written by Jacob Giron
// 09/18/14

#include "lab3functions.h" //Includes prototypes for each function in lab3function.h

int perfect(int num){
  int i = 1; // variable that gets added to sum
  int sum = 0; //sum of variable i
    while(1) //Do forever until condition is met
    {

      sum += i;      //calculate sum
      i++;
	     //increment i
      if(sum == num) //return true if sum manages to equal input num
        return 1;
      if(sum > num)  //return false if it goes over num
        return 0;

   } //end while
}// end function perfect

int prime(int num){

  int i;  //variable to go through all numbers from 2 to num-1

  for(i = 2; i<num; i++){
    if(num % i == 0) //if num is divisible by a number return false 
      return 0;
  } //end for loop
  
  return 1; //return true if for loop ends
} //end function prime

int revDigits(int num){

  int rev_num = 0; //Stores reverse of num

  while(num != 0){   //do until num's length

    rev_num = rev_num*10 + num%10;   
    num = num/10;   

  } //end while loop
  return rev_num;

} //end revDigits
		
