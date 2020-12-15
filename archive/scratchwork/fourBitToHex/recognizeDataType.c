#include <stdio.h>
#include <stdlib.h>

char a[4] = {'1','0','1','\0'};
int b[3] = {1,0,1};

char* IntToString(int a) {
  char  *p = malloc(sizeof *p);

  if (a == 0)  {
      *p = 48;
  } else if (a == 1) {
      *p = 49;
  } else if (a == 2) {
      *p = 50;
  } else if (a == 3) {
     *p = 51;
  } else if (a == 4)  {
     *p = 52;
  } else if (a == 5) {
     *p = 53;
  } else if (a == 6) {
     *p = 54;
  }  else if (a == 7) {
     *p = 55;
  } else if (a == 8) {
     *p = 56;
  } else if (a == 9) {
     *p = 57;
  } else
     *p = 48;
  return p;
}


int isBinary(void *argument ) {

 const int *x = argument;
 
 printf("here is x: %d\n",*x);
 
 if(*x <= 1) {
    return 0;
 } else {
   return  1;
 }

}


/*
int isBinary(int argument ) {

 int x  = (int) argument;

 printf("here is x: %d\n",x);

 if(x <= 1) {
    return 0;
 } else {
   return  1;
 }

}
*/
// two things. one string is longer than the other. the char string should have a null terminator, but it may not

int main()
{
	printf("here is %d\n",a[0]);

	int sum = (int) a[0];

	printf("here is %d\n",sum);

	int sumTwo = (int) b[0];

	printf("here is %d\n",sumTwo);

	if (sumTwo <= 1) {
            printf("this is less than or equal to 1\n");
	}

	 if (sum <= 1) {
            printf("this is less than or equal to 1\n");
        } else {
            printf("this is greater than or equal to 1\n");
	}

        int p = isBinary(&a[0]);

	printf("here is p %d\n",p);

	int q = isBinary(&b[0]);

	printf("here is q %d\n",q);

         _Bool x = 1;

	int r = isBinary(&x);

	printf("here is r %d\n",r);

	isBinary(NULL);
	

	return 0;
}
