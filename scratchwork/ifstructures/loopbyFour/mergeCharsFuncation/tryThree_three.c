#include <stdio.h>
#include <stdlib.h>


char *A;
char *B;

int main () {
   A = malloc(1 * sizeof(char)+1);
   *A = 'b';
   printf("A is currently: %s\n",A);

   free(A);
   return 0;
}
