#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char IntToString(int a) {
  char  *p;
  p = malloc(1 * sizeof(char));

  if (a == 0)  {
      *p = 48;
  } else if (a == 1) {
      *p = 49;
  } else if (a == 2) {
      *p = 50;
  } else if (a == 3) {
     *p = 51;
  } else if (a == 4)  {
     *p = 52;
  } else if (a == 5) {
     *p = 53;
  } else if (a == 6) {
     *p = 54;
  }  else if (a == 7) {
     *p = 55;
  } else if (a == 8) {
     *p = 56;
  } else if (a == 9) {
     *p = 57;
  } else
     *p = 48;
  return *p;
}

//int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
int array[9] = {0,1,2,3,4,5,6,7,8};
char *t;
char arrayString[4];
//int count = 32;
int count = 9;
int beakBeat = 4;
int i = 0;
int j;
int k = 1;

int main() {

    t = malloc(1 * sizeof(char));
 
     for(i=0; i < count; i++) {
	  j = i % beakBeat;
          if(j != 0) {
          //  *t = IntToString(array[k]);
          //   printf("The current array element is %d\n",array[k]);
             printf("j is currently %d : k is currently %d : i is currently %d\n",j,k,i);
      	    k += 1;
	  //  strcat(arrayString,t);
	  } else {
         //   printf("The current array element is %d\n",array[k]);
	     printf("k is currently %d : i is currently %d\n",k,i);
      	  //  *t = IntToString(array[k]);
	  //  strcat(arrayString,t);
         //   printf("The string presently is: %s\n",arrayString);
	    k = 1;
	  }
      }

     printf("The string is: %s\n",arrayString[0]);

     return 0;
}
