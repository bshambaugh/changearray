#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Struct;
typedef struct greaterSmaller Structa;

int array[8] = {0,5,7,9,11,14,6,9};

int exponent = 8;
 int truncateValue = 11;
// int truncateValue = 3;

// I need to correct this for the edge case where 
Struct padder(int array[],int truncateValue,int exponent) { 
 int i;
 int offset;
 Struct s;
 offset = truncateValue - exponent;
 for (i = 0; i < truncateValue; i ++) {   
    if(i < (truncateValue - exponent)) {
     s.binArray[i] = 0;
    } else {
     s.binArray[i] = array[i-offset];
    }
 }
 return s;
}

Structa truncate(int array[],int truncateValue,int exponent) {
   int i;
   int offset;
   Structa s;
   // only print data to desired length... (how does this relate to the exponent???)
}

int main(void) {
    Struct p;
    int i;
    p = padder(array,truncateValue,exponent);

   for (i = 0; i < 11; i ++) {
        printf("Array element frac %d is: %d\n", i, p.binArray[i]);
   }

    return 0;
}
