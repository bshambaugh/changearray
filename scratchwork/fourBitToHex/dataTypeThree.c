#include <stdio.h>
#include <stdlib.h>

char a[4] = {'1','0','1','\0'};
int b[3] = {1,0,1};

int isBinary(void *argument ) {

  int *x = argument;
 
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
        printf("here is p for '1' from isBinary %d\n",p);
        
	int sumTwo = (int) b[0];
        printf("here is %d\n",sumTwo);
        int q = isBinary(&b[0]);
        printf("here is q for 1 from isBinary %d\n",q); 
	
        int * pInt = NULL; 
        printf("&pInt is %p\n",&pInt);
	printf("pInt is %p\n",pInt);
	int s = isBinary(&pInt);
	printf("here is s for NULL from isBinary %d\n",s);

	int * pIntB = '\0';
	printf("&pInt is %p\n",&pIntB);
	printf("&pInt is %p\n",pIntB);
        int t = isBinary(&pIntB);
	printf("here is s for zero char from isBinary %d\n",t);

	void pIntC = NULL;
}
