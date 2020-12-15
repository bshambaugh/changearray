#include <stdio.h>

int length = 32;
int divisor = 8;
int divisorTwo = 4;
int i;

int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};

int main ( void ) {

    for (i=divisorTwo; i <= length; i = i + divisor) {
         // call function x the first time
	 // printf("here is divisorTwo %d\n",i);
	 // call function x the second time
	 if (i+divisor/2 <= length) {
	//   printf("here is divisorTwo + 4 %d",i+divisor/2);
           printf("write two elements to array {%d , %d }, : {%d, %d} \n",i-1,i+divisor/2-1,array[i-1],array[i+divisor/2-1]);
	 }
	 // merge the result of the 1st and second calls to function x
	 // write this result to array
    }

}
