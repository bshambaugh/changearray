#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Struct;
typedef struct greaterSmaller Structa;

int array[8] = {0,5,7,9,11,14,6,9};

int exponent = 8;
 int truncatedValue = 6;
// int truncateValue = 3;

// I need to correct this for the edge case where 
Struct padder(int array[],int truncatedValue,int exponent) { 
 int i;
 int offset;
 Struct s;
 offset = truncatedValue - exponent;
 for (i = 0; i < truncatedValue; i ++) {   
    if(i < (truncatedValue - exponent)) {
     s.binArray[i] = 0;
    } else {
     s.binArray[i] = array[i-offset];
    }
 }
 return s;
}

Structa truncator(int array[],int truncatedValue) {
  int i;
  Structa s;
  for(i = 0; i < truncatedValue; i++) {
      s.binArray[i] = array[i];
  }

 return s;
}

int main(void) {
    Struct p;
    Structa q;
    int i;
//    int trunc = 8;
//    int r[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // put the decision tree for comparion tuncator....
    if(truncatedValue > exponent + 1) {
      printf("I need to pad %d is greater than %d\n",truncatedValue,exponent + 1);
       p = padder(array,truncatedValue,exponent);
         for (i = 0; i < truncatedValue; i ++) {
             printf("Array element frac %d is: %d\n", i, p.binArray[i]);
         }

    } else {
      printf("I need to truncate. %d is less than %d\n",truncatedValue,exponent + 1);
       q = truncator(array,exponent);
       for (i = 0; i < truncatedValue; i ++) {
             printf("Array element frac %d is: %d\n", i, q.binArray[i]);
       }
   }

 //   q = truncator(r,trunc); 
 //   p = padder(array,truncatedValue,exponent);

/*
   for (i = 0; i < 11; i ++) {
        printf("Array element frac %d is: %d\n", i, p.binArray[i]);
   }

   for(i = 0; i < 8; i++) {
           printf("The bin array is %d\n",q.binArray[i]);
    }

 */
    return 0;
}

