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
  // offset by 0 by 1
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
 //  s.binArray[i] = arrayOne[i..count] + arrayTwo[i..count];
}
// I need to correct this for the edge case where
Structc padder(int array[],int truncatedValue,int exponent) {
 int i;
 int offset;
 Structc s;
 offset = truncatedValue - exponent;
 for (i = 0; i < truncatedValue; i ++) {
    if(i < (truncatedValue - exponent)) {
     s.binArray[i] = 0;
    } else {
     s.binArray[i] = array[i-offset];
    }
 }
 return s;
}

Structd truncator(int array[],int truncatedValue) {
  int i;
  Structd s;
  for(i = 0; i < truncatedValue; i++) {
      s.binArray[i] = array[i];
      printf("truncated Value is %d , index i is %d\n",truncatedValue,i);
  }

  s.count = truncatedValue;

 return s;
}

sBit getSignBit(float igg) {

    sBit t;
    float r;

    r = fabsf(igg);

    if (r == igg) {
//        printf("The value is positive: sb 0\n");
        t.sign[0] = 0;
    } else {
//        printf("The value is negative: sb 1\n");
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
   Structc rr;
   Structd cc;
   Structf gg;
   Structf hh;
   Structf ll;
   Structg mm;

   Structd zz;

   sBit t;
   int i,j;

   float igg = 263.30;
   float bb;
   unsigned int b;

   int a = 2;

   int truncatedValue = 8;

   int leftoffset = 1;

   t = getSignBit(igg);

   bb = truncf(t.value);
   b = bb;
   
   p = IntToBin(a,b);

   q = FracToBin(t.value,bb);

   // this is the exponent
   printf("The sign bit is %d\n",t.sign[0]);

   // this is the first part of the mantissa
   for (i = 0; i <= p.count; i ++) {
      printf("Array element int %d is: %d\n", i, p.binArray[i]);
   }

   printf("The exponent to be converted to binary is: %d\n", p.count);

   printf("The first part of the mantissa is: %d\n", p.count);

   pp = IntToBin(a,p.count + 127);

   // this is the exponent
   for (i = 0; i <= pp.count; i ++) {
      printf("Array element exp int %d is: %d\n", i, pp.binArray[i]);
   }

   printf("The length of the exponent array is %d\n",pp.count + 1);

   if(truncatedValue > pp.count + 1) {
      printf("I need to pad %d is greater than %d\n",truncatedValue,pp.count + 1);
   } else {
      printf("I need to truncate. %d is less than %d\n",truncatedValue,pp.count + 1);
   }

// this truncates and pads the exponent array
    if(truncatedValue > pp.count + 1) {
      printf("I need to pad %d is greater than %d\n",truncatedValue,pp.count + 1);
       rr = padder(pp.binArray,truncatedValue,pp.count+1);
         for (i = 0; i < truncatedValue; i ++) {
             printf("Array element frac padded %d is: %d\n", i, rr.binArray[i]);
         }

    } else {
      printf("I need to truncate. %d is less than %d\n",truncatedValue,pp.count + 1);
       cc = truncator(pp.binArray,pp.count+1);
       for (i = 0; i < truncatedValue; i ++) {
             printf("Array element frac truncated %d is: %d\n", i, cc.binArray[i]);
       }
   }

   // put the exponent array in an 8 or 11 box
//   printf("The first array element in the 2nd structrue is %d , with count %d\n",q.binArray[0],q.count);

   // this is the second part of the mantissa
   for (i = 0; i <= q.count; i ++) {
      printf("Array element frac %d is: %d\n", i, q.binArray[i]);
   }

      printf("The second part of the mantissa is: %d\n",q.count);

//    printf("the absolue value of -23.1 is: %f\n",fabsf(-23.1));

//    printf("the sign and value of t is : %d , %f\n",t.sign,t.value);

      // I addition to making sure that I have the right lengths of arrays, I need to truncate this array so it is the desired length
//      gg = combine(p.binArray,q.binArray,p.count,q.count);
       gg = combine(p.binArray,q.binArray,p.count+1,q.count+1);

       //printf("The gg array\n");
       // The gg array is:
       
       for (i = 0; i < gg.count; i ++) {
         printf("Array combinedi for gg  int %d is: %d\n", i, gg.binArray[i]);
        }
      // apply the offset to gg ... before feeding it to zz...
      mm = righttruncator(gg.binArray,gg.count,leftoffset);

       for (i = 0; i < mm.count; i ++) {
         printf("Array combinedi for mm  int %d is: %d\n", i, mm.binArray[i]);
       }


      // let's try truncating here...  23 or 52
      // so I really need an if/else block (like // this truncates and pads the exponent array)
   //   zz = truncator(gg.binArray,23);
      zz = truncator(mm.binArray,23);  

      printf("zz.count is %d\n",zz.count);

      for (i = 0; i < zz.count; i ++) {
         printf("Array combinedi for zz  int %d is: %d\n", i, zz.binArray[i]);
      }

//      printf("gg.binArray length is %d , and truncated length is %d\n",gg.count,23);

        printf("gg.binArray length is %d , and truncated length is %d\n",gg.count,zz.count);
//      printf("%d + %d = %d\n",p.count+1,q.count+1,gg.count+1+1);

      printf("%d + %d = %d . truncated = %d\n",p.count+1,q.count+1,gg.count,zz.count);

//      hh = combine(pp.binArray,zz.binArray,pp.count,zz.count);
      printf("pp.count + 1 = %d , zz.count+1 = %d\n", pp.count+1, zz.count);
      hh = combine(pp.binArray,zz.binArray,pp.count+1,zz.count);

//      printf("%d + %d = %d\n",pp.count+1,gg.count+1+1,hh.count+1+1+1);

      // 8 + 32 = 40
      printf("pp.count+1 + zz.count = hh.count = %d + %d = %d\n",pp.count+1,zz.count,hh.count);

      for (i = 0; i < hh.count; i ++) {
         printf("Array combinedi for hh  int %d is: %d\n", i, hh.binArray[i]);
      }
     
//     printf("%d + %d = %d\n",pp.count+1,gg.count,hh.count);

//      ll = combine(hh.binArray,t.sign,hh.count,1);
      // I want to print the array with 1 from t that am adding to hh to get ll
      //
    //  t.sign[] , t.value
      printf("t.sign is %d and t.value is %f\n",t.sign[0],t.value);

      for (i = 0; i < 1; i ++) {
         printf("Array element sign stored in int %d is: %d\n", i, t.sign[i]);
      }

      printf("hh.count is %d\n",hh.count);

 //     ll = combine(hh.binArray,t.sign,hh.count,1);

      ll = combine(t.sign,hh.binArray,1,hh.count);

//      printf("%d + %d = %d\n",hh.count+1+1+1,1,ll.count+1+1+1);
      printf("%d + %d = %d\n",hh.count,1,ll.count);

     for (i = 0; i < ll.count; i ++) {
         printf("Array combined int for ll  %d is: %d\n", i, ll.binArray[i]);
      }

   return 0;
}
