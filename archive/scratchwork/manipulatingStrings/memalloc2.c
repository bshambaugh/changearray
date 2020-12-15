/* Demonstrates the use of malloc() to allocate storage */
/* space for string data. */

#include <stdio.h>
#include <stdlib.h>

char count, *ptr, *p;

int main( void )
{
   /* Allocate a block of 35 bytes. Test for success. */
   /* The exit() library function terminates the program. */

   ptr = malloc(1 * sizeof(char));

   if (ptr == NULL)
   {
       puts("Memory allocation error.");
       return 1;
   }

   /* Fill the string with values 65 through 90, */
   /* which are the ASCII codes for A-Z. */

   /* p is a pointer used to step through the string. */
   /* You want ptr to remain pointed at the start */
   /* of the string. */

   // A => 65
   // B => 66
   // C => 67
   // D => 68
   // E => 69
   // F => 70
   // G => 71
  
   p = ptr;

   *p =66;

   /* Add the terminating null character. */

   /* Display the string on the screen. */

   puts(ptr);

   puts(p);

   printf("The vale of p is %s\n",p);

   free(ptr);

   return 0;
}
