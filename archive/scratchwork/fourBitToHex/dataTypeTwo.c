#include <stdio.h>
#include <stdlib.h>

char a[4] = {'1','0','1','\0'};
int b[3] = {1,0,1};

int isBinary(void *argument ) {

  int *x = argument;

/* int y = x + 1; */

 printf("here is x: %d\n",*x);

 printf("x plue 1: %d\n",*x + 1);
 /*
 printf("here is y: %d\n",y);
*/

 if(*x + 1 <= 2) {
    return 0;
 } else {
   return  1;
 }

}

int main()
{
    printf("here is %d\n",a[0]);

        int sum = (int) a[0];

        printf("here is %d\n",sum);

        int p = isBinary(&a[0]);

        printf("here is p %d\n",p);
        /* prints 0 */

        int sumTwo = (int) b[0];

        printf("here is %d\n",sumTwo);
        /* prints 1 */
 
        int q = isBinary(&b[0]);

        printf("here is q from isBinary %d\n",q);      
	
        int * pInt = NULL; 

	int s = isBinary(&pInt);

	printf("here is s from isBinary %d\n",s);

	int r = isBinary(&a[0]);

	printf("here is r from isBinary %d\n",r);

	int sml=1;
	printf("%c \n",sml);
}
