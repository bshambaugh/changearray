#include <stdio.h>

int length = 32;
int divisor = 8;
int divisorTwo = 4;
int i;

int main ( void ) {

    for (i=divisor; i <= length; i = i + length/divisor*2) {
	 printf("here is %d\n",i);
         if(i+divisor/2 <= length) { 
	    printf("hre is  %d\n",i+divisor/2);
	 }
    }

    for (i=divisorTwo; i <= length; i = i + divisor) {
         // call function x the first time
	 printf("here is divisorTwo %d\n",i);
	 // call function x the second time
	 if (i+divisor/2 <= length) {
	   printf("here is divisorTwo + 4 %d\n",i+divisor/2);
           printf("write two elements to array {%d , %d }\n",i,i+divisor/2);
	 }
	 // merge the result of the 1st and second calls to function x
	 // write this result to array
    }

}
