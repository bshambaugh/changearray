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

Struct FracToBin(float igg, float bb,int mantissalength) {
   Struct s;
   float ff,gg;
   unsigned int hh = 0;

   ff = igg - bb;
   gg = 2.0 * ff;

   while(hh<mantissalength) {
      if(gg > 1.0) {
        gg = 2.0 * (gg - truncf(gg));
        s.binArray[hh] = 1;
      } else {
	gg = 2.0 * gg;
	s.binArray[hh] = 0;
      }
      hh += 1;
   }
   s.count = hh - 1;
   return s;
}

int main () {

    Struct q;
    sBit t;
    float bb;
    float inputValue = 263.30;
    int mantissaLength = 23;

    t = getSignBit(inputValue);
    bb = truncf(t.value);
    q = FracToBin(t.value,bb,mantissaLength);
    printf("q count is: %d\n",q.count);
    printf("q binArrayi 0 is: %d\n",q.binArray[0]);
    printf("q binArray 1 is: %d\n",q.binArray[1]);
    printf("q binArray 2 is: %d\n",q.binArray[2]);
    printf("q binArray 3 is: %d\n",q.binArray[3]);
    printf("q binArray 4 is: %d\n",q.binArray[4]);
    printf("q binArray 5 is: %d\n",q.binArray[5]);
    printf("q binArray 6 is: %d\n",q.binArray[6]);
    printf("q binArray 7 is: %d\n",q.binArray[7]);
    printf("q binArray 8 is: %d\n",q.binArray[8]);
    printf("q binArray 9 is: %d\n",q.binArray[9]);
    printf("q binArray 10 is: %d\n",q.binArray[10]);
    printf("q binArray 11 is: %d\n",q.binArray[11]);
    printf("q binArray 12 is: %d\n",q.binArray[12]);
    printf("q binArray 13 is: %d\n",q.binArray[13]);
    printf("q binArray 14 is: %d\n",q.binArray[14]);
    printf("q binArray 15 is: %d\n",q.binArray[15]);
    printf("q binArray 16 is: %d\n",q.binArray[16]);
    printf("q binArray 17 is: %d\n",q.binArray[17]);
    printf("q binArray 18 is: %d\n",q.binArray[18]);
    printf("q binArray 19 is: %d\n",q.binArray[19]);
    printf("q binArray 20 is: %d\n",q.binArray[20]);
    printf("q binArray 21 is: %d\n",q.binArray[21]);
    printf("q binArray 22 is: %d\n",q.binArray[22]);
    printf("q binArray 23 is: %d\n",q.binArray[23]);
   return 0;
}
