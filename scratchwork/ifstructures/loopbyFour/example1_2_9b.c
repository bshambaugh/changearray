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
int count = 4;
int beakBeat = 4;
int i = 0;
int j;
int k = 1;

// array to hold characters for concatenation...

char arraythree[4][4];

int main() {

    printf("{0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};\n");

    r = malloc(1 * sizeof(char));
    t = malloc(1 * sizeof(char));

   // print the first 4 elements 
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

     count = 8;

     // print the second 4 elements
     for(i=0; i < count; i++) {
         j = i % beakBeat;
	 arrayInt[j] = array[i];
         *t = IntToString(array[i]);
	 arrayString[j] = *t;
     }

     printf("The array String is %s\n",arrayString);

     count = 12;

          // print the second 4 elements
     for(i=0; i < count; i++) {
         j = i % beakBeat;
         arrayInt[j] = array[i];
         *t = IntToString(array[i]);
         arrayString[j] = *t;
     }

     printf("The array String is %s\n",arrayString);

     count = 16;

     for(i=0; i < count; i++) {
         j = i % beakBeat;
         arrayInt[j] = array[i];
         *t = IntToString(array[i]);
         arrayString[j] = *t;
     }

     printf("The array String is %s\n",arrayString);

     count = 20;

     for(i=0; i < count; i++) {
         j = i % beakBeat;
         arrayInt[j] = array[i];
         *t = IntToString(array[i]);
         arrayString[j] = *t;
     }

     printf("The array String is %s\n",arrayString);

     // what if count is greater than the length of the array???   i think that it is 32 or something, .... did I store the length with a struct....is there a C library function that I can use instead???

     // move these lower...
     // free(r);
     // free(t);

     printf("The array String after repeating the pointer is %s\n",arrayString);

     printf("Print the 1st element of the array string... %d\n",arrayString[0]);

     printf("Print the 2nd element of the array string... %d\n",arrayString[1]);

     arraythree[0][0] = arrayString[0];
     arraythree[0][1] = 0;
     arraythree[1][0] = arrayString[1];
     arraythree[1][1] = 0;
     arraythree[2][0] = arrayString[2];
     arraythree[2][1] = 0;
     arraythree[3][0] = arrayString[3];
     arraythree[3][1] = 0;

     // define a tempory variable
     char second[100];

     for(i=0; i<4; i++) {
	printf("%s\n",arraythree[i]);
	strcat(second,arraythree[i]);
     }

     printf("second is %s\n",second);

     // replace this code with intToChar ...
     //
     if (strcmp(second,"1010") == 0) {
	 printf("true\n");
	 // call inttoChar...(have a wrapper that writes this to an array twice ...)
     }

     *r = IntToChar(second);
     char hexString = *r;

     // I need to figure out how to print the character equivalent... not just the int... 
     printf("the hexstring for second is ... %d\n",hexString);
     printf("the hexstring for second is ... %c\n",*r);
     printf("the hexstring for second is ... %c\n",hexString);

     free(r);
     free(t);
     // okay...so I have the first one into hex, now I need to get a second...then bind them into a __uint8_t datatype...
     /// cool...so the array elements are characters...
     // note the array string is a moving window...need to break up into an array of 4 bit chunks...
     // merge arrayString int a string (concatenateChar$ ./stringsTwo)
     // runn IntToChar to get the hex value for each set of 4 bits (one word). half a byte.
     
     char words[1][2];

     words[0][0] = hexString;
     words[0][1] = 0;

     printf("The 1st element is %c\n",words[0][0]);

     // this is the array to merge two elements of the hex (will be reimplmented by looping back through this code)
     char third[50];

     words[1][0] = 48;
     words[1][1] = 0;

     printf("The 2nd element is %c\n",words[1][0]);

     // maybe this is not working??? (anyway... I need to break this up...and really I'm concatenating output from a function and calling that function twice, and then concatenating...
     strcat(third,words[0]);
     strcat(third,words[1]);

     // something is going on here...
     int numZero = (int)strtol(third, NULL, 16);
//     printf("As a char: %c\n", numZero);                        // print it as a char
     printf("As a decimal: %d\n", numZero);                        // print it as decimal
     printf("As a hex: 0x%02X\n", numZero);                        // print it back as hex

     // array to hold the hex...eventually this is for a 32 byte message ... not 3
     __uint8_t stringTwo[3];

     stringTwo[0] = numZero;

     printf("stringTwo element 0 is: %X\n",stringTwo[0]);
     printf("stringTwo element 1 is: %X\n",stringTwo[1]);

     return 0;
}
