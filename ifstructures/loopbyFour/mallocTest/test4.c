#include<stdio.h>

int main() {
   int x = 10;
   float y = 20;
   int *pint;
   int *pfloat;
   void *vp;
   vp = &x;
   pint = vp;
   vp = &y;
   pfloat = vp;

   return 0;
}

