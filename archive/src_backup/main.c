#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryToHexArray.h"

int main() {

    // the length of array and the value of length should be the same, it should always be a multiple of 8
    // the first number in hexArray should be length / divisor
    int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1}; 
    char *p, *g;
    Struct result;

    int length = 32;
    int divisor = 8;
    int divisorTwo = 4;
    int i;
    char hexArray[4][3] = {'\0','\0'};

    for (i=divisorTwo; i <= length; i = i + divisor) {
         if(i+divisor/2 <= length) {
	  p = fourBitToHex(array,i);
          g = fourBitToHex(array,i+divisor/2);
          result = merge_Chars(*p,*g);
	  hexArray[(i+divisor/2)/divisor-1][0] = result.example[0];
	  hexArray[(i+divisor/2)/divisor-1][1] = result.example[1];
	  hexArray[(i+divisor/2)/divisor-1][3] = '\0';
	  free(p);
          free(g);	  
       	} 

    }
  
    printf("Here is the example string from hexArray[0]: %s\n",hexArray[0]);
    printf("Here is the example string from hexArray[1]: %s\n",hexArray[1]);
    printf("Here is the example string from hexArray[2]: %s\n",hexArray[2]);
    printf("Here is the example string from hexArray[3]: %s\n",hexArray[3]);
   return 0;
}
