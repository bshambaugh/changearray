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
   unsigned int j = 0;
   unsigned int k = 0;

   unsigned int count;
   unsigned int exponent;
   // get rid of the printf stuff
 
   a = bap;
   b = app;

   while(b > 0) {
      c = b /a;
      d = b % a;
      e[i] = d;
      //     s.arrays[i] = e[i];
      // printf("The array inside is %d\n",e[i]);
      i += 1;
      // printf("the j is %d\n",j);
      j += 1;      
      b = c;
   }

   for(count = j-1; count <= j-1; count --) {
         printf("At element %d it is %d\n", count,e[count]);
         f[k] = e[count];
         s.arrays[k] = e[count];
	 k += 1;
   }

   exponent = k - 1;

   s.count = exponent;
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

/*   printf("The arrays is: %d\n",p.arrays[0]);
   printf("The arrays is: %d\n",p.arrays[1]);
   printf("The arrays is: %d\n",p.arrays[2]);
   printf("The arrays is: %d\n",p.arrays[3]);
   printf("The arrays is: %d\n",p.arrays[4]);
   printf("The arrays is: %d\n",p.arrays[5]);
   printf("The arrays is: %d\n",p.arrays[6]);
   printf("The arrays is: %d\n",p.arrays[7]);
   printf("The arrays is: %d\n",p.arrays[8]);
   printf("The second arrays is: %d\n",p.count);
*/
/*	
   for ( i = 0; i < 3; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }
*/
   for (i = 0; i <= p.count; i ++) {
      printf("Array element %d is: %d\n", i, p.arrays[i]);
   }

   return 0;
}
