#include <stdio.h>
#include <math.h>

float igg = 263.30;
float bb;
unsigned int b;
unsigned int a = 2;
unsigned int f[100];

int main(void) {

bb = truncf(igg);
b = bb;


f = intToBin(int a, int b);
return 0;

}


int intToBin(int a, int b) {
    unsigned int f[100];
    unsigned int e[100];
    unsigned int c,d;
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;
    unsigned int kk;
    unsigned int m;
    unsigned int count;
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
    return f;
}
