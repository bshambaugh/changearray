#include "floatToHexArray.h"

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
         t.array[i] = (uint8_t)strtol(result.hexArray[i],NULL,16);
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

