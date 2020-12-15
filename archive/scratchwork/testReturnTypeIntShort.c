#include<stdio.h>
int *return_pointer(int *, int); // this function returns a pointer of type int

int main()
{
    int i, *ptr;
    int arr[] = {11, 22, 33, 44, 55};
    i = 4;

    ptr = return_pointer(arr, i);

    return 0;
}

int *return_pointer(int *p, int n)
{
    p = p + n;
    return p;
}
