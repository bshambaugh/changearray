#include <stdio.h>
#include <stdio.h>

struct binaryArray {
        int binArray[100];
        int count;
};

typedef struct binaryArray Struct;

Struct padder(int array[],int truncatedValue,int exponent) {
 int i;
 int offset;
 Struct s;
 offset = truncatedValue - exponent;
 for (i = 0; i < truncatedValue; i ++) {
    if(i < (truncatedValue - exponent)) {
     s.binArray[i] = 0;
    } else {
     s.binArray[i] = array[i-offset];
    }
 }
 s.count = truncatedValue;
 return s;
}

Struct truncator(int array[],int truncatedValue) {
  int i;
  Struct s;
  for(i = 0; i < truncatedValue; i++) {
      s.binArray[i] = array[i];
  }

  s.count = truncatedValue;

 return s;
}

Struct fittobox(int array[], int count, int truncatedValue) { 
    Struct d;
	if(truncatedValue > count + 1) {
	     d = padder(array,truncatedValue,count);
		// padder(array[],truncatedValue,count+1);
	     printf("the truncated Value in padder is: %d\n",truncatedValue);
	     printf("the count+1  in padder is: %d\n",count+1);
	} else {
          //   d = truncator(array,count+1);
	       d = truncator(array,truncatedValue);
		// truncator(array[],count+1);
	     printf("the truncated Value in truncator is: %d\n",truncatedValue);
             printf("the count+1  in truncator is: %d\n",count+1);
	}
    return d;
}

int main() {
	int i;
	// count is the length of the array..
        int count = 10;
	int truncatedValue = 12;
        Struct e;
	// count must be the same length as this array
        int array[10] = {1,2,3,4,5,6,7,8,9,10};	
        e = fittobox(array,count,truncatedValue);
	printf("e.count is %d\n",e.count);
	for(i=0; i < e.count; i++) {
	   printf("The array at %d is: %d\n",i,e.binArray[i]);
	}
	return 0;
}
