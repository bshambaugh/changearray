#include <stdio.h>

int a = 16;
int b = 177130;
int c;
int d;

int main(void)
{
c = b / a;
d = b % a;

printf("The expansion of %d is: %d * %d + %d\n",b,c,a,d);
}


