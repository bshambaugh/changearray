#include <math.h>
#include <stdio.h>

struct greaterSmaller {
	int binArray[100];
	int count;
};

typedef struct greaterSmaller Struct;

Struct IntToBin(int app,int bap) {
   
   Struct s;

   unsigned int a,b,c,d;
   unsigned int e[100];
   unsigned int j = 0;
   unsigned int k = 0;

   unsigned int count;

   a = app;
   b = bap;

   while(b > 0) {
      c = b /a;
      d = b % a;
      e[j] = d;
      j += 1;
      b = c;
   }

   for(count = j-1; count <= j-1; count --) {
         s.binArray[k] = e[count];
	 k += 1;
   }

   s.count = k - 1;
   return s; 
}

/* main function to call above defined function */
int main () {

   Struct p;
   int i;

   float igg = 263.30;
   float bb, ff, gg;
   unsigned int b;

   int a = 2;

   bb = truncf(igg);
   b = bb;
   
   p = IntToBin(a,b);

   for (i = 0; i <= p.count; i ++) {
      printf("Array element %d is: %d\n", i, p.binArray[i]);
   }

   return 0;
}
