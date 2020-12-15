#include<stdio.h>

int main(){
   int x = 10;
   float y = 20.0;

   void *vp;
   vp = &x;

   // this does an implicit conversion
   int *pint = vp;

   printf("*pint: %d\n", *pint);

   return 0;
}
