#include <stdio.h>

int* fun(int *arr)
{
	arr[0] = 10;
	arr[1] = 20;

	return arr;
}

int main()
{
	int arr[100];
	int* ptr = fun(arr);
	printf("%d %d",ptr[0],ptr[1]);
	return 0;
}
