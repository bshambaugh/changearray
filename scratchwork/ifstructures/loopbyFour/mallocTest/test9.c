#include<stdio.h>

int main(){
   int x = 10;
   void *vp = &x;
   *(int *)vp = 15;
   printf("x: %d\n",x);
   return 0;
}

