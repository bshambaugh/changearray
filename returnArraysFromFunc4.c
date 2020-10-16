#include <math.h>
#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom(int app,int bap) {

   static int  r[10];
   int ii;
   
   unsigned int a,b,c,d;
   unsigned int e[100];
   unsigned int i = 0;
   unsigned int j = 0;
   unsigned int f[100];

   unsigned int k = 0;
   unsigned int count;
   unsigned int exponent;
   unsigned int m;

   // get rid of the printf stuff
 
   a = bap;
   b = app;

   printf("The value of app is: %d, and bapp: %d\n",app,bap);

   while(b > 0) {
      c = b /a;
      d = b % a;
      printf("The expansion of %d is: %d * %d + %d\n",b,c,a,d);
      e[i] = d;
      i += 1;
      printf("the j is %d\n",j);
      j += 1;
      b = c;
   }

   for(count = j-1; count <= j-1; count --) {
         printf("At element %d it is %d\n", count,e[count]);
         f[k] = e[count];
         k += 1;
   }

   exponent = k - 1;

   printf("This is the exponent %d\n",exponent);

   for(m = 0; m < j; m++) {
         printf("At element it is %d , %d\n",m,f[m]);
   }
   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( ii = 0; ii < 10; ++ii) {
//      r[i] = rand();
        r[ii] = app + bap;
        printf( "r[%d] = %d\n", ii, r[ii]);
   }

   // I might have to return an array
   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   int a = 263;
   int b = 2;

   p = getRandom(a,b);
	
   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
