#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i = 3; i >= 0; i--)
    {
	 j = abs(i-3);
         printf("here is i: %d, here is j: %d\n",i,j);
        /* 0x%02X */
    }
}
