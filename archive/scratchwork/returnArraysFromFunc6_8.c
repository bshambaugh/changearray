#include <math.h>
#include <stdio.h>

struct greaterSmaller {
	int binArray[100];
	int count;
};

struct gs {
        int ba[100];
	int ct;
};

typedef struct greaterSmaller Struct;
typedef struct gs SA;

SA FracToBin(float igi, float jgi) {
   SA ss;

   float ff, gg, igg, bb;
   unsigned int hh = 0;

   igg = igi;
   bb = jgi;

   ff = igg - bb;
   gg = 2 * ff;

   while(hh < 23) {
         if(gg > 1.0) {
           printf("I have a one: 1 with hh %d\n",hh);
           gg = 2.0 * (gg - truncf(gg));
           ss.ba[hh] = 1;
	 } else {
           printf("I have a zero: 0 with hh %d\n",hh);
           gg = 2.0 * gg;
	   ss.ba[hh] = 1;
         }
      hh += 1;
   }
   ss.ct = hh;
}

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
   SA q;
   int i;

   unsigned int hh = 1;

   float igg = 263.30;
   float bb, ff, gg;
   unsigned int b;

   int a = 2;


   bb = truncf(igg);
   b = bb;
   
   p = IntToBin(a,b);

   q = FracToBin(igg,bb);

   for (i = 0; i <= p.count; i ++) {
      printf("Array element %d is: %d\n", i, p.binArray[i]);
   }

   printf("-----------------\n");

   i = 0;

   for (i = 0; i <= q.ct; i ++) {
      printf("Array fract element %d is: %d\n", i, q.ba[i]);
   }


   return 0;
}
