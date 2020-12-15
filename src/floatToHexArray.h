#include "binaryToHexArray.h"
#include "floatToIEEE754Binary.h"
#include <stdlib.h>

struct uint832message {
   u_int8_t array[32];
};

typedef struct uint832message HexArrayINT32;

Hexarray floatToHex32(float q);
HexArrayINT32 resultToHexArray(Hexarray result);
HexArrayINT32 floatToHexArrayINT32(float a);
