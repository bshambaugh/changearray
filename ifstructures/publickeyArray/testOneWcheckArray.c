#include <stdio.h>
#include <string.h>

__uint8_t publicKey[64] = {
0xF9, 0xC3, 0x6F, 0x89, 0x64, 0x62, 0x33, 0x78, 0xBD, 0xC0, 0x68, 0xD4, 0xBC, 0xE0, 0x7E, 0xD1,
0x7C, 0x8F, 0xA4, 0x86, 0xF9, 0xAC, 0x0C, 0x26, 0x13, 0xCA, 0x3C, 0x8C, 0x30, 0x6D, 0x7B, 0xB6,
0x1C, 0xD3, 0x67, 0x17, 0xB8, 0xAC, 0x5E, 0x4F, 0xEA, 0x8A, 0xD2, 0x3D, 0xC8, 0xD0, 0x78, 0x3C,
0x23, 0x18, 0xEE, 0x4A, 0xD7, 0xA8, 0x0D, 0xB6, 0xE0, 0x02, 0x6A, 0xD0, 0xB0, 0x72, 0xA2, 0x4F
};

__uint8_t stringTwo[3];

char words[1][3];

char second[50];

int i;

// function stringToHex
int main() 
{

   // this assignment is where example1_2_9.c ends
   words[0][0] = 50;
   words[0][1] = 70;
   words[0][2] = 0;

   words[1][0] = 49;
   words[1][1] = 70;
   words[1][2] = 0;

   // perhaps words is the thing that I need to feed in..  words is the thtin from example1_2_9.c
   printf("The 1st element is %d\n",words[0][0]);
   printf("The 2nd element is %d\n",words[0][1]);
   printf("The 3rd element is %d\n",words[0][2]);
 
   printf("this is a test %s\n",words[0]);
   strcat(second,words[0]);
   strcat(second,words[1]);

   for (i = 0; i < 3; i++) {
    //    printf("this is %s\n",words[i]);
  /*     strcat(second,words[0][i]); */
   }

  int numZero = (int)strtol(second, NULL, 16);

 printf("As a char: %c\n", numZero);                        // print it as a char
 printf("As a decimal: %d\n", numZero);                        // print it as decimal
 printf("As a hex: 0x%02X\n", numZero);                        // print it back as hex
 // format hex string.... %0.2X

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

 stringTwo[0] = numZero;
 stringTwo[1] = num;
 stringTwo[2] = numTwo;

 printf("stringTwo element 0 is: %X\n",stringTwo[0]);
 printf("stringTwo element 0 is: %d\n",stringTwo[0]);

 printf("stringTwo element 1 is: %X\n",stringTwo[1]);
 printf("stringTwo element 1 is: %d\n",stringTwo[1]);

 printf("stringTwo element 2 is: %X\n",stringTwo[2]);
 printf("stringTwo element 2 is: %d\n",stringTwo[2]);

}

/*
#include <stdio.h>

char words[1][3];

int main( void )
{
   words[0][0] = 30;
   words[0][1] = 70;
   words[0][2] = 0;

   printf("The 1st element is %d\n",**words);
   printf("The 1st element is %d\n",words[0][0]);
   printf("The 2nd element is %d\n",words[0][1]);
   printf("The 3rd element is %d\n",words[0][2]);



   return 0;

}
*/
