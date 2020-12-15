#include <stdio.h>

int arrayOne[11] = {0,1,2,3,4,5,6,7,8,9,10};
int count = 11;
int beakBeat = 4;
int i = 0;
float j;
int k = 1;

int main() {
   
      for(i=0; i < count; i++) {
          printf("this is an array: %d\n",i);
	  j = i % beakBeat;
 	  printf("this is the breakbeat %f\n",j);
          if(j != 0) {
            printf("js is %f\n\n",j);
	    printf("k is %d\n",k);
	    k += 1;
	    // instead of k ... you could be concatenating strings.... 
	  } else {
	    printf("ralph\n");
	    printf("k is %d\n",k);
	    k = 1;
	  }
      }
}
