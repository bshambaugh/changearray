#include <stdio.h>
#include <stdlib.h>

char *A;
char *B;
char words[1][2];

int main () {
   A = malloc(1 * sizeof(char));
   B = malloc(1 * sizeof(char));
   *A = 'b';
   *B = 'a';
   printf("A is currently: %s\n",A);
   printf("B is currently: %s\n",B);

   words[0][0] = *A;
   words[0][1] = 0;
   words[1][0] = *B;
   words[1][1] = 0;

   printf("before the memory is freed: \n\n");
   printf("here is the words[0] %s\n",words[0]);
   printf("here is the words[1] %s\n",words[1]);
 
   free(A);
   free(B);

   printf("after memory is freed : \n\n");
   printf("here is the words[0] %s\n",words[0]);
   printf("here is the words[1] %s\n",words[1]);

   printf("Here is something printed.\n");   
}
