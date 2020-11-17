#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

   // 0 => 48
   // 1 => 49
   // 2 => 50
   // 3 => 51
   // 4 => 52
   // 5 => 53
   // 6 => 54
   // 7 => 55
   // 8 => 56
   // 9 => 57
   // A => 65
   // B => 66
   // C => 67
   // D => 68
   // E => 69
   // F => 70

*/

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
     printf("You did not enter a single valued integer");
  return *p;
}

int main()
{
  int length = 4;
  int i;
  int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
  char str1[] = "1010";
  char *q;
  char *r;
  char *t;
  char arrayString[4];
  int z = 1;
  q = malloc(1 * sizeof(char));
  *q = IntToChar(str1);

  t = malloc(1 * sizeof(char));
  *t = IntToString(8);

  for(i = 0; i < length; i++) {
      printf("The array element is %d\n",array[i]);
      *t = IntToString(array[i]);
      printf("The present string value is: %s\n",t);
      strcat(arrayString,t);
  }

  puts(arrayString);
  printf("The string is: %s\n",arrayString);

  printf("The string is %d\n",IntToChar(arrayString));

  *q = IntToChar("1000");
  printf("The string is %s\n",q);

//  printf("The result of passing str1 is: %s\n",q);
//  printf("The result of passing str1 is: %s\n",r);
  return 0;
}

