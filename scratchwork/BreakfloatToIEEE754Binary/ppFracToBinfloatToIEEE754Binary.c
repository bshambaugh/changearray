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
    Struct p, pp;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
    t = getSignBit(inputValue);
    bb = truncf(t.value);
    b = bb;
    p = IntToBin(a,b);
    pp = IntToBin(a,p.count + 127);
    printf("here is the pp count %d\n",pp.count);
    printf("here is the pp count 0 %d\n",pp.binArray[0]);
    printf("here is the pp count 1 %d\n",pp.binArray[1]);
    printf("here is the pp count 2 %d\n",pp.binArray[2]);
    printf("here is the pp count 3 %d\n",pp.binArray[3]);
    printf("here is the pp count 4 %d\n",pp.binArray[4]);
    printf("here is the pp count 5  %d\n",pp.binArray[5]);
    printf("here is the pp count 6 %d\n",pp.binArray[6]);
    printf("here is the pp count 7 %d\n",pp.binArray[7]);
    return 0;
}
