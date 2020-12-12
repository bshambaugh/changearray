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

Struct righttruncator(int array[],int truncateValue, int leftoffset) {
  int i;
  Struct s;
  for(i = 0; i < truncateValue+leftoffset; i++) {
      s.binArray[i] = array[i+leftoffset];
  }
  s.count = truncateValue-1;
 return s;
}

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

Struct arrayConcatenate(int arrayOne[], int arrayTwo[]) 
{  
   Struct s;
}

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

Struct fittobox(int array[], int count, int truncatedValue) {
    Struct d;
        if(truncatedValue > count + 1) {
             d = padder(array,truncatedValue,count);
        } else {
               d = truncator(array,truncatedValue);
        }
    return d;
}

int main () {
   
    Struct p, q, pp, ee, gg, mm;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
    int leftoffset = 1;
    float inputValue = 263.30;
    int mantissaLength = 23;

    t = getSignBit(inputValue);
    bb = truncf(t.value);
    b = bb;
    p = IntToBin(a,b);
    q = FracToBin(t.value,bb,mantissaLength);
    pp = IntToBin(a,p.count + 127);
    gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);
    mm = righttruncator(gg.binArray,gg.count,leftoffset);

    printf("this is mm count %d\n",mm.count);
    printf("this is mm binArray 0: %d\n",mm.binArray[0]);
    printf("this is mm binArray 1: %d\n",mm.binArray[1]);
    printf("this is mm binArray 2: %d\n",mm.binArray[2]);
    printf("this is mm binArray 3: %d\n",mm.binArray[3]);
    printf("this is mm binArray 4: %d\n",mm.binArray[4]);
    printf("this is mm binArray 5: %d\n",mm.binArray[5]);
    printf("this is mm binArray 6: %d\n",mm.binArray[6]);
    printf("this is mm binArray 7: %d\n",mm.binArray[7]);
    printf("this is mm binArray 8: %d\n",mm.binArray[8]);
    printf("this is mm binArray 9: %d\n",mm.binArray[9]);
    printf("this is mm binArray 10: %d\n",mm.binArray[10]);
    printf("this is mm binArray 11: %d\n",mm.binArray[11]);
    printf("this is mm binArray 12: %d\n",mm.binArray[12]);
    printf("this is mm binArray 13: %d\n",mm.binArray[13]);
    printf("this is mm binArray 14: %d\n",mm.binArray[14]);
    printf("this is mm binArray 15: %d\n",mm.binArray[15]);
    printf("this is mm binArray 16: %d\n",mm.binArray[16]);
    printf("this is mm binArray 17: %d\n",mm.binArray[17]);
    printf("this is mm binArray 18: %d\n",mm.binArray[18]);
    printf("this is mm binArray 19: %d\n",mm.binArray[19]);
    printf("this is mm binArray 20: %d\n",mm.binArray[20]);
    printf("this is mm binArray 21: %d\n",mm.binArray[21]);
    printf("this is mm binArray 22: %d\n",mm.binArray[22]);
    printf("this is mm binArray 23: %d\n",mm.binArray[23]);
    printf("this is mm binArray 24: %d\n",mm.binArray[24]);
    printf("this is mm binArray 25: %d\n",mm.binArray[25]);
    printf("this is mm binArray 26: %d\n",mm.binArray[26]);
    printf("this is mm binArray 27: %d\n",mm.binArray[27]);
    printf("this is mm binArray 28: %d\n",mm.binArray[28]);
    printf("this is mm binArray 29: %d\n",mm.binArray[29]);
    printf("this is mm binArray 30: %d\n",mm.binArray[30]);

   return 0;
}
