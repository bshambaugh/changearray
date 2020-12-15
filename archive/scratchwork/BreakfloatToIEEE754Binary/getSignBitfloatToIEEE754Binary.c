#include <math.h>
#include <stdio.h>

struct signBit {
	int sign[1];
	float value;
};

typedef struct signBit sBit;

/* getSignBit take a float number and splits it into two parts: the sign of the number and the absolute value of the number */
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

int main() {
	
   sBit t;
   float inputValue = -263.30;
   t = getSignBit(inputValue);
   printf("this is the sign t of inputValue %d\n",t.sign[0]);
   printf("this is the sign t of inputValue %f\n",t.value);
   printf("this is the sign t of inputValue %f\n",inputValue);
   return 0;
}
