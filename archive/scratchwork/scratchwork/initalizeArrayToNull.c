#include <stdio.h>
#include <stdlib.h>

int away[] = {1,2,3,4,5};
char rabbit[5] = {'A','B','C','D','E'};

void voidArray(char a[])
{
   int length = sizeof(&a) / sizeof(&a[0]);
   printf("the length of the array is %d\n",length);
}

int main()
{
       int length = sizeof(away) / sizeof(away[0]);
       printf("length of array is: %d\n",length);

       int lengthTwo = sizeof(rabbit) / sizeof(rabbit[0]);
       printf("length of rabbit is %d\n",lengthTwo);
       int i;
       printf("rabbit before:\n");
       for(i=0; i <  lengthTwo; i++)
       {
           printf("here is the rabbit %c\n",rabbit[i]); 
	      printf("here is the rabbit");
       }
       for(i=0; i <  lengthTwo; i++)
       {
	    rabbit[i] = '\0';
       }
       printf("rabbit after:\n");
       for(i=0; i <  lengthTwo; i++)
       {
            printf("here is the rabbit %c\n",rabbit[i]);
       }

       voidArray(rabbit);

	return 0;
}
