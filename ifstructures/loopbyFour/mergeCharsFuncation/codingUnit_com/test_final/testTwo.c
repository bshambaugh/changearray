#include <stdlib.h>
#include <stdio.h>

typedef struct rec
{
	char words[1][2];

} RECORD;

int main()
{

      RECORD *ptr_one;
      // this does not work because I need to use calloc
      ptr_one = (RECORD *) malloc(sizeof(RECORD));

      (*ptr_one).words[0][0] = 'A';
      (*ptr_one).words[0][1] = 0;
      (*ptr_one).words[1][0] = 'B';
      (*ptr_one).words[1][1] = 0;
}

