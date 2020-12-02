/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
#include <stdlib.h>
#include "binaryToHexArray.h"
#include <unity.h>

/* sometimes you may want to get at local data in a module.
 * for example: If you plan to pass by reference, this could be useful
 * however, it should often be avoided */
int a = 5;
char b[] = "1011";
/* Struct result; */

void setUp(void)
{
 /*
   extern const char *j;
   extern const char *m;
   j = "A";
   m = "B";
 */
}

void tearDown(void)
{
}

void test_IntToString(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL_STRING("5", IntToString(a));
}

void test_IntToChar(void)
{
   TEST_ASSERT_EQUAL_STRING("B", IntToChar(b));
}

void test_merge_Chars(void)
{
   const char *j;
   const char *m;
   j = "1";
   m = "F";  

   const char hexStringOut[3] = {'1','F','\0'};

   const char* c[2] = {"A","B"};
   const char* d[2] = {"A","B"};
   TEST_ASSERT_EQUAL_STRING_ARRAY(hexStringOut, hexStringOut,3);
   TEST_ASSERT_EQUAL_STRING_ARRAY(hexStringOut, merge_Chars(*j,*m).example,3);
/*   TEST_ASSERT_EQUAL_STRING_ARRAY("B", merge_Chars(*j,*m).example,2); */
   TEST_ASSERT_EQUAL_STRING_ARRAY(c,d,2); 
/*  TEST_ASSERT_EQUAL_STRING("B", merge_Chars("A","B").example[0]); */
}
