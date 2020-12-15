#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryToHexArray.h"

int main() {

    // the length of array and the value of length should be the same, it should always be a multiple of 8
    // the first number in hexArray should be length / divisor

    int length = 32;
    int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1}; 

    Hexarray resultTwo;
    resultTwo = BinToHexArray(array,length);
    printf("Here is the example string from hexArray[0]: %s\n",resultTwo.hexArray[0]);
    // Here is the example string from hexArray[0]: 43   
    printf("Here is the example string from hexArray[1]: %s\n",resultTwo.hexArray[1]);
    // Here is the example string from hexArray[1]: 83
    printf("Here is the example string from hexArray[2]: %s\n",resultTwo.hexArray[2]);
    // Here is the example string from hexArray[2]: A6
    printf("Here is the example string from hexArray[3]: %s\n",resultTwo.hexArray[3]);
    // Here is the example string from hexArray[3]: 65

    // match all the elements of the hex array for the given input...
   return 0;
}
