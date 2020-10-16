/* Example using strcat by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

char IntToString(unsigned int a) {
   char s[2];
   if (a == 0) {
       strcpy(s,"0");
   } else if (a == 1) {
       strcpy(s,"1");
   } else 

   return s;
}

int main(int argc, const char * argv[])
{
   unsigned int a = 0;
   unsigned int b = 1;
   char c, d;

   c = IntToString(0);
   d = IntToString(1);

   printf("c is %s\n",c);
   printf("d is %s\n",d);

   /* Define a temporary variable */
   char example[100];

//   strcat(example,c);
//   strcat(example,d);

   /* Concatenate the following two strings to the end of the first one */
   strcat(example, "0");
   strcat(example, "1");

   /* Display the concatenated strings */
   printf("%s\n", example);

   return 0;
}
