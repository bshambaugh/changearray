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

int main () {
   
   Struct p,q,pp,gg,mm,zz;
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
    zz = truncator(mm.binArray,mantissaLength);
    printf("here is the zz count: %d\n",zz.count);
    printf("here is the zz binArray 0: %d\n",zz.binArray[0]);
    printf("here is the zz binArray 1: %d\n",zz.binArray[1]);
    printf("here is the zz binArray 2: %d\n",zz.binArray[2]);
    printf("here is the zz binArray 3: %d\n",zz.binArray[3]);
    printf("here is the zz binArray 4: %d\n",zz.binArray[4]);
    printf("here is the zz binArray 5: %d\n",zz.binArray[5]);
    printf("here is the zz binArray 6: %d\n",zz.binArray[6]);
    printf("here is the zz binArray 7: %d\n",zz.binArray[7]);
    printf("here is the zz binArray 8: %d\n",zz.binArray[8]);
    printf("here is the zz binArray 9: %d\n",zz.binArray[9]);
    printf("here is the zz binArray 10: %d\n",zz.binArray[10]);
    printf("here is the zz binArray 11: %d\n",zz.binArray[11]);
    printf("here is the zz binArray 12: %d\n",zz.binArray[12]);
    printf("here is the zz binArray 13: %d\n",zz.binArray[13]);
    printf("here is the zz binArray 14: %d\n",zz.binArray[14]);
    printf("here is the zz binArray 15: %d\n",zz.binArray[15]);
    printf("here is the zz binArray 16: %d\n",zz.binArray[16]);
    printf("here is the zz binArray 17: %d\n",zz.binArray[17]);
    printf("here is the zz binArray 18: %d\n",zz.binArray[18]);
    printf("here is the zz binArray 19: %d\n",zz.binArray[19]);
    printf("here is the zz binArray 20: %d\n",zz.binArray[20]);
    printf("here is the zz binArray 21: %d\n",zz.binArray[21]);
    printf("here is the zz binArray 22: %d\n",zz.binArray[22]);
   return 0;
}
