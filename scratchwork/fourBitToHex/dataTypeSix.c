#include <stdio.h>
#include <stdlib.h>

char a[4] = {'1','0','1','\0'};
int b[3] = {1,0,1};

int isBinary(int argument ) {

 int x  = (int) argument;

 printf("here is x in the finction: %d\n",x);

 // before you run this code, determine the size of an arrayi (n-1), and allocate a temporary array to hold the values
 if(x == 48) {
   printf("I have a zero\n");
 } else if (x == 49) {
   printf("I have a one\n");
 } else if (x == 0) {
   printf("I have the char zero");
 } else {
   // if the code fails, do not return the array
   printf("I have pppp\n");
 } 

}

int main()
{
        printf("here is %d\n",a[0]);
        int sum = (int) a[0];
        printf("here is %d\n",sum);
        int p = isBinary(a[0]);
        printf("here is p for '1' from isBinary %d\n",p);
        
        printf("here is %d\n",a[1]);
        int sumThree = (int) a[1];
        printf("here is %d\n",sumThree);
        int pq = isBinary(a[1]);
        printf("here is p for '1' from isBinary %d\n",pq);

        printf("here is %d\n",a[2]);
        int sumThreem = (int) a[2];
        printf("here is %d\n",sumThree);
        int pqm = isBinary(a[2]);
        printf("here is p for '1' from isBinary %d\n",pqm);


	printf("here is %d\n",a[3]);
        int sumFour = (int) a[3];
        printf("here is %d\n",sumFour);
        int pqq = isBinary(a[3]);
        printf("here is p for '1' from isBinary %d\n",pqq);

	/*

	int sumTwo = (int) b[0];
        printf("here is %d\n",sumTwo);
        int q = isBinary(b[0]);
        printf("here is q for 1 from isBinary %d\n",q); 
	*/
/*
	void *pInt;
	*(int  *)pInt = 15;
*/
/* this code triggers a segmentation fault */
/*	int *pInt = NULL;
 */ 
/*
	int s = isBinary(*pInt);
	printf("here is s for NULL from isBinary %d\n",s);
        free(pInt);	
*/

/* this code triggers a segmentation fault */
/*
	int *pIntB = '\0';
        int t = isBinary(*pIntB);
	printf("here is s for zero char from isBinary %d\n",t);
*/
 
}
