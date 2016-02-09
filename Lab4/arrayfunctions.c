//CS 271 - lab assignment 3
//program_name: arrayfunctions.c
//Purpose: This program contains the various functions for arrays
// written by Jacob Giron
//09/30/14

#include "arrayfunctions.h"   //Include proto-types
#include <stdio.h>
#include <stdlib.h>

//This function fills a given a array with random integer between min and max
void fillInteger(int a[], int length, int min, int max){
   int i;
   for(i = 0; i < length; i++){
      a[i] = rand()%(max-min+1)+min;   
   }  //end for
}  //end fillInteger

//This function fills a character array between start and end
void fillCharacter(char c[], int length, char start, char end){
   int i;
   for(i=0; i<length; i++){
      c[i] =  (char)(rand()%(end - start + 1) + start);
   } //end for
} //end fillCharacter

//Finds 2 consecutive numbers in a int array
void findConsecutive(int array[], int length){
   int i;
   for(i=0; i<length-1; i++){
      if (array[i] == array[i+1] - 1)
      {
         printf("Elements %d and %d are consective.\n", i, i+1);
      } //end if
    } //end for
}//end findConsective

//Finds 3 consecutive letters in a character array
void findTriples(char c[], int length){
   int i;
   for(i=0; i<length-2; i++){
      if(c[i] == c[i+1]-1 && c[i] == c[i+2]-2)
      {
         printf("%c%c%c\n", c[i], c[i+1], c[i+2]);
      } //end if
   } //end for
} //end findTriples

//Finds the mean value of a float array
float floatMean(float array[], int length){
   int i;
   float sum = 0;
   for(i=0; i<length; i++){
      sum += array[i];
   } //end for
   
   return(sum/(float)length);
} //end floatMean

//finds the min value of a float array
float floatMin(float array[], int length){
   int i;
   float min = array[0];
   for(i = 1; i<length; i++){
      if(array[i] < min){
	min = array[i];
      } //end if
   } //end for
   return min;
} //end floatMin

//Finds the max of a float array
float floatMax(float array[], int length){
   int i;
   float max = array[0];
   for(i = 1; i<length; i++){
      if(array[i] > max){
	max = array[i];
      } //end if
   } //end for
   return max;
}//end floatMax

//Fills an empty float array with random float values between min and max
void fillFloat(float a[], int length, int min, int max){
   int i;
   for(i = 0; i<length; i++){
      a[i] = rand()/(float)(RAND_MAX) * (max-1) + min;
   } //end for
} //end fillFloat

//Finds if a word in a string array contains a certain letter
void findWords(char *c[], int length, char letter){
   int i;
   int j;
   for(i=0; i<length; i++){
      for(j=0; c[i][j] != '\0'; j++){
         if(c[i][j] == letter){
            printf("%s\n", c[i]);
	    break;
         } //end if
      }//end for
   }//end for
}//end findWords


