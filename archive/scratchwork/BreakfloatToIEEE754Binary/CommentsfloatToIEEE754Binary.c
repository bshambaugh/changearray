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
    printf("t.sign is: %d\n",t.sign[0]);
    printf("t.value is %f\n",t.value);
    bb = truncf(t.value);
    printf("bb is %f\n",bb);
    b = (int)bb;
    printf("the a is %d\n",a);
    printf("the b is %d\n",b);
    p = IntToBin(a,b);
    printf("the p.count is %d\n",p.count);
    printf("the t.value is %f\n",t.value);
    printf("the bb is %f\n",bb);
    printf("the mantissaLength is %d\n",mantissaLength);
    q = FracToBin(t.value,bb,mantissaLength);
    printf("the q.count is %d\n",q.count);
    printf("the a is %d\n",a);
    printf("the p.count is %d\n",p.count);
    pp = IntToBin(a,p.count + 127);
    printf("the pp.count is %d\n",pp.count);
    printf("the exponentLength is %d\n",exponentLength);
    ee = fittobox(pp.binArray,pp.count+1,exponentLength);
    printf("the ee.count is %d\n",ee.count);
    printf("the p.count is %d\n",p.count);
    printf("the q.count is %d\n",q.count);
    gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);
    printf("the gg.count is %d\n",gg.count);
    printf("the leftoffset is %d\n",leftoffset);
    mm = righttruncator(gg.binArray,gg.count,leftoffset);
    printf("the mm.count is %d\n",mm.count);
    printf("the mantissaLength is %d\n",mantissaLength);
    zz = truncator(mm.binArray,mantissaLength);
    printf("the zz.count is %d\n",zz.count);
    printf("the zz.count is %d\n",ee.count);
    printf("the zz.count is %d\n",zz.count);    
    hh = combine(ee.binArray,zz.binArray,ee.count,zz.count);
    printf("the hh.count is %d\n",hh.count);
    printf("the t.value is %f\n",t.value);
    ll = combine(t.sign,hh.binArray,1,hh.count);
    return ll;
}

int main () {
   
   int i;
   Struct yy;

   float inputValue = 263.30;
   int exponentLength = 8;
//  int truncatedValue = 11;
   
   int mantissaLength = 23;
//      int mantissalength = 52;

     yy = floatToIEEE754(inputValue,exponentLength,mantissaLength);

     for (i = 0; i < yy.count; i ++) {
         printf("Array combined int for yy  %d (i) is: %d (yy.binArray[i])\n", i, yy.binArray[i]);
     }

     printf("{");
     for (i = 0; i < yy.count - 1; i ++) {
         printf("%d,",yy.binArray[i]);
     }

     printf("%d",yy.binArray[yy.count-1]);
     printf("};\n");

   return 0;
}
