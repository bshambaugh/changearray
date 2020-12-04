#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryToHexArray.h"

/* this is set up in that it only take an int array , not a binary string */

Hexarray BinToHexArray(int array[],int length) {
   char *p, *g;
   Hexarray HexArray = {{{'\0','\0'}}};
   Struct result;

    int divisor = 8;
    int divisorTwo = 4;
    int i;


    for (i=divisorTwo; i <= length; i = i + divisor) {
         if(i+divisor/2 <= length) {
          p = fourBitToHex(array,i);
          g = fourBitToHex(array,i+divisor/2);
          result = merge_Chars(*p,*g);
          HexArray.hexArray[(i+divisor/2)/divisor-1][0] = result.example[0];
          HexArray.hexArray[(i+divisor/2)/divisor-1][1] = result.example[1];
          HexArray.hexArray[(i+divisor/2)/divisor-1][3] = '\0';
          free(p);
          free(g);
        }

    }


    return HexArray;
}

Struct merge_Chars(char A, char B) {
   Struct s;
   s.example[0] = A;
   s.example[1] = B;
   s.example[2] = '\0';
   return s;
}

char* IntToChar(char str1[]) {
  char *p = malloc(sizeof *p);

  if (strcmp(str1,"0000") == 0)  {
      *p = 48;
  } else if (strcmp(str1,"0001") == 0) {
      *p = 49;
  } else if (strcmp(str1,"0010") == 0) {
      *p = 50;
  } else if (strcmp(str1,"0011") == 0) {
      *p = 51;
  } else if (strcmp(str1,"0100") == 0)  {
     *p = 52;
  } else if (strcmp(str1,"0101") == 0) {
     *p = 53;
  } else if (strcmp(str1,"0110") == 0) {
     *p = 54;
  }  else if (strcmp(str1,"0111") == 0) {
     *p = 55;
  } else if (strcmp(str1,"1000") == 0) {
     *p = 56;
  } else if (strcmp(str1,"1001") == 0) {
     *p = 57;
  } else if (strcmp(str1,"1010") == 0) {
     *p = 65;
  } else if (strcmp(str1,"1011") == 0) {
     *p = 66;
  } else if (strcmp(str1,"1100") == 0) {
     *p = 67;
  } else if (strcmp(str1,"1101") == 0) {
     *p = 68;
  } else if (strcmp(str1,"1110") == 0) {
     *p = 69;
  } else if (strcmp(str1,"1111") == 0) {
     *p = 70;
  } else
     *p = 48; /* return 0 if incorrect input */
  return p;
}

char* IntToString(int a) {
  char  *p = malloc(sizeof *p);

  if (a == 0)  {
      *p = 48;
  } else if (a == 1) {
      *p = 49;
  } else if (a == 2) {
      *p = 50;
  } else if (a == 3) {
     *p = 51;
  } else if (a == 4)  {
     *p = 52;
  } else if (a == 5) {
     *p = 53;
  } else if (a == 6) {
     *p = 54;
  }  else if (a == 7) {
     *p = 55;
  } else if (a == 8) {
     *p = 56;
  } else if (a == 9) {
     *p = 57;
  } else
     *p = 48;
  return p;
}

char* fourBitToHex(int array[], int count) {
   /* grab 4 bits: */
   int i,j;
   int windowSize = 4;
   char arrayString[4];
   char *k;
   char *r;

   /* convert the array to a string */
   char arraythree[4][4];
   char second [10] = "\0";

   for(i = 0; i < count; i++) {
      j = i % windowSize;
      k = IntToString(array[i]);
      arrayString[j] = *k;
      free(k);
   }

      arraythree[0][0] = arrayString[0];
      arraythree[0][1] = '\0';
      arraythree[1][0] = arrayString[1];
      arraythree[1][1] = '\0';
      arraythree[2][0] = arrayString[2];
      arraythree[2][1] = '\0';
      arraythree[3][0] = arrayString[3];
      arraythree[3][1] = '\0';

      for(i = 0; i < windowSize; i++) {
          strcat(second,arraythree[i]);
      }

      r = IntToChar(second);
 
      return r;
}

