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

Struct combine(int arrayOne[],int arrayTwo[],int lengthOne, int lengthTwo) {
   Struct a;
   int i;

    for (i = 0; i < lengthOne; i++) {
      a.binArray[i] = arrayOne[i]; 
   }

   for (i = lengthOne; i < lengthOne+lengthTwo; i++) {
        a.binArray[i] = arrayTwo[i-lengthOne];
   }

   a.count = lengthOne + lengthTwo;

   return a;
}

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

    Struct p, q, gg;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
	
   float inputValue = 263.30;  
   
   int mantissaLength = 23;

    t = getSignBit(inputValue);
    bb = truncf(t.value);
    b = bb;
    p = IntToBin(a,b);
    q = FracToBin(t.value,bb,mantissaLength);
    gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);
    printf("the result of gg count is %d\n",gg.count);
    printf("the gg binArray 0 is %d\n",gg.binArray[0]);
    printf("the gg binArray 1 is %d\n",gg.binArray[1]);
    printf("the gg binArray 2 is %d\n",gg.binArray[2]);
    printf("the gg binArray 3 is %d\n",gg.binArray[3]);
    printf("the gg binArray 4 is %d\n",gg.binArray[4]);
    printf("the gg binArray 5 is %d\n",gg.binArray[5]);
    printf("the gg binArray 6 is %d\n",gg.binArray[6]);
    printf("the gg binArray 7 is %d\n",gg.binArray[7]);
    printf("the gg binArray 8 is %d\n",gg.binArray[8]);
    printf("the gg binArray 9 is %d\n",gg.binArray[9]);
    printf("the gg binArray 10 is %d\n",gg.binArray[10]);
    printf("the gg binArray 11 is %d\n",gg.binArray[11]);
    printf("the gg binArray 12 is %d\n",gg.binArray[12]);
    printf("the gg binArray 13 is %d\n",gg.binArray[13]);
    printf("the gg binArray 14 is %d\n",gg.binArray[14]);
    printf("the gg binArray 15 is %d\n",gg.binArray[15]);
    printf("the gg binArray 16 is %d\n",gg.binArray[16]);
    printf("the gg binArray 17 is %d\n",gg.binArray[17]);
    printf("the gg binArray 18 is %d\n",gg.binArray[18]);
    printf("the gg binArray 19 is %d\n",gg.binArray[19]);
    printf("the gg binArray 20 is %d\n",gg.binArray[20]);
    printf("the gg binArray 21 is %d\n",gg.binArray[21]);
    printf("the gg binArray 22 is %d\n",gg.binArray[22]);
    printf("the gg binArray 23 is %d\n",gg.binArray[23]);
    printf("the gg binArray 24 is %d\n",gg.binArray[24]);
    printf("the gg binArray 25 is %d\n",gg.binArray[25]);
    printf("the gg binArray 26 is %d\n",gg.binArray[26]);
    printf("the gg binArray 27 is %d\n",gg.binArray[27]);
    printf("the gg binArray 28 is %d\n",gg.binArray[28]);
    printf("the gg binArray 29 is %d\n",gg.binArray[29]);
    printf("the gg binArray 30 is %d\n",gg.binArray[30]);
    printf("the gg binArray 31 is %d\n",gg.binArray[31]);
   return 0;
}
