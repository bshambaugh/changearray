#include <string.h>
#include <stdlib.h>
#include <stdio.h>

u_int8_t* fun(u_int8_t *arr)
{
        char hexOne[3] = {'1','F','\0'};
	char hexTwo[3] = {'1','E','\0'};
	char hexThree[3] = {'1','C','\0'};
	arr[0] = (u_int8_t)strtol(hexOne,NULL,16);
	arr[1] = (u_int8_t)strtol(hexTwo,NULL,16);
	arr[2] = (u_int8_t)strtol(hexThree,NULL,16);

	return arr;
}

int main()
{
	u_int8_t arr[100];
	u_int8_t* ptr = fun(arr);
	printf("%x %x %x",ptr[0],ptr[1],ptr[2]);
	return 0;
}
