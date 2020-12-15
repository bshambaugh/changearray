#include <stdio.h>

int a, b;
int p;

int main() {
   int *p;
   a = 2;
   b = 15;
   iToBin(a,b);
   printf("The value of the return value p is: %d\n",p);
}

void * iToBin(int a, int b) {
    int a, b,c, d;
     while(b > 0) {
        c = b /a;
        d = b % a;
        printf("The expansion of %d is: %d * %d + %d\n",b,c,a,d);      
        b = c;
     }
 // return 5;
}
