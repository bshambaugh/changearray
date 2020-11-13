#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* IntToChar(char str1[]) {
  char *p = malloc(sizeof *p);

  if (strcmp(str1,"0000") == 0)  {
      *p = 48;
  } else if (strcmp(str1,"0001") == 0) {
      *p = 49;
  } else if (strcmp(str1,"0010") == 0) {
      *p = 50;
  } else if (strcmp(str1,"0011") == 0) {
      *p = 51;
  } else if (strcmp(str1,"0100") == 0)  {
     *p = 52;
  } else if (strcmp(str1,"0101") == 0) {
     *p = 53;
  } else if (strcmp(str1,"0110") == 0) {
     *p = 54;
  }  else if (strcmp(str1,"0111") == 0) {
     *p = 55;
  } else if (strcmp(str1,"1000") == 0) {
     *p = 56;
  } else if (strcmp(str1,"1001") == 0) {
     *p = 57;
  } else if (strcmp(str1,"1010") == 0) {
     *p = 65;
  } else if (strcmp(str1,"1011") == 0) {
     *p = 66;
  } else if (strcmp(str1,"1100") == 0) {
     *p = 67;
  } else if (strcmp(str1,"1101") == 0) {
     *p = 68;
  } else if (strcmp(str1,"1110") == 0) {
     *p = 69;
  } else if (strcmp(str1,"1111") == 0) {
     *p = 70;
  } else
     *p = 48; // return 0 if incorrect input
  return p;
}

char* IntToString(int a) {
  char  *p = malloc(sizeof *p);

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
  return p;
}

void fourBitToHex(int array[], int count) {
   // grab 4 bits:
   int i,j;
   int windowSize = 4;
   int arrayInt[4];
   char arrayString[4];
   char *k;
   char *r;

   // convert the array to a string
   char arraythree[4][4];
   char second [10] = "\0";

   printf("The count is: %d\n",count);
   printf("+++++++++++++++++++++++++++++++++++++++++\n");

//   k = IntToString(0);

   for(i = 0; i < count; i++) {
      j = i % windowSize;
 //     printf("The j is presently %d\n",j); 
 //     printf("The array[i] is: %d\n",array[i]);
      k = IntToString(array[i]);
//      printf("the string from array[i] is: %c\n",*k);
      arrayString[j] = *k;
      free(k);
 //      printf("===========================\n");
   }
  
//    printf("The array String in the function is %s\n",arrayString);
      printf("The array String (element 0) in the function is %c\n",arrayString[0]);
      printf("The array String (element 1) in the function is %c\n",arrayString[1]);
      printf("The array String (element 2) in the function is %c\n",arrayString[2]);
      printf("The array String (element 3) in the function is %c\n",arrayString[3]);

      arraythree[0][0] = arrayString[0];
      arraythree[0][1] = '\0';
      arraythree[1][0] = arrayString[1];
      arraythree[1][1] = '\0';
      arraythree[2][0] = arrayString[2];
      arraythree[2][1] = '\0';
      arraythree[3][0] = arrayString[3];
      arraythree[3][1] = '\0';

      for(i = 0; i < windowSize; i++) {
          printf("Element in returnArrayString is: %s\n",arraythree[i]);
          strcat(second,arraythree[i]);
      }

      printf("second in the arraystring: %s\n",second);

      // I really need to return r
      r = IntToChar(second);
      printf("the hexString for second is: %c\n",*r);
 
      free(r);
}

int main() { 
   int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
   fourBitToHex(array,4);
   return 0;
}
