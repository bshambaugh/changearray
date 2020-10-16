#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Struct;

int array[8] = {0,5,7,9,11,14,6,9};
// int arrayB[11];

int exponent = 8;
int truncateValue = 11;

Struct truncator(int array[],int truncateValue,int exponent) { 
 int i;
 int offset;
 Struct s;
 offset = truncateValue - exponent;
 // printf("The offset is: %d\n",offset);
 // printf(" {0,5,7,9,11,14,6,9};\n");
 for (i = 0; i < truncateValue; i ++) {   
    //	 printf("Array element is: %d\n",array[i]);
    if(i < (truncateValue - exponent)) {
   //   printf("pad a zero here for i = %d\n",i);
  //    printf("%d\n",0);
     s.binArray[i] = 0;
 //      arrayB[i] = 0;
    } else {
  //   printf("bring in the array here for i = %d\n",i);
  //   printf("The i minus offset is: %d, the array value is: %d\n",i-offset,array[i-offset]);
  //   printf("%d\n",array[i-offset]);
     s.binArray[i] = array[i-offset];
//     arrayB[i] = array[i-offset];
    }
 }
 return s;
}

int main(void) {
 //   int truncateValue = 4+1;
    // compare the exponent with the truncate value...
    Struct p;
    int i;
    p = truncator(array,truncateValue,exponent);

   for (i = 0; i < 11; i ++) {
        printf("Array element frac %d is: %d\n", i, p.binArray[i]);
	 //     printf("Array element frac %d is: %d\n", i, arrayB[i]);
   }

    return 0;
}
