#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
struct structArray  {
   char hexArray[4][3];
};
*/

struct concatenatedString {
   char example[2];
};

typedef struct concatenatedString Struct;
/*
typedef struct structArray Hexarray;

Hexarray BinToHexArray(int array[],int length) {
   char *p, *g;
   Hexarray HexArray = { '\0', '\0' };
   Struct result;

    int divisor = 8;
    int divisorTwo = 4;
    int i;


    for (i=divisorTwo; i <= length; i = i + divisor) {
         if(i+divisor/2 <= length) {
          p = fourBitToHex(array,i);
          g = fourBitToHex(array,i+divisor/2);
          result = merge_Chars(*p,*g);
          HexArray.hexArray[(i+divisor/2)/divisor-1][0] = result.example[0];
          HexArray.hexArray[(i+divisor/2)/divisor-1][1] = result.example[1];
          HexArray.hexArray[(i+divisor/2)/divisor-1][3] = '\0';
          free(p);
          free(g);
        }

    }


    return HexArray;
}
*/

Struct merge_Chars(char A, char B) {
   Struct s;
   s.example[0] = '\0';
   s.example[1] = '\0';
   char **bb;
   int i, m = 2, n = 2;
   bb = (char **) calloc(m,sizeof(char*));
   for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
   }
    bb[0][0] = A;
    bb[0][1] = '\0';

    bb[1][0] = B;
    bb[1][1] = '\0';

    strcat(s.example,bb[0]);
    strcat(s.example,bb[1]);

     for(i = 0; i < m; ++i) {
       free(bb[i]);
    }

    free(bb);

    return s;
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

char* fourBitToHex(int array[], int count) {
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

   for(i = 0; i < count; i++) {
      j = i % windowSize;
      k = IntToString(array[i]);
      arrayString[j] = *k;
      free(k);
   }

      arraythree[0][0] = arrayString[0];
      arraythree[0][1] = '\0';
      arraythree[1][0] = arrayString[1];
      arraythree[1][1] = '\0';
      arraythree[2][0] = arrayString[2];
      arraythree[2][1] = '\0';
      arraythree[3][0] = arrayString[3];
      arraythree[3][1] = '\0';

      for(i = 0; i < windowSize; i++) {
          strcat(second,arraythree[i]);
      }

      r = IntToChar(second);

      return r;
}

int main() {
   // Test for IntToString
   char *k;
   k = IntToString(5);
   printf("5 converd to The string is: %c\n",*k);
   free(k);
  
   // Test for IntToChar
   char *r;
   r = IntToChar("1011");
   printf("1011 converted The hex string is: %c\n",*r);
   free(r);

   // grab the first 4 bits of an array
   int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
   int i = 4;
   char *p;
   p = fourBitToHex(array,i);
   printf("The 1st 4 bits from the array in hex are: %c\n",*p);
   free(p);
  
   // merge Two Characters into a Struct 
   Struct result;
   char *j, *m;
   j = "A";
   m = "B";
   result = merge_Chars(*j,*m);
    printf("Print the characters; { %c , %c }\n",result.example[0],result.example[1]);
//   printf("%c and %c merged are: %s\n",*j,*m,result.example);

//   printf("%c and %c merged are with result: %s\n",*j,*m,merge_Chars(*j,*m).example);
 
   char biArray[2][2] = {{'A','\0'},{'B','\0'}};
 
   char binArray2[3] = {'A','B','\0'};

  u_int8_t message[32] = {
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
  };

  printf("here is the last hex value %d\n",message[15]);

  char hex[] = "0F";
  int num = (int)strtol(hex,NULL,16);
  printf("%c\n",num);
  printf("%d\n",num);
  printf("%X\n",num);

  char hexTwo[] = "0E";
  int numTwo = (int)strtol(hexTwo,NULL,16);
  printf("%c\n",numTwo);
  printf("%d\n",numTwo);
  printf("%X\n",numTwo);

  char hexThree[3] = {'1','F','\0'};
  int numThree = (int)strtol(hexThree,NULL,16);
  printf("%c\n",numThree);
  printf("%d\n",numThree);
  printf("%X\n",numThree);


  u_int8_t messageTwo[3];

  messageTwo[0] = num;
  messageTwo[1] = numTwo;
  messageTwo[2] = numThree;

  printf("here is the first hex value in messageTwo %d\n",messageTwo[0]);
  printf("here is the last hex value in messageTwo %d\n",messageTwo[1]); 
  printf("here is the last hex value in messageTwo %d\n",messageTwo[2]);
  // BinToHexArray

   return 0;
}
