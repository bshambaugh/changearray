#include <stdio.h>

long cube(long x);
long input, answer;

int main(void)
{
        input = 2.0;
	answer = cube(input);
	printf("\nThe cube of %ld is %ld.\n",input,answer);
}

long cube(long x)
{
	long x_cubed;
	x_cubed = x * x * x;
	return x_cubed;
}

