//From https://gist.github.com/bshambaugh/b194e32211ffb5513bb7d7c5e85399f1
//Starting with https://www.geeksforgeeks.org/how-to-store-words-in-an-array-in-c/
//May use: https://www.quora.com/How-can-I-declare-a-2-dimensional-array-of-char-in-C

//ref: https://www.techonthenet.com/c_language/standard_library_functions/string_h/strcat.php

// C program to store words in an array 

#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    // Direct initialization of 2-D char array 
    char arraytwo[][3] = {"A","B","C"};

    char arraythree[3][3];

    // CHANGED: Null terminate these single-character strings
    arraythree[0][0] = 67;
    arraythree[0][1] = 0;
    arraythree[1][0] = 68;
    arraythree[1][1] = 0;
    arraythree[2][0] = 69;
    arraythree[2][1] = 0;


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

   char dummyStr[1];

    for (i=0; i < 3; i++) {
        printf("%s",arraythree[i]);
        strcat(second,arraythree[i]);
    }

    printf("%s\n",second);

 //CHANGED used strcmp() instead of == to compare strings
 if (strcmp(second,"CDE") == 0) {
       printf("true\n");
 }

    return 0;
}
