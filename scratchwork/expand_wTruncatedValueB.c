/* Demonstrates function recursion. Calculates the */
/* factorial of a number. */

#include <stdio.h>
#include <math.h>

float igg = 263.30;
//float igg = 98.9;
float bb;
float ff;
float gg;
unsigned int hh = 1;
unsigned int b;
unsigned int a = 2;
unsigned int c,d;

// I guess the code automatically initializes to zero? Maybe I need to do it myself.
unsigned int e[100];
unsigned int f[100];
unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
unsigned int kk;
unsigned int count;
unsigned int countT;
unsigned int m;

unsigned int factorial(unsigned int a);

int main( void )
{
    // I need to pull off the sign bits
    // I need to deal with the case of negative numbers...
    // maybe I need to take the absolute value of the float number igg
    bb = truncf(igg);
    b = bb;
    printf("The absolute value of igg is %f\n",fabsf(igg));
    // okay I need to take the absolute value and feed it in...
    if (fabsf(igg) == igg) {
        printf("The value is positive: sb 0\n");
	// add the sign bit to an array
    } else {
        printf("The value is negative: sb 1\n");
	// add the sign bit to an array
    }

// stuff from calc    
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
        printf("The 3 elemet is %d\n",e[79]);


     for(count = j-1; count <= j-1; count --) {
	 printf("At element %d it is %d\n", count,e[count]);
         f[k] = e[count];
	 k += 1;
     }

     printf("k at this point is %d\n",k);
     printf("so the exponent should be %d\n",k-1);
     kk = k - 1;
     // I need to pull kk into the code while(b > 0)

     printf("the element at T %d\n",f[1]);

     for(m = 0; m < j; m++) {
         printf("At element it is %d , %d\n",m,f[m]);   
     }
// end stuff from calc

      ff = igg - bb; 
//       ff = igg - b;

      gg = 2 * ff;

      printf("Ate the element is %f\n",ff);
      printf("The gg element is %f\n",gg);

      while(hh <= 23) {
        // what is the stopping point for this???
        if(gg > 1.0) {
       	 printf("I have a one: 1\n");
	 gg = 2.0 * (gg - truncf(gg));
        } else {
         printf("I have a zero: 0\n");
         gg = 2.0 * gg;
        }
	hh += 1;
      }


     return 0;
}
