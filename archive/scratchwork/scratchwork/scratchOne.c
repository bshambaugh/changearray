#include <stdlib.h>
#include <stdio.h>

int main()
{
   int n = 3;
   char *b;
   b = (char*) calloc(n,sizeof(int));
   b[0] = 1;
   b[1] = 3;
   b[2] = 4;
   printf("here is the %d\n",b[2]);
   free(b);
   return 0;
}
