/* Demonstrates function recursion. Calculates the */
/* factorial of a number. */

// compile by: gcc expand2.c -o expand2 -lm
// source: https://askubuntu.com/questions/332884/how-to-compile-a-c-program-that-uses-math-h
// https://www.gnu.org/software/libc/manual/html_node/Rounding-Functions.html

#include <stdio.h>
#include <math.h>

float a = 263.3;
unsigned int b;
float c;
float d;
int e;
float f;
float g;
int h = 0;

float j,k,l;
int m = 0;

int main( void )
{

     b = a;
     c = a - b;
     printf("The value is: %f\n",a);
     printf("The value of int is: %d\n",b);
     printf("The value of fraction is: %f\n",c);

     d = truncf(a);
     f = a - d;
     e = d;
     printf("The truncated value is %f\n",d);
     printf("The truncated value as an int is %d\n",e);
     printf("The value of the faction is %f\n",f);
     
     g = 2.0 * f;
     printf("Double the fraction is %f\n",g);
     if(g > 1.0) {
       h = 1;
     } else {
       h = 0;
     }	     

     printf("The value of h is %d\n",h);

     j = truncf(g);
     k = g - j;
     l = 2.0 * k;
     printf("Double the fraction is %f\n",l);
     if(l > 1.0) {
       m = 1;
     } else {
       m = 0;
     }

     printf("The value of h is %d\n",m);

     return 0;
}
