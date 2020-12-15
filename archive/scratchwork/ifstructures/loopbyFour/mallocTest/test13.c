#include<stdio.h>

int main(){
   int x = 10;

   int *pint;
   float *pfloat;

   void *vp = &x;

   pint = vp;
   pfloat = vp;

   printf("*pint: %d\n", *pint);

   *pfloat = 10.0;
   printf("*pfloat: %f\n", *pfloat);
   
   printf("*pint: %d\n", *pint);

   return 0;
}
