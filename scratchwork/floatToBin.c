#include <math.h>
#include <stdio.h>

struct binaryArray {
        int binArray[100];
        int count;
};

typedef struct binaryArray Struct;


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

int main() {
int a, b, i;
a = 2;
b = 145;
Struct p;
p = IntToBin(a,b);
 for(i = 0; i <= p.count; i++) {
     printf("For %d s.count is %d\n",i,p.binArray[i]);
 }
}
