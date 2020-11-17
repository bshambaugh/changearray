/* grades.c - Sample program with array */
/* Get 10 grades and then average them */

#include <stdio.h>
#include <stdlib.h>

const int length = 4;
int array[4];

int main ( void )
{
        array[0] = 1;
	array[1] = 3;
        array[2] = 3;
        array[3] = 4;
        printf("\nThe third element in the array is: %d\n",array[2]);
	return (0);
}

void change(int **array,int length)
{
	free(*array);
	*array = malloc(length * sizeof(int));
	if(*array == NULL)
	   return;
//	for(int i = 0; i<length; i++)
	   (*array)[2] = 4;
}


