#include <stdio.h>

int a = 2;
int b = 99;
int c;
int d;

int e;
int f;

int g;
int h;

int i;
int j;

int k;
int l;

int m;
int n;

int o;
int p;

int main(void)
{
	c = b / a;
	d = b % a;
	printf("The expansion of %d is: %d * %d + %d\n",b,c,a,d);

	e =  c / a;
	f =  c % a;
        printf("The expansion of %d is: %d * %d + %d\n",c,e,a,f);

	g = e / a;
	h = e % a;
        printf("The expansion of %d is: %d * %d + %d\n",e,g,a,h);


	i = g / a;
	j = g % a;
        printf("The expansion of %d is: %d * %d + %d\n",g,i,a,j);
  
	k = i / a;
	l = i % a;
	printf("The expansion of %d is: %d * %d + %d\n",i,k,a,l);

	m = k / a;
	n = k % a;
	printf("The expansion of %d is: %d * %d + %d\n",k,m,a,n);

        o = m / a;
	p = m % a;
	printf("The expansion of %d is: %d * %d + %d\n",m,o,a,p);
	printf("Break the hex number into 2 byte chunks\n");
}

