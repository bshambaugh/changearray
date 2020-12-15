#include <math.h>
#include <stdio.h>

struct greaterSmaller {
	int arrays[100];
	int count;
};

typedef struct greaterSmaller Struct;

/* function to generate and return random numbers */

Struct getRandom(int app,int bap) {
   
   Struct s;

 //  static int r[3] = {0,5,6};
   unsigned int a,b,c,d;
   unsigned int e[100];
   unsigned int i = 0;
   unsigned int f[100];

   // get rid of the printf stuff
 
   a = bap;
   b = app;

   while(b > 0) {
      c = b /a;
      d = b % a;
      e[i] = d;
      s.arrays[i] = e[i];
      printf("The array inside is %d\n",e[i]);
      i += 1;
      b = c;
   }

   s.count = 5;
//   s.arrays[0] = 5;
   return s; 
  // return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   Struct p;
   int i;

   int a = 263;
   int b = 2;

   p = getRandom(a,b);

   printf("The arrays is: %d\n",p.arrays[0]);
   printf("The arrays is: %d\n",p.arrays[1]);
   printf("The arrays is: %d\n",p.arrays[2]);
   printf("The arrays is: %d\n",p.arrays[3]);
   printf("The arrays is: %d\n",p.arrays[4]);
   printf("The arrays is: %d\n",p.arrays[5]);
   printf("The arrays is: %d\n",p.arrays[6]);
   printf("The arrays is: %d\n",p.arrays[7]);
   printf("The arrays is: %d\n",p.arrays[8]);
   printf("The second arrays is: %d\n",p.count);
/*	
   for ( i = 0; i < 3; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }
*/
   return 0;
}
