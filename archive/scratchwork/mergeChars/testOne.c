#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct concatenatedString {
     char example[3];
};

typedef struct concatenatedString Struct;

Struct merge_Chars(char A, char B) {
   Struct s;
   s.example[0] = A;
   s.example[1] = B;
   s.example[2] = '\0';
   return s;
}

int main() {
   char a = '1';
   char b = 'F';
/*   char c[3] = {'1','F','\0'}; */
   /*
   printf("the merge_Chars is %s\n",merge_Chars(a,b).example);
   printf("the c is %s\n",c);
   if(c == c) {
   } 
   */
   /*
   if(strcmp(c,merge_Chars(a,b).example) == 0) {
      printf("this is true\n");  
   }
   */
  int numThree = (int)strtol(merge_Chars(a,b).example,NULL,16);
  printf("%d\n",numThree);
  printf("%X\n",numThree);
   return 0;
}
