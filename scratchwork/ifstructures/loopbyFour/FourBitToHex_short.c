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

    // the length of array and the value of length should be the same, it should always be a multiple of 8
    // the first number in hexArray should be length / divisor
    int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1}; 
    char *p, *g;
    Struct result;

    int length = 32;
    int divisor = 8;
    int divisorTwo = 4;
    int i;
    char hexArray[4][3] = {'\0','\0'};

    for (i=divisorTwo; i <= length; i = i + divisor) {
         if(i+divisor/2 <= length) {
       //     printf("write two elements to array {%d, %d}\n",i,i+divisor/2);
	  p = fourBitToHex(array,i);
          g = fourBitToHex(array,i+divisor/2);
      //    printf("The result of foutBitToHex is %c\n",*p);
       //   printf("The result of foutBitToHex is %c\n",*g); 
          result = merge_Chars(*p,*g);
	//  printf("Here is the example string: %s\n",result.example);
        //  printf("Here is i, %d\n",(i+divisor/2)/divisor);
          // maybe this is better ... (I will have to fix this later)
	  hexArray[(i+divisor/2)/divisor-1][0] = result.example[0];
	  hexArray[(i+divisor/2)/divisor-1][1] = result.example[1];
	  hexArray[(i+divisor/2)/divisor-1][3] = '\0';
	 // I am not sure how to do this properly, valgrind complains about things not being initialized...
 	 // strcpy(hexArray[(i+divisor/2)/divisor],result.example);
	  free(p);
          free(g);	  
       	} 

    }
  
    printf("Here is the example string from hexArray[0]: %s\n",hexArray[0]);
    printf("Here is the example string from hexArray[1]: %s\n",hexArray[1]);
    printf("Here is the example string from hexArray[2]: %s\n",hexArray[2]);
    printf("Here is the example string from hexArray[3]: %s\n",hexArray[3]);
   return 0;
}
