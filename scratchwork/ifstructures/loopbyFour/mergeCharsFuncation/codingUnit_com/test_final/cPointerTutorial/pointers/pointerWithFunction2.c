#include<stdio.h>
#include<stdlib.h>

void change_value(int);

int main()
{
   int x = 10;
   printf("The address of  x outside of fn is: %p\n",&x);
   change_value(x);
//   printf("The value of x is: %d\n", x);
   return 0;
}

void change_value(int x) {
   x = 15;
   printf("The address of  x inside of fn is: %p\n",&x);
}
