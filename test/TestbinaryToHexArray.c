#include <stdlib.h>
#include "binaryToHexArray.h"
#include <unity.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_IntToString(void)
{
  int a = 5;
  TEST_ASSERT_EQUAL_STRING("5", IntToString(a));
}

void test_IntToChar(void)
{
  char b[] = "1011";
  TEST_ASSERT_EQUAL_STRING("B", IntToChar(b));
}

void test_merge_Chars(void)
{
   const char j = '1';
   const char m = 'F';  

   Struct result = merge_Chars(j,m);

   const char hexStringOut[3] = {'1','F','\0'};
   
   TEST_ASSERT_EQUAL_STRING(hexStringOut,result.example);
}

void test_fourBitToHex(void)
{
    int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
    int i = 4;
    char *p;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('4',*p);
    free(p);
    
    i = 8;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('3',*p);
    free(p);

    i = 12;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('8',*p); 
    free(p);

    i = 16;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('3',*p);
    free(p);

    i = 20;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('A',*p);
    free(p);

    i = 24;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('6',*p);
    free(p);

    i = 28;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('6',*p);
    free(p);

    i = 32;
    p = fourBitToHex(array,i);
    TEST_ASSERT_EQUAL('5',*p);
    free(p);  
}

void test_BinToHexArray(void)
{
   int length = 32;
   int array[32] = {0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1};
   Hexarray resultTwo;
   resultTwo = BinToHexArray(array,length);
   const char hexArrayOne[3] = {'4','3','\0'};
   TEST_ASSERT_EQUAL_STRING(hexArrayOne,resultTwo.hexArray[0]);
   const char hexArrayTwo[3] = {'8','3','\0'};
   TEST_ASSERT_EQUAL_STRING(hexArrayTwo,resultTwo.hexArray[1]);
   const char hexArrayThree[3] = {'A','6','\0'};
   TEST_ASSERT_EQUAL_STRING(hexArrayThree,resultTwo.hexArray[2]);
   const char hexArrayFour[3] = {'6','5','\0'};
   TEST_ASSERT_EQUAL_STRING(hexArrayFour,resultTwo.hexArray[3]);
}
