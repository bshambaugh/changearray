#include <stdio.h>

int main(void)
{
   int n = 50;
   int *p = &n;
   int *d = p;

   float k = 123.4;
   float *v = &k;

   printf("The address of n is: %p\n",&n);
   printf("The address of the pointer to n is: %p\n",&p);
   printf("The address of n is:  %p\n",d);
   printf("The value at the address of n: %d\n",*d);
   printf("The address of the pointer d, which points to the pointer p, which equals the address of n: %p\n",&d);
   printf("%d\n",*d);

   printf("%p\n",&k);
   printf("%p\n",&v);
   printf("%f\n",*v);
   printf("%p\n",v);
}
