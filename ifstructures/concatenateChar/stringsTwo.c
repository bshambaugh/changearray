
// C program to store words in an array 
  
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    int i; 
  
    // Direct initialization of 2-D char array 
    char arraytwo[][3] = {"A","B","C"};

      /* Define a temporary variable */
   char example[100];

    // print the words 
   for (i = 0; i < 3; i++) {
	strcat(example,arraytwo[i]);
    }	

    printf("%s\n", example);
  
    return 0; 
} 

