#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "floatToHexArray.h"
#include "binaryToHexArray.h"
#include "floatToIEEE754Binary.h"

int main() {

    float m = 12989.4658204;
    HexArrayINT32 q;

    q = floatToHexArrayINT32(m);

    printf("The elements from result fivw %x, %x, %x, %x \n",q.array[0],q.array[1],q.array[2],q.array[3]);

    return 0;
}
