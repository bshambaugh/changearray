#include<stdio.h>

int *new_integer(void);

int main() {
   int *p;
   p = new_integer();
   printf("Value of *p: %d\n",*p);
   return 0;
}

int* new_integer(void) {
    int x = 10;
    return &x;
}
