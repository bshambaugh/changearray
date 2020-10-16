#include <math.h>
#include <stdio.h>

struct binaryArray {
	int binArray[100];
	int count;
};

typedef struct binaryArray Struct;
typedef struct binaryArray Structb;

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


Structb FracToBin() {
   Structb s;
   s.binArray[0] = 5;
   s.count = 1;
   return s;
}

/* main function to call above defined function */
int main () {

   Struct p;
   Structb q;
   int i;

   float igg = 263.30;
   float bb, ff, gg;
   unsigned int b;

   int a = 2;

//   float ff;

   bb = truncf(igg);
   b = bb;
   
   p = IntToBin(a,b);

   q = FracToBin();

   printf("igg is %f , and bb is %f\n",igg,bb);

   ff = igg - bb;

   printf("ff is %f\n",ff);

   for (i = 0; i <= p.count; i ++) {
      printf("Array element %d is: %d\n", i, p.binArray[i]);
   }

   printf("The first array element in the 2nd structrue is %d , with count %d\n",q.binArray[0],q.count);

   return 0;
}
