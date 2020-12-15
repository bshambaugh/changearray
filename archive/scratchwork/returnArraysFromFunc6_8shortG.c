#include <math.h>
#include <stdio.h>

struct binaryArray {
	int binArray[100];
	int count;
};

struct signBit {
	int sign;
	float value;
};

typedef struct binaryArray Struct;
typedef struct binaryArray Structb;

typedef struct signBit sBit;

sBit getSignBit(float igg) {

    sBit t;
    float r;

    r = fabsf(igg);

    if (r == igg) {
//        printf("The value is positive: sb 0\n");
        t.sign = 0;
    } else {
//        printf("The value is negative: sb 1\n");
        t.sign = 1;
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


Structb FracToBin(float igg, float bb) {
   Structb s;
   float ff,gg;
   unsigned int hh = 0;

//   printf("iThe igg is %f , and bb is %f\n",igg,bb);

   ff = igg - bb;

//   printf("The ff is %f\n",ff);

   gg = 2.0 * ff;

//   printf("The gg is %f\n",gg);

   while(hh<23) {
      if(gg > 1.0) {
//	printf("I have one: 1 with hh %d\n",hh);
        gg = 2.0 * (gg - truncf(gg));
        s.binArray[hh] = 1;
      } else {
//	printf("I have zero: 0 with hh %d\n",hh);
	gg = 2.0 * gg;
	s.binArray[hh] = 0;
      }
      hh += 1;
   }

//   printf("hh is : %d\n",hh);

//   s.binArray[0] = 5;
//   s.count = 1;
   s.count = hh - 1;
   return s;
}

/* main function to call above defined function */
int main () {

   Struct p;
   Structb q;
   Struct pp;
   sBit t;
   int i,j;

   float igg = -263.30;
   float bb;
   unsigned int b;

   int a = 2;

   t = getSignBit(igg);

   bb = truncf(t.value);
   b = bb;
   
   p = IntToBin(a,b);

   q = FracToBin(t.value,bb);

   printf("The sign bit is %d\n",t.sign);

   for (i = 0; i <= p.count; i ++) {
      printf("Array element int %d is: %d\n", i, p.binArray[i]);
   }

   printf("The exponent to be converted to binary is: %d\n", p.count);

   pp = IntToBin(a,p.count + 127);

   for (i = 0; i <= pp.count; i ++) {
      printf("Array element exp int %d is: %d\n", i, pp.binArray[i]);
   }


//   printf("The first array element in the 2nd structrue is %d , with count %d\n",q.binArray[0],q.count);

   for (i = 0; i <= q.count; i ++) {
      printf("Array element frac %d is: %d\n", i, q.binArray[i]);
   }

//    printf("the absolue value of -23.1 is: %f\n",fabsf(-23.1));

//    printf("the sign and value of t is : %d , %f\n",t.sign,t.value);

   return 0;
}
