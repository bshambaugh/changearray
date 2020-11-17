#include <stdlib.h>
#include <stdio.h>

// change the pointer of the array
void change(int **array, int length)
{
	free(*array);
	*array = malloc(length * sizeof(int));
	if (*array == 0)
	    return;
	for (int i = 0; i < length; i++)
	    (*array)[i] = 1;
}


int main ( void )
{
 int length = 4;
 int *array;
 array = 0;
 change(&array,length);
 change(&array,length);
 change(&array,length);
 change(&array,length);
 free(array);
 printf("hello %d",array[5]);
}
