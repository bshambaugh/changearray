#include <stdio.h>

char words[1][3];

int main( void )
{
   words[0][0] = 30;
   words[0][1] = 70;
   words[0][2] = 0;

   printf("The 1st element is %d\n",**words);
   printf("The 1st element is %d\n",words[0][0]);
   printf("The 2nd element is %d\n",words[0][1]);
   printf("The 3rd element is %d\n",words[0][2]);



   return 0;

}
