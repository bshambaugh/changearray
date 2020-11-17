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

int main() { 
   char *r;  
   int a = 5;
   r = IntToString(a);
   printf("The value of *r is %c\n",*r);
   free(r);
   return 0;
}
