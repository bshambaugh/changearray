#include<stdio.h>

int main(){
   int x = 10;
   void *vp = &x;
   *vp = 15;
   return 0;
}

