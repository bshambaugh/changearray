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

Struct floatToIEEE754(float inputValue, int exponentLength, int mantissaLength) {
    Struct p, q, pp, ee, gg, mm, zz, hh, ll;
    sBit t;
    float bb;
    unsigned int b;
    int a = 2;
    int leftoffset = 1;
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
    ll = combine(t.sign,hh.binArray,1,hh.count);
    return ll;
}

int main () {
   
   int i;
   Struct yy;

   float inputValue = 263.30;
   int exponentLength = 8;
   int mantissaLength = 23;

   yy = floatToIEEE754(inputValue,exponentLength,mantissaLength);

   printf("here is yy count %d\n",yy.count);
   printf("here is yy binArray 0 %d\n",yy.binArray[0]);
   printf("here is yy binArray 1 %d\n",yy.binArray[1]);
   printf("here is yy binArray 2 %d\n",yy.binArray[2]);
   printf("here is yy binArray 3 %d\n",yy.binArray[3]);
   printf("here is yy binArray 4 %d\n",yy.binArray[4]);
   printf("here is yy binArray 5 %d\n",yy.binArray[5]);
   printf("here is yy binArray 6 %d\n",yy.binArray[6]);
   printf("here is yy binArray 7 %d\n",yy.binArray[7]);
   printf("here is yy binArray 8 %d\n",yy.binArray[8]);
   printf("here is yy binArray 9 %d\n",yy.binArray[9]);
   printf("here is yy binArray 10 %d\n",yy.binArray[10]);
   printf("here is yy binArray 11 %d\n",yy.binArray[11]);
   printf("here is yy binArray 12 %d\n",yy.binArray[12]);
   printf("here is yy binArray 13 %d\n",yy.binArray[13]);
   printf("here is yy binArray 14 %d\n",yy.binArray[14]);
   printf("here is yy binArray 15 %d\n",yy.binArray[15]);
   printf("here is yy binArray 16 %d\n",yy.binArray[16]);
   printf("here is yy binArray 17 %d\n",yy.binArray[17]);
   printf("here is yy binArray 18 %d\n",yy.binArray[18]);
   printf("here is yy binArray 19 %d\n",yy.binArray[19]);
   printf("here is yy binArray 20 %d\n",yy.binArray[20]);
   printf("here is yy binArray 21 %d\n",yy.binArray[21]);
   printf("here is yy binArray 22 %d\n",yy.binArray[22]);
   printf("here is yy binArray 23 %d\n",yy.binArray[23]);
   printf("here is yy binArray 24 %d\n",yy.binArray[24]);
   printf("here is yy binArray 25 %d\n",yy.binArray[25]);
   printf("here is yy binArray 26 %d\n",yy.binArray[26]);
   printf("here is yy binArray 27 %d\n",yy.binArray[27]);
   printf("here is yy binArray 28 %d\n",yy.binArray[28]);
   printf("here is yy binArray 29 %d\n",yy.binArray[29]);
   printf("here is yy binArray 30 %d\n",yy.binArray[30]);
   printf("here is yy binArray 31 %d\n",yy.binArray[31]);

   return 0;
}
