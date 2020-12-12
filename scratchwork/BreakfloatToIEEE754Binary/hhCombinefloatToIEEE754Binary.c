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

    Struct p, q, pp, ee, gg, mm, zz, hh;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
    int leftoffset = 1;

   float inputValue = 263.30;
   int exponentLength = 8;
   int mantissaLength = 23;

    t = getSignBit(inputValue);
    bb = truncf(t.value);
    b = bb;
    p = IntToBin(a,b);
    q = FracToBin(t.value,bb,mantissaLength);
    pp = IntToBin(a,p.count + 127);
    ee = fittobox(pp.binArray,pp.count+1,exponentLength);
    gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);
    mm = righttruncator(gg.binArray,gg.count,leftoffset);
    zz = truncator(mm.binArray,mantissaLength);
    hh = combine(ee.binArray,zz.binArray,ee.count,zz.count);
    printf("the count of hh is %d\n",hh.count);
    printf("the binArray of hh 0 is %d\n",hh.binArray[0]);
    printf("the binArray of hh 1 is %d\n",hh.binArray[1]);
    printf("the binArray of hh 2 is %d\n",hh.binArray[2]);
    printf("the binArray of hh 3 is %d\n",hh.binArray[3]);
    printf("the binArray of hh 4 is %d\n",hh.binArray[4]);
    printf("the binArray of hh 5 is %d\n",hh.binArray[5]);
    printf("the binArray of hh 6 is %d\n",hh.binArray[6]);
    printf("the binArray of hh 7 is %d\n",hh.binArray[7]);
    printf("the binArray of hh 8 is %d\n",hh.binArray[8]);
    printf("the binArray of hh 9 is %d\n",hh.binArray[9]);
    printf("the binArray of hh 10 is %d\n",hh.binArray[10]);
    printf("the binArray of hh 11 is %d\n",hh.binArray[11]);
    printf("the binArray of hh 12 is %d\n",hh.binArray[12]);
    printf("the binArray of hh 13 is %d\n",hh.binArray[13]);
    printf("the binArray of hh 14 is %d\n",hh.binArray[14]);
    printf("the binArray of hh 15 is %d\n",hh.binArray[15]);
    printf("the binArray of hh 16 is %d\n",hh.binArray[16]);
    printf("the binArray of hh 17 is %d\n",hh.binArray[17]);
    printf("the binArray of hh 18 is %d\n",hh.binArray[18]);
    printf("the binArray of hh 19 is %d\n",hh.binArray[19]);
    printf("the binArray of hh 20 is %d\n",hh.binArray[20]);
    printf("the binArray of hh 21 is %d\n",hh.binArray[21]);
    printf("the binArray of hh 22 is %d\n",hh.binArray[22]);
    printf("the binArray of hh 23 is %d\n",hh.binArray[23]);
    printf("the binArray of hh 24 is %d\n",hh.binArray[24]);
    printf("the binArray of hh 25 is %d\n",hh.binArray[25]);
    printf("the binArray of hh 26 is %d\n",hh.binArray[26]);
    printf("the binArray of hh 27 is %d\n",hh.binArray[27]);
    printf("the binArray of hh 28 is %d\n",hh.binArray[28]);
    printf("the binArray of hh 29 is %d\n",hh.binArray[29]);
    printf("the binArray of hh 30 is %d\n",hh.binArray[30]);

   return 0;
}
