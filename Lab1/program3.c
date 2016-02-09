// CS 271 - lab assignment # 1
// program_name: program3.c
// Purpose: This program reads three integer values from user and determines minimum, maximum, and middle of those numbers.
//	    It will then print those numbers in increasing order.
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
  int mid;	//variable in which middle number will be stored.

  printf("Enter first integer\n"); //prompt
  scanf("%d", &integer1);	//read an integer

  printf("Enter second integer\n"); //prompt
  scanf("%d", &integer2);	//read an integer
  
  printf("Enter third integer\n"); //prompt
  scanf("%d", &integer3);	//read an integer
  
  
  //If statements to find max of the three input values
  if(integer1 >= integer2 && integer1 >= integer3)		//if statement checks if integer1 is greater than integer2 and integer3
      max = integer1;						//set max to integer1 if true	
  else if(integer2 >= integer1 && integer2 >= integer3)		//if statement checks if integer2 is greater than integer1 and integer3
      max = integer2;						//set max to integer2 if true
  else 
      max = integer3;						//set max equal to integer3 if above if statements return false
  
  //If statements to find min of the three input values
  if(integer1 <= integer2 && integer1 <= integer3)		//if statement checks if integer1 is less than integer2 and integer3
      min = integer1;						//set min to integer1 if true
  else if(integer2 <= integer1 && integer2 <= integer3)		//if statement check if integer2 is less than integer1 and integer3
      min = integer2;						//set min to integer2 if true
  else 
      min = integer3;						//set min equal to integer3 if both if statements return false
      
  //If statements to find middle value of three input values    
  if(integer1 < max && integer1 > min)				//if statement checks if integer1 is between max and min in terms of value
      mid = integer1;						//set mid to integer1
  else if(integer2 < max && integer2 > min)			//if statement checks if integer2 is between max and min in terms of value
      mid = integer2;						//set mid to integer2
      
  //If statements to check for duplicates to ensure correct final output.
  else if(integer1 == integer2)					//if statement checks if integer1 and integer2 are dublicates
      mid = integer2;						//set mid to integer2
  else if(integer2 == integer3)					//if statement checks if integer2 and integer3 are dublicates
      mid = integer2;						//set mid to integer2

  else
      mid = integer3;						//set mid equal to intger3 if above if statements return false
  
  //print minimum and maximum
  printf("Maximum is %d\nMinimum is %d\n", max, min); 
  //print numbers in increasing order
  printf("%d\t%d\t%d\n", min, mid, max);
  
} //end function main