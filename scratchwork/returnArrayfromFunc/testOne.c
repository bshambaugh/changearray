#include <string.h>
#include <stdlib.h>
#include <stdio.h>

u_int8_t* returnArray(u_int8_t *messageTwo[])
{
    return messageTwo;
}


int main()
{
    u_int8_t messageTwo[32];
    u_int8_t* ptr = returnArray(messageTwo);
    return 0;
}
