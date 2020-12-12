#include <stdio.h>
#include <stdlib.h>

void findGreaterSmaller(int a, int b, int n, int arr[])
{
    int i;

/*    printf("the size of the array is: %ld\n", sizeof(&arr[0])); */
    printf("the value of a is : %d\n",a);
    printf("the value of b is : %d\n",b);
    printf("the value of n is : %d\n",n);

   for(i = 0; i < n ;i++) {
       printf("marko i is : %d\n",i);
       arr[i] = i;
   }
}


int main() {

    int a = 3;
    int b = 4;
    int *c;
    int *d;
    int n = 1;
    int m = 2;
    c = (int *)calloc(n,sizeof(int));
    d = (int *)calloc(m,sizeof(int));

    /*
    printf("the size o d is %ld",sizeof(d)/sizeof(d[0]));
    c[0] = 5;
 
    d[0] = 3;
    d[1] = 4;
*/

    findGreaterSmaller(a,b,n,c);
    findGreaterSmaller(a,b,m,d);

    printf("here is i %d\n",c[0]);

    printf("here is i %d\n",d[0]);
    printf("here is i %d\n",d[1]);

    free(c);
    free(d);
}
