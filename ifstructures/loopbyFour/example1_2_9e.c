#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char IntToChar(char str1[]) {
  char  *p;
  p = malloc(1 * sizeof(char));

  if (strcmp(str1,"0000") == 0)  {
      printf("0");
      *p = 48;
  } else if (strcmp(str1,"0001") == 0) {
      printf("1");
      *p = 49;
  } else if (strcmp(str1,"0010") == 0) {
      printf("2");
      *p = 50;
  } else if (strcmp(str1,"0011") == 0) {
     printf("3");
     *p = 51;
  } else if (strcmp(str1,"0100") == 0)  {
     printf("4");
     *p = 52;
  } else if (strcmp(str1,"0101") == 0) {
     printf("5");
     *p = 53;
  } else if (strcmp(str1,"0110") == 0) {
     printf("6");
     *p = 54;
  }  else if (strcmp(str1,"0111") == 0) {
     printf("7");
     *p = 55;
  } else if (strcmp(str1,"1000") == 0) {
     printf("8");
     *p = 56;
  } else if (strcmp(str1,"1001") == 0) {
     printf("9");
     *p = 57;
  } else if (strcmp(str1,"1010") == 0) {
     printf("A");
     *p = 65;
  } else if (strcmp(str1,"1011") == 0) {
     printf("B");
     *p = 66;
  } else if (strcmp(str1,"1100") == 0) {
     printf("C");
     *p = 67;
  } else if (strcmp(str1,"1101") == 0) {
     printf("D");
     *p = 68;
  } else if (strcmp(str1,"1110") == 0) {
     printf("E");
     *p = 69;
  } else if (strcmp(str1,"1111") == 0) {
     printf("F");
     *p = 70;
  } else
     printf("Error: enter a 4 bit binary number");

  return *p;
}

char IntToString(int a) {
  char  *p;
  p = malloc(1 * sizeof(char));

  if (a == 0)  {
      *p = 48;
  } else if (a == 1) {
      *p = 49;
  } else if (a == 2) {
      *p = 50;
  } else if (a == 3) {
     *p = 51;
  } else if (a == 4)  {
     *p = 52;
  } else if (a == 5) {
     *p = 53;
  } else if (a == 6) {
     *p = 54;
  }  else if (a == 7) {
     *p = 55;
  } else if (a == 8) {
     *p = 56;
  } else if (a == 9) {
     *p = 57;
  } else
     *p = 48;
  return *p;
}

char fourBitToHex(int array[], int count) {
   // grab 4 bits:
   int i,j;
   char *k;
   int windowSize = 4;
   int arrayInt[4];
   char arrayString[4];
   k = malloc(1 * sizeof(char));

   // convert the array to a string
   char arraythree[4][4];
   char second [10];

   // convert the string to a Hex Character
   char *r;
   r = malloc(1 * sizeof(char));

   for(i=0; i < count; i++) {
       j = i % windowSize;
       arrayInt[j] = array[i];
       *k = IntToString(array[i]);
       arrayString[j] = *k;
       printf("I called the returnArrayString\n");
       printf("j at this pount is %d\n",j);
       printf("array string at this point is %d\n",arrayString[j]);
   }
   free(k);
   printf("The array String in the function is %s\n",arrayString);

   // create the binary string...

     arraythree[0][0] = arrayString[0];
     arraythree[0][1] = 0;
     arraythree[1][0] = arrayString[1];
     arraythree[1][1] = 0;
     arraythree[2][0] = arrayString[2];
     arraythree[2][1] = 0;
     arraythree[3][0] = arrayString[3];
     arraythree[3][1] = 0;

     for(i=0; i<windowSize; i++) {
        printf("Element of arraythree %s\n",arraythree[i]);
        strcat(second,arraythree[i]);
     }

     printf("second in retrAnArrayString is: %s\n",second);

     // convert the string to a hex value
     *r = IntToChar(second);
 //     char hexString = *r;

     // I need to figure out how to print the character equivalent... not just the int...
   //  printf("the hexstring for second in returnAnArrayString is ... %d\n",hexString);
     printf("the hexstring for second in returnArrayString is ... %c\n",*r);
   //  printf("the hexstring for second in returnArrayString is ... %c\n",hexString);

   //  free(r);
 //  return hexString;
     return *r;
  // return 0;
}

int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
char  *p;
char words[1][2];
char third[50];

int main() {
   
   printf("Here is: {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1} \n");
     
   p = malloc(1 * sizeof(char));
   *p = fourBitToHex(array,4);
   printf("here is the first p ::::::::: %s\n",p);
   words[0][0] = *p;
   words[0][1] = 0;
   strcat(third,words[0]);
   free(p);

   p = malloc(1 * sizeof(char));
   *p = fourBitToHex(array,8);
   printf("here is the second p :::::::::::: %s\n",p);
   words[1][0] = *p;
   words[1][1] = 0;
   strcat(third,words[1]);
   free(p);

   printf("here is the first and the second ............................ %s\n",third);

   p = malloc(1 * sizeof(char));
   *p = fourBitToHex(array,12);
   printf("here is the p %s\n",p);
   free(p);

   printf("the words 0 %s\n",words[0]);
   printf("the words 0 %s\n",words[1]);

   printf("the words 0 %s\n",third);

   int numZero = (int)strtol(third,NULL,16);
   printf("A a decimal: %d\n",numZero);

   return 0;
}
