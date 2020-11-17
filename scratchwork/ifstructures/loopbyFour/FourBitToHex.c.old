#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct concatenatedString {
   char example[2];
};

typedef struct concatenatedString Struct;

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

//   printf("The count is: %d\n",count);
//   printf("+++++++++++++++++++++++++++++++++++++++++\n");

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
  
///    printf("The array String in the function is %s\n",arrayString);
//      printf("The array String (element 0) in the function is %c\n",arrayString[0]);
//      printf("The array String (element 1) in the function is %c\n",arrayString[1]);
//      printf("The array String (element 2) in the function is %c\n",arrayString[2]);
//      printf("The array String (element 3) in the function is %c\n",arrayString[3]);

      arraythree[0][0] = arrayString[0];
      arraythree[0][1] = '\0';
      arraythree[1][0] = arrayString[1];
      arraythree[1][1] = '\0';
      arraythree[2][0] = arrayString[2];
      arraythree[2][1] = '\0';
      arraythree[3][0] = arrayString[3];
      arraythree[3][1] = '\0';

      for(i = 0; i < windowSize; i++) {
     //     printf("Element in returnArrayString is: %s\n",arraythree[i]);
          strcat(second,arraythree[i]);
      }

  //    printf("second in the arraystring: %s\n",second);

      // I really need to return r
      r = IntToChar(second);
  //    printf("the hexString for second is: %c\n",*r);
 
      return r;
}


int main() {

    char *p;
    int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
    p = fourBitToHex(array,28);
    printf("The result of foutBitToHex is %c\n",*p);

    char *g;
    g = fourBitToHex(array,32);
    printf("The result of foutBitToHex is %c\n",*g);

    char *A;
    char *B;
    Struct result;

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));

    *A = *p;
    *B = *g;

    result = merge_Chars(*A,*B);

    printf("Here is the example string: %s\n",result.example);

    int numZero = (int)strtol(result.example,NULL,16);
    printf("A decimal: %d\n",numZero);

    free(A);
    free(B);
     
   free(p);
   free(g);
   return 0;
}
