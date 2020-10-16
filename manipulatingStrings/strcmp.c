/* The strcmp() function . */

#include <stdio.h>
#include <string.h>

int main( void )
{

    char str1[80], str2[80];
    int x;

    while (1)
    {

	 /* Input two strings */

	 printf("\n\nInput the first string, a blank to exit: ");
	 gets(str1);

	 if (strlen(str1) == 0)
             break;

	 printf("\nInput the second string: ");
	 gets(str2);

	 /* compare them and display the result. */

	 x = strcmp(str1,str2);

	 printf("\nstrcmp(%s,%s) returns %d.", str1, str2, x);

    }
 
    return 0;
}
