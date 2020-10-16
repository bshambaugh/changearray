#include <math.h>
#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom(int app,int bap) {

   static int  r[10];
   int i;
   
   printf("The value of app is: %d, and bapp: %d\n",app,bap);

   /* set the seed */
   srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
//      r[i] = rand();
        r[i] = 5;
        printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   int a = 263;
   int b = 3;

   p = getRandom(a,b);
	
   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
