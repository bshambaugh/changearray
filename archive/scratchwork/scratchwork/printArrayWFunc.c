#include <stdio.h>
#include <stdlib.h>

int away[] = {1,2,3,4,5};
char rabbit[5] = {'A','B','C','D','E'};

void voidArray(int length, char a[])
{
   int i;
   for(i=0; i < length; i++) {
       printf("here is an %c\n",a[i]);
       a[i] = '\0';
   }
}

int main()
{
        int length = 5;
	int i;

        for(i=0; i <  length; i++)
	{
           printf("here is the rabbit %c\n",rabbit[i]);
        }

 	voidArray(length,rabbit);

	for(i=0; i <  length; i++)
        {
           printf("here is the rabbit %c\n",rabbit[i]);
        }

	return 0;
}
