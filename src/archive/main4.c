#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryToHexArray.h"
#include "floatToIEEE754Binary.h"

struct uint832message {
   u_int8_t array[32];
};

typedef struct uint832message HexArrayINT32;

Hexarray floatToHex32(float q)
{
    int i;
    int length = 32;
    Struct32Int p;
    Hexarray resultThree;
    p = floatToIEEE754Int(q);
    int arrayTwo[32];
    for (i=0; i < 32; i++)
    {
        arrayTwo[i] = p.d[i];
    }
    resultThree = BinToHexArray(arrayTwo,length);

    return resultThree;
}

HexArrayINT32 resultToHexArray(Hexarray result) {
   HexArrayINT32 t;
   int i;
   for(i = 0; i < 4; i++)
    {
         t.array[i] = (u_int8_t)strtol(result.hexArray[i],NULL,16);
    }
    for(i = 4; i < 33; i++)
    {
         t.array[i] = 0;
    }
   return t;
}

HexArrayINT32 floatToHexArrayINT32(float a)
{
  Hexarray resultfour;
  HexArrayINT32 p;
  resultfour = floatToHex32(a);
  p = resultToHexArray(resultfour);
  return p;
}

int main() {

	/*
    float m = 129.45; */

    float m = 12989.4658204;
    HexArrayINT32 q;

    q = floatToHexArrayINT32(m);

    printf("The elements from result fivw %x, %x, %x, %x \n",q.array[0],q.array[1],q.array[2],q.array[3]);

    return 0;
}
