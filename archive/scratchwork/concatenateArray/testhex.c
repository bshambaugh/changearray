#include <stdio.h>
unsigned char a=0xff;

int main()
{
        char stt[3];
	printf("the value of A is %X\n",a);
        sprintf(stt,"%02x",a);
        printf("there is stt %s\n",stt);
	return 0;
}
