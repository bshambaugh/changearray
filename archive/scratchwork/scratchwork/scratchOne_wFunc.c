#include <stdlib.h>
#include <stdio.h>

void loopArray(char *d) {
   d[0] = 1;
   d[1] = 3;
   d[2] = 4;
}

int main()
{
   int n = 3;
   char *b;
   b = (char*) calloc(n,sizeof(int));
   loopArray(b);
   printf("here is the %d\n",b[2]);
   free(b);
   return 0;
}
