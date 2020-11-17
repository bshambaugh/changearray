#include <stdio.h>

int a = 16;
int b = 177130;
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

char m[3];
char n[3];
char o[3];
char p[3];
char q[3];

int main(void)
{
	c = b / a;
	d = b % a;
	printf("The expansion of %d is: %d * %d + %d\n",b,c,a,d);
        sprintf(m,"%x",d);
	printf("The char version  %d is %s\n\n",d,m);

	e =  c / a;
	f =  c % a;
        printf("The expansion of %d is: %d * %d + %d\n",c,e,a,f);
        sprintf(n,"%x",f);
        printf("The char version  %d is %s\n\n",f,n);

	g = e / a;
	h = e % a;
        printf("The expansion of %d is: %d * %d + %d\n",e,g,a,h);
        sprintf(o,"%x",h);
	printf("The char version  %d is %s\n\n",h,o);


	i = g / a;
	j = g % a;
        printf("The expansion of %d is: %d * %d + %d\n",g,i,a,j);
        sprintf(p,"%x",j);
        printf("The char version  %d is %s\n\n",j,p);
  
	k = i / a;
	l = i % a;
	printf("The expansion of %d is: %d * %d + %d\n",i,k,a,l);
        sprintf(q, "%X", l);
	printf("The char version  %d is %s\n\n",l,q);

        printf("Break the hex number into 2 byte chunks\n");
}

function functor
{
    int a,b,c,b,d[32];
    if (b < 4294967295)
    {
       c = b / a;
       d = b % a;
       b = c;
       return b, d;
    } else {
       return -1;
    }

}
