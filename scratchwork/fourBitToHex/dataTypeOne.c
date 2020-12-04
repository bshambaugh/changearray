#include <stdio.h>
#include <stdlib.h>

char a[4] = {'1','0','1','\0'};
int b[3] = {1,0,1};

int isBinary(int argument ) {

 int x  = (int) argument;

 printf("here is x: %d\n",x);

 if(x <= 1) {
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

        int p = isBinary(a[0]);

        printf("here is p %d\n",p);
        /* prints 0 */

        int sumTwo = (int) b[0];

        printf("here is %d\n",sumTwo);
        /* prints 1 */
 
        int q = isBinary(b[0]);

        printf("here is q %d\n",q);      

}
