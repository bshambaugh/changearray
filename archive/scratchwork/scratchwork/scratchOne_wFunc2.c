#include <stdlib.h>
#include <stdio.h>

char* loopArray(char *d) {
   int n = 3;
   d = (char*) calloc(n,sizeof(char));
   d[0] = 'a';
   d[1] = 'b';
   d[2] = 'c';
   return d;
}

int main()
{
   int n = 3;
   char *b;
/*   b = (char*) calloc(n,sizeof(int)); */
   loopArray(b);
   printf("here is the %d\n",b[2]);
   free(b);
   return 0;
}
