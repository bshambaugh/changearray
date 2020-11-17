#include <stdio.h>

/*
0 => 0000
1 => 0001
2 => 0010
3 => 0011
4 => 0100
5 => 0101
6 => 0110
7 => 0111
8 => 1000
9 => 1001
A => 1010
B => 1011
C => 1100
D => 1101
E => 1110
F => 1111

*/

int main()
{
  char str1[] = "0000";
  
  if (strcmp(str1,"0000") == 0)  { 
      printf("0");
  } else if (strcmp(str1,"0001") == 0) {
      printf("1");
  } else if (strcmp(str1,"0010") == 0) {
      printf("2");
  } else if (strcmp(str1,"0011") == 0) { 
     printf("3");
  } else if (strcmp(str1,"0100") == 0)  {
     printf("4");
  } else if (strcmp(str1,"0101") == 0) {
     printf("5");
  } else if (strcmp(str1,"0110") == 0) {
     printf("6");
  }  else if (strcmp(str1,"0111") == 0) {
     printf("7");
  } else if (strcmp(str1,"1000") == 0) {
     printf("8");
  } else if (strcmp(str1,"1001") == 0) {
     printf("9");
  } else if (strcmp(str1,"1010") == 0) {
     printf("A");
  } else if (strcmp(str1,"1011") == 0) {
     printf("B");
  } else if (strcmp(str1,"1100") == 0) {
     printf("C");
  } else if (strcmp(str1,"1101") == 0) {
     printf("D");
  } else if (strcmp(str1,"1110") == 0) {
     printf("E");
  } else if (strcmp(str1,"1111") == 0) {
     printf("F");
  } else   
     printf("Error: enter a 4 bit binary number");

   return 0;
}

