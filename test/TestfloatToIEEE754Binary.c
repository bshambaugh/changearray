#include <stdlib.h>
#include "floatToIEEE754Binary.h"
#include <unity.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void testfloatToIEEE754Int(void) 
{
    int array[32] = {1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    float q = -7.75;
    int arrayTwo[32];
    int i;
    Struct32Int p;
    p = floatToIEEE754Int(q);
    for (i=0; i < 32; i++)
    {
        arrayTwo[i] = p.d[i];
    }
    TEST_ASSERT_EQUAL_INT_ARRAY(array,arrayTwo,1);
}
