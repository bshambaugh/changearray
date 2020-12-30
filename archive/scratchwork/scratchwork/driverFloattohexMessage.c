#include "driverFloattohexMessage.h"

typedef union { 
  
    float f; 
    struct
    { 
        unsigned char a[4]; 
    } raw; 
} myfloat; 


void floatToByte(float number, uint8_t message[]) {
   myfloat var;
   int i,j;
   var.f = number;

    for(i = 3; i >= 0; i--)
    {
         j = abs(i - 3);
         message[j] = (uint8_t)var.raw.a[i];
    }
    for(i = 4; i < 32; i++)
    {
         message[i] = 0;
    }
}
