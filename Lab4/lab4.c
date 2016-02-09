// CS 271 - lab assignment #4
// program_name: lab4.c
// Purpose: to test out the functions in arrayfunctions.c in 4 different problems
// written by Jacob Giron
// 09/30/14

#include "arrayfunctions.c"
#include <stdio.h>

int main(void){
   srand(time(NULL));			//randomize seed
   
//Create 20 random integer array from -20 to 20
   printf("Problem 1\n");               
   int Numbers[20];
   int l;
   l = sizeof(Numbers) / sizeof(int);
   fillInteger(Numbers, l, -20, 20);      //fill array

   int i;
//Print out array, enter for every 10 numbers
   for(i=1; i<=l; i++){
      printf("%4d", Numbers[i-1]);
      if(i%10 == 0)
	printf("\n");   //end if
   } //end for

   printf("\n");
   findConsecutive(Numbers, l);    //Find consecutive numbers in array

//Display Problem 2
//Create and array of 50 characters and find and 3 consecutive characters
   printf("\nProblem 2\n");

   char Letters[50];
   l = sizeof(Letters) / sizeof(char);
   fillCharacter(Letters, l, 'a', 'z');  //fill up character array
 
   //Print out letters
   for(i=1; i<=l; i++){
      printf("%c ", Letters[i-1]);
   } //end for
   printf("\n");

   findTriples(Letters, l);     //find triple numbers
   
   //Display Problem 3
   //Create and array of strings and find which elements contain a certain letter
   printf("\nProblem 3\n");
   char *wordArray[20];
   //Fill Array
   wordArray[0] = "one";
   wordArray[1] = "two";
   wordArray[2] = "three";
   wordArray[3] = "four";
   wordArray[4] = "five";
   wordArray[5] = "six";
   wordArray[6] = "seven";
   wordArray[7] = "eight";
   wordArray[8] = "nine";
   wordArray[9] = "ten";
   wordArray[10] = "eleven";
   wordArray[11] = "twelve";
   wordArray[12] = "thirteen";
   wordArray[13] = "fourteen";
   wordArray[14] = "fifteen";
   wordArray[15] = "sixteen";
   wordArray[16] = "seventeen";
   wordArray[17] = "eighteen";
   wordArray[18] = "nineteen";
   wordArray[19] = "twenty";

   char letter;
   //Ask user for letter, make sure it is lowercase and a letter
   printf("Enter a letter: ");
   scanf("%c", &letter);
      
   if(letter >= 'A' && letter <= 'Z')
   {
      letter += 32;
   }//end if
      
   while(letter < 'a' || letter > 'z')
   { 
      printf("Not a letter, try again: ");
      scanf("%c", &letter);

      if(letter >= 'A' && letter <= 'Z')
      {
         letter += 32;
      } //end if
   } //end while

   findWords(wordArray,20, letter);  //find which words contain the inputed letter

   //Display Problem 4
   //Creates and array of 10  floats, from 1.0 to 50.0
   printf("\n Problem 4\n");

   //Crete and fill array
   float floaties[10];
   fillFloat(floaties, 10, 1.0, 50.0);
 
   for(i = 0; i<10; i++){
      printf("%.2f ", floaties[i]);
   }  //end for

   //Display mean, max, and min of array
   printf("\nMean = %.2f", floatMean(floaties, 10));
   printf("\nMin = %.2f", floatMin(floaties, 10));
   printf("\nMax = %.2f\n", floatMax(floaties, 10));
} //end main
