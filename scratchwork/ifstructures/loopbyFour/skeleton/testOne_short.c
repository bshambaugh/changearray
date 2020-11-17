#include <stdio.h>

int length = 32;
int divisor = 8;
int divisorTwo = 4;
int i;

int main ( void ) {

    for (i=divisorTwo; i <= length; i = i + divisor) {
        
         if (i+divisor/2 <= length) {
           printf("write two elements to array {%d , %d }\n",i,i+divisor/2);
         }
    }
}
