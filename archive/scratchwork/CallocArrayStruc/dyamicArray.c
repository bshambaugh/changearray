#include <stdlib.h>

int main()
{
	int *a;
	int n = 3;
	a = (int *)calloc(n,sizeof(int));
	a[0] = 1;
	a[1] = 3;
	a[2] = 4;
        free(a);
	return 0;
}
