#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  int length = 8;
  int i;
//  int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
  char str1[] = "1010";
  int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
  char *t;
  char arrayString[8];

  int offset = 0;

  t = malloc(1 * sizeof(char));
//  *t = IntToString(8);

  for(i = offset; i < length+offset; i++) {
  //   printf("The array element is %d\n",array[i]);
      *t = IntToString(array[i]);
//      printf("The present string value is: %s\n",t);
      strcat(arrayString,t);
  }

  printf("The string is: %s\n",arrayString);

  return 0;
}

