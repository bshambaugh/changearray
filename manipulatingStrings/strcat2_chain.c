/* Example using strcat by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
   /* Define a temporary variable */
/*
   char exampleA[1] = "A";
   char exampleB[1] = "B";
   char exampleC[1] = "C";
   char exampleD[1] = "D";

   char exampleTwo[4];

   str1 = exampleA[0];
   char str1, str2;

   str1 = exampleA[1];
   str2 = exampleB[1];
   strcat(str1,str2);
*/

   /* Concatenate the following two strings to the end of the first one */
   strcat(example, "is over 10 ");
   strcat(example, "years old.");

   /* Display the concatenated strings */
   printf("%s\n", example);

   return 0;
}
