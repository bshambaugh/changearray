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
typedef struct binaryArray Structb;
typedef struct binaryArray Structc;
typedef struct binaryArray Structd;
typedef struct binaryArray Structe;
typedef struct binaryArray Structf;

typedef struct signBit sBit;

typedef struct binaryArray Structg;

Structg righttruncator(int array[],int truncateValue, int leftoffset) {
  int i;
  Structg s;
  for(i = 0; i < truncateValue+leftoffset; i++) {
      s.binArray[i] = array[i+leftoffset];
  }
  s.count = truncateValue-1;
 return s;
}

Structf combine(int arrayOne[],int arrayTwo[],int lengthOne, int lengthTwo) {
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

Structe arrayConcatenate(int arrayOne[], int arrayTwo[]) 
{  
   Structe s;
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


Structb FracToBin(float igg, float bb,int mantissalength) {
   Structb s;
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

   Struct p;
   Structb q;
   Struct pp;
   Struct rr;
   Struct cc;
   Structf gg;
   Structf hh;
   Structf ll;
   Structg mm;

   Structd zz;

   Struct ee;
   
   sBit t;
   int i,j;

   float igg = 263.30;
   float bb;
   unsigned int b;

   int a = 2;

    int truncatedValue = 8;
//  int truncatedValue = 11;
   
   int leftoffset = 1;
   int mantissalength = 23;
//      int mantissalength = 52;

   t = getSignBit(igg);

   bb = truncf(t.value);
   b = bb;
   
   p = IntToBin(a,b);

   q = FracToBin(t.value,bb,mantissalength);

   pp = IntToBin(a,p.count + 127);

       ee = fittobox(pp.binArray,pp.count+1,truncatedValue);

       gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);

      mm = righttruncator(gg.binArray,gg.count,leftoffset);

      zz = truncator(mm.binArray,mantissalength);  

      hh = combine(ee.binArray,zz.binArray,ee.count,zz.count);

      ll = combine(t.sign,hh.binArray,1,hh.count);

     for (i = 0; i < ll.count; i ++) {
         printf("Array combined int for ll  %d (i) is: %d (ll.binArray[i])\n", i, ll.binArray[i]);
      }

   return 0;
}
