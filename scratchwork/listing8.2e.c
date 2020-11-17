/* grades.c - Sample program with array */
/* Get 10 grades and then average them */

#include <stdio.h>
#include <stdlib.h>

const int length = 4;
int array[4] = {100,200,300,400};

int main ( void )
{
        int *array;
        array = NULL;
        change(&array,length);
        change(&array,length);
        change(&array,length);
        change(&array,length);	
	printf("\n\nThe second array element is %d\n", array[2]);
	return (0);
}

void change(int **array,int length)
{
	free(*array);
	*array = malloc(length * sizeof(int));
	if(*array == NULL)
	   return;
	for(int i = 0; i<length; i++)
	   (*array)[i] = 4;
}


