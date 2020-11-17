/// truncate an array by just printing out less than its length
// example truncate a 12 element array as an 8 element array

#include <stdio.h>

struct greaterSmaller {
       int binArray[100];
       int count;
};

typedef struct greaterSmaller Structg;

Structg righttruncator(int array[],int truncateValue, int leftoffset) {
  int i;
  Structg s;
  // offset by 0 by 1
  for(i = 0; i < truncateValue+leftoffset; i++) {
      s.binArray[i] = array[i+leftoffset];
  }
  s.count = truncateValue-1;
 return s;
}

int main(void) {
        Structg p;
        int i;
	int trunc = 23;
	int array_length = 32;
	int leftoffset = 1;
        int r[32] = {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
//	int r[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	p = righttruncator(r,trunc,leftoffset);

	// before truncation
       printf("before truncation\n");
       for(i = 0; i < array_length; i++) {
           printf("The bin array  %d is %d\n",i,r[i]);
        }	

       // after truncation
       printf("after truncation\n");
        for(i = 0; i < trunc; i++) {
           printf("The bin array  %d is %d\n",i,p.binArray[i]);
        }	
       printf("the s.cunt is %d\n",p.count);
}
