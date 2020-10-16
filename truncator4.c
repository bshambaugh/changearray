/// truncate an array by just printing out less than its length
// example truncate a 12 element array as an 8 element array

#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Struct;

Struct truncator(int array[],int truncateValue) {
  int i;
  Struct s;
  for(i = 0; i < truncateValue; i++) {
      s.binArray[i] = array[i];
  }

 return s;
}

int main(void) {
        Struct p;
        int i;
	int trunc = 23;
        int r[32] = {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
//	int r[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	p = truncator(r,trunc);

        for(i = 0; i < trunc; i++) {
           printf("The bin array  %d is %d\n",i,p.binArray[i]);
        }	
}
