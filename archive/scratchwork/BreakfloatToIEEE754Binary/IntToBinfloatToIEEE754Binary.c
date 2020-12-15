#include <math.h>
#include <stdio.h>

struct binaryArray {
	int binArray[100];
	int count;
};

struct signBit {
	int sign[1];
	float value;
};

typedef struct binaryArray Struct;

typedef struct signBit sBit;

sBit getSignBit(float igg) {

    sBit t;
    float r;

    r = fabsf(igg);

    if (r == igg) {
        t.sign[0] = 0;
    } else {
        t.sign[0] = 1;
    }

    t.value = r;
    return t;
}

Struct IntToBin(int app,int bap) {
   
   Struct s;

   unsigned int a,b,c,d;
   unsigned int e[100];
   unsigned int j = 0;
   unsigned int k = 0;

   unsigned int count;

   a = app;
   b = bap;

   while(b > 0) {
      c = b /a;
      d = b % a;
      e[j] = d;
      j += 1;
      b = c;
   }

   for(count = j-1; count <= j-1; count --) {
         s.binArray[k] = e[count];
	 k += 1;
   }

   s.count = k - 1;
   return s; 
}

int main () {

   float inputValue = 263.30;
 
     Struct p;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
    t = getSignBit(inputValue);
    bb = truncf(t.value);
    b = bb;
    p = IntToBin(a,b);
    printf("The count is: %d\n",p.count);
    printf("The element 0 of binArray from IntToBin is: %d\n",p.binArray[0]); 
    printf("The element 1 of binArray from IntToBin is: %d\n",p.binArray[1]);
    printf("The element 2 of binArray from IntToBin is: %d\n",p.binArray[2]);
    printf("The element 3 of binArray from IntToBin is: %d\n",p.binArray[3]);
    printf("The element 4 of binArray from IntToBin is: %d\n",p.binArray[4]);
    printf("The element 5 of binArray from IntToBin is: %d\n",p.binArray[5]);
    printf("The element 6 of binArray from IntToBin is: %d\n",p.binArray[6]);
    printf("The element 7 of binArray from IntToBin is: %d\n",p.binArray[7]); 
    printf("The element 8 of binArray from IntToBin is: %d\n",p.binArray[8]);
    return 0;
}
