#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Struct;

Struct combine(int arrayOne[],int arrayTwo[],int lengthOne, int lengthTwo) {
   Struct a;
   int i;

    for (i = 0; i < lengthOne; i++) {
      a.binArray[i] = arrayOne[i]; 
   }

   for (i = lengthOne; i < lengthOne+lengthTwo; i++) {
        a.binArray[i] = arrayTwo[i-lengthOne];
   }

   a.count = lengthOne + lengthTwo;

   return a;
}

int a[5] = {1,2,3,4,5};

int b[5] = {6,7,8,9,10};

int c[12];

// loop through the first array ... add to dummy array
// loop through the second array ... add to the dummy array
// truncate and pad

int main(void) {

   int i;	
   int j = 5;
   int k = 5;

   Struct g;

// a : array 1
// length of a
// b : array 2
// length of b
// c : combined array
// return c

  g = combine(a,b,j,k);

  printf("The count is %d\n",g.count);

  for (i = 0; i < g.count; i++) {
       printf("here is the array %d\n",g.binArray[i]);
  }

/*
   for (i = 0; i < j; i++) {
      c[i] = a[i]; 
//      printf("hello, i is %d\n",i);
   }

   for (i = j; i < j+k; i++) {
  //      printf("hola, i is %d %d\n",i,i-5);
        c[i] = b[i-j];
   }

   for (i = 0; i < j + k; i++) {
       printf("here is the array %d %d\n",i,c[i]);
   }
*/

}
