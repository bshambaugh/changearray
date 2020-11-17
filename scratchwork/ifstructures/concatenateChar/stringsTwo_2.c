
// C program to store words in an array 
  
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    int i; 
  
    // Direct initialization of 2-D char array 
    char arraytwo[][3] = {"A","B","C"};

    char arraythree[3][3];

    arraythree[0][0] = 67;
    arraythree[1][0] = 68;
    arraythree[2][0] = 69;

    /* Define a temporary variable */
   char example[100];
   char second[100];

    // print the words 
   for (i = 0; i < 3; i++) {
	strcat(example,arraytwo[i]);
    }	

    printf("%s\n", example);

    printf("%s\n", arraythree[0]);
    printf("%s\n", arraythree[1]);
    printf("%s\n", arraythree[2]);

    i = 0;
    
    for (i=0; i < 3; i++) {
	printf("%s",arraythree[i]);
    }

    printf("%s\n",second);

    return 0; 
} 

