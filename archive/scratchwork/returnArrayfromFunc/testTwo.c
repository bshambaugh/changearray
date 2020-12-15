#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int* returnArray(int *messageTwo[])
{
    return messageTwo;
}


int main()
{
    int messageTwo[32];
    int* ptr = returnArray(messageTwo);
    return 0;
}
