#include<stdio.h>

int* return_me(int*);

int main() { 
   int x = 10;
   int *p = &x;
   printf("x: %p\n",p);

   p = return_me(p);
   printf("x: %p\n",p);

   return 0;
}

int* return_me(int *pint) {
   return pint;
}
