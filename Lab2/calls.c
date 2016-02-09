// CS 271 - lab assignment #2
// calls.c
// This program reads input fromt he user until a sentinal value is read to print out the informa#ion of the call logs that were recorded that day.
// written by Jacob Giron
// 08/27/14

#include <stdio.h>
#define SENTINAL -1	//value to stop while loop

int main(void){
  
  //Dexlaration of variables
  int calltime = 0;	//Total amount of time spent on calls
  int min=0, max=0;	//Minimum and Maximum of all call times 
  int x; 		//Input Variable from user, call time in seconds
  int total = 0; //Total amount of calls
  double mean;	//Average amount of time spent on a call
  
  printf("Enter the call length in seconds(%d to quit): ", SENTINAL);	//prompt
  scanf("%d", &x);	//scan integer
  
  if(x != -1){	//Avoid setting max and min if there is zero input
    max = x;
    min = x;
  }//end if
  
  while(x != SENTINAL){
    
    //Check for max and min
    if(x > max)
      max = x;
    if(x < min)
      min = x;
    
    calltime += x;	//Add total call times
    total++;		//Add total number of calls
    
    printf("Enter the next call length in seconds(%d to quit): ", SENTINAL);	//prompt
    scanf("%d", &x);	//scan integer
  }	//end while loop
  
  if(total != 0)	//avoid mean calculation if there is zero input	
    mean = calltime/ (double)total;	//calculate mean of all phone call times
  
  //Display Output
  printf("\nTotal Number of Calls         %8d\n", total);
  printf("Mean Call Length %13.1f seconds\n", mean);
  printf("Minimum Call Length %10d seconds\n", min);
  printf("Maximum Call Length %10d seconds\n", max);
}	//end main