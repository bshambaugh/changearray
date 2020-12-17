#include <stdlib.h>
#include <stdint.h>
#include "floatToHexArray.h"
#include <unity.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_floatToHex32(void) 
{
    Hexarray resultfour;
    float m = 129.45;
    resultfour = floatToHex32(m);   
    char hexOne[3] = {'4','3','\0'};
    char hexTwo[3] = {'0','1','\0'};
    char hexThree[3] = {'7','3','\0'};
    char hexFour[3] = {'3','3','\0'}; 
    TEST_ASSERT_EQUAL_STRING(hexOne,resultfour.hexArray[0]);
    TEST_ASSERT_EQUAL_STRING(hexTwo,resultfour.hexArray[1]);
    TEST_ASSERT_EQUAL_STRING(hexThree,resultfour.hexArray[2]);
    TEST_ASSERT_EQUAL_STRING(hexFour,resultfour.hexArray[3]);
}

void test_resultToHexArray(void)
{
    float a = 129.45;
    Hexarray resultfour;
    HexArrayINT32 p;
    resultfour = floatToHex32(a);
    p = resultToHexArray(resultfour);
    uint8_t aa = 67;
    uint8_t bb = 1;
    uint8_t cc = 115;
    uint8_t dd = 51;
    TEST_ASSERT_EQUAL_INT8(aa,p.array[0]);
    TEST_ASSERT_EQUAL_INT8(bb,p.array[1]);
    TEST_ASSERT_EQUAL_INT8(cc,p.array[2]);
    TEST_ASSERT_EQUAL_INT8(dd,p.array[3]);
}

void test_floatToHexArrayINT32(void)
{
    float a = 129.45;
    HexArrayINT32 r;
    r = floatToHexArrayINT32(a);
    uint8_t aa = 67;
    uint8_t bb = 1;
    uint8_t cc = 115;
    uint8_t dd = 51;
    TEST_ASSERT_EQUAL_INT8(aa,r.array[0]);
    TEST_ASSERT_EQUAL_INT8(bb,r.array[1]);
    TEST_ASSERT_EQUAL_INT8(cc,r.array[2]);
    TEST_ASSERT_EQUAL_INT8(dd,r.array[3]);

}
