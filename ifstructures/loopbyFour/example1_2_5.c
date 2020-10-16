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

int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
// int array[9] = {0,1,2,3,4,5,6,7,8};
char *t;
char *r;
char arrayString[4];
int arrayInt[4];
//int count = 32;
int count = 6;
int beakBeat = 4;
int i = 0;
int j;
int k = 1;

int main() {

    r = malloc(1 * sizeof(char));
    t = malloc(1 * sizeof(char));
 
     for(i=0; i < count; i++) {
	  j = i % beakBeat;
          printf("j is currently %d : i is currently %d : array[i] is %d\n",j,i,array[i]);
          arrayInt[j] = array[i]; 
         *t = IntToString(array[i]);
         printf("The value of t is %s\n",t);
	 arrayString[j] = *t;

	 // I need to concatenate the entire string
/*	 if(j == 3) {
            printf("The j value is currently %d\n",j);
	    // feed string to compare
	    *r = IntToChar(arrayString);
	    printf("The value of r is %s\n",r);
         } */
     }
     
     printf("The array String is %s\n",arrayString);

     return 0;
}
