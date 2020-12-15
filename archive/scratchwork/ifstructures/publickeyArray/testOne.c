#include <stdio.h>

__uint8_t publicKey[64] = {
0xF9, 0xC3, 0x6F, 0x89, 0x64, 0x62, 0x33, 0x78, 0xBD, 0xC0, 0x68, 0xD4, 0xBC, 0xE0, 0x7E, 0xD1,
0x7C, 0x8F, 0xA4, 0x86, 0xF9, 0xAC, 0x0C, 0x26, 0x13, 0xCA, 0x3C, 0x8C, 0x30, 0x6D, 0x7B, 0xB6,
0x1C, 0xD3, 0x67, 0x17, 0xB8, 0xAC, 0x5E, 0x4F, 0xEA, 0x8A, 0xD2, 0x3D, 0xC8, 0xD0, 0x78, 0x3C,
0x23, 0x18, 0xEE, 0x4A, 0xD7, 0xA8, 0x0D, 0xB6, 0xE0, 0x02, 0x6A, 0xD0, 0xB0, 0x72, 0xA2, 0x4F
};

__uint8_t stringTwo[2];

// function stringToHex
int main() 
{
  printf("The 2nd elenment in the publicKey is %d\n",publicKey[1]);
  printf("The 2nd elenment in the publicKey is %x\n",publicKey[1]);
 char hex[] = "6A";                          // here is the hex string
 int num = (int)strtol(hex, NULL, 16);       // number base 16
 printf("%c\n", num);                        // print it as a char
 printf("%d\n", num);                        // print it as decimal
 printf("%X\n", num);                        // print it back as hex

 char hexTwo[] = "E0";                          // here is the hex string
 int numTwo = (int)strtol(hexTwo, NULL, 16);       // number base 16
 printf("%c\n", numTwo);                        // print it as a char
 printf("%d\n", numTwo);                        // print it as decimal
 printf("%X\n", numTwo);                        // print it back as hex

 stringTwo[0] = num;
 stringTwo[1] = numTwo;

 printf("stringTwo element 0 is: %X",stringTwo[0]);
 printf("stringTwo element 0 is: %d",stringTwo[0]);
}
