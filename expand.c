/* Demonstrates function recursion. Calculates the */
/* factorial of a number. */

#include <stdio.h>

unsigned int b = 98;
unsigned int a = 2;
unsigned int c,d;

// I guess the code automatically initializes to zero? Maybe I need to do it myself.
unsigned int e[100];
unsigned int f[100];
unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
unsigned int count;
unsigned int countT;
unsigned int m;

unsigned int factorial(unsigned int a);

int main( void )
{
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

     printf("the element at T %d\n",f[1]);

     for(m = 0; m < j; m++) {
         printf("At element it is %d , %d\n",m,f[m]);   
     }

     return 0;
}
