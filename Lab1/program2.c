// CS 271 - lab assignment # 1
// program_name: program2.c
// Purpose: This program reads three integer values from user and determines minimum and maximum of those numbers
// written by Jacob Giron
// 08/21/14

#include <stdio.h>

// function main begins program execution
int main(void)
{
  int integer1;	//first number to be entered by user
  int integer2;	//second number to be entered by user
  int integer3; //third number to be entered by user
  int min; 	//variable in which minimum number will be stored.
  int max;	//variable in which maximum number will be stored.

  printf("Enter first integer\n"); //prompt
  scanf("%d", &integer1);	//read an integer

  printf("Enter second integer\n"); //prompt
  scanf("%d", &integer2);	//read an integer
  
  printf("Enter third integer\n"); //prompt
  scanf("%d", &integer3);	//read an integer
  
  max = integer1;	//set max to integer1
  min = integer1;	//set min to integer1
  
  if(integer2 > max)	//if statement checks if integer2 is greater than max
      max = integer2;	//set max to integer2 if true
  if(integer3 > max)	//if statement checks if integer 3 is greater than max
      max = integer3;	//set max to integer3 if true
  if(integer2 < min)	//if statement checks if integer 2 is less than min
      min = integer2;	//set min to integer2 if true
  if(integer3 < min)	//if statement check if integer 3 is less than min
      min = integer3;	//set min to integer 3 if true
  
  //print minimum and maximum
  printf("Maximum is %d\nMinimum is %d\n", max, min); 
  
} //end function main