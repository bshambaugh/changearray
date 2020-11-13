#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* IntToChar(char str1[]) {
  static char  p;

  if (strcmp(str1,"0000") == 0)  {
      printf("0");
      p = 48;
  } else if (strcmp(str1,"0001") == 0) {
      printf("1");
      p = 49;
  } else if (strcmp(str1,"0010") == 0) {
      printf("2");
      p = 50;
  } else if (strcmp(str1,"0011") == 0) {
     printf("3");
      p = 51;
  } else if (strcmp(str1,"0100") == 0)  {
     printf("4");
     p = 52;
  } else if (strcmp(str1,"0101") == 0) {
     printf("5");
     p = 53;
  } else if (strcmp(str1,"0110") == 0) {
     printf("6");
     p = 54;
  }  else if (strcmp(str1,"0111") == 0) {
     printf("7");
     p = 55;
  } else if (strcmp(str1,"1000") == 0) {
     printf("8");
     p = 56;
  } else if (strcmp(str1,"1001") == 0) {
     printf("9");
     p = 57;
  } else if (strcmp(str1,"1010") == 0) {
     printf("A");
     p = 65;
  } else if (strcmp(str1,"1011") == 0) {
     printf("B");
     p = 66;
  } else if (strcmp(str1,"1100") == 0) {
     printf("C");
     p = 67;
  } else if (strcmp(str1,"1101") == 0) {
     printf("D");
     p = 68;
  } else if (strcmp(str1,"1110") == 0) {
     printf("E");
     p = 69;
  } else if (strcmp(str1,"1111") == 0) {
     printf("F");
     p = 70;
  } else
     printf("Error: enter a 4 bit binary number");
  return p;
}

int main() { 
   char *r;
   r = malloc(1 * sizeof(char));   
   char second[] = "0010";
   *r = IntToChar(second);
   free(r);
   return 0;
}
