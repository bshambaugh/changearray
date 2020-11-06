#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *A;
    char *B;
    int i, m = 100, n = 30;
    char **bb;
    char example[5] = {0,0,0,0,0};

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));
  //  (*A) = 'a';
  //   (*B) = 'b';

     *A = 'a';
     *B = 'b';

    bb = (char **) calloc(m,sizeof(char*));

    printf("The address of 1st pointer to bb is %p\n",*bb);
    printf("The address of the 2nd point to bb is %p\n",bb);
    printf("The address of operator of the pointer is %p\n",&bb);

    for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
    }

    bb[0][0] = *A;
    bb[0][1] = '\0';

    printf("The address of bb[0][0] is %p\n",&bb[0][0]);
    printf("The address of bb[0][1] os %p\n",&bb[0][1]); 
    
    printf("The value of bb[0][0] is %c\n",bb[0][0]);
    printf("The value of bb[0][1] is %c\n",bb[0][1]);

    printf("The address of A is %p\n",&A);
    printf("The Value of pointer A is %p\n",A);
    printf("The value stored at A is %c\n",*A);
    printf("\n");
    printf("The address of B is %p\n",&B);
    printf("The Value of pointer B is %p\n",B);
    printf("The value stored at B is %c\n",*B);
    printf("\n");

    printf("This printf statement is problematic: \n");
//    printf("The value of A is %s\n",(*A));
  //  printf("The value of A is %s\n",*A);

//    bb[0][0] = (*A);%
//    bb[0][1] = 0;
 //   bb[1][0] = (*B);
 //   bb[1][1] = 0;
 //   bb[2][0] = 'd';
 //   bb[2][1] = 0;

    bb[1][0] = *B;
    bb[1][1] = '\0';

    strcat(example,bb[0]);
    strcat(example,bb[1]);

    printf("Example is: %s\n",example);

    printf("The value of bb[1][0] is: %c\n",bb[1][0]);
    printf("The address of bb[1][0] is: %p\n",&bb[1][0]);

    for(i = 0; i < m; ++i) {
       free(bb[i]);
    }

 //   printf("here is the words[0] %s\n",bb);
 //  this is confusing .... I do not know how to print out double pointers...
//    printf("here is the words[0] %s\n",(*(*bb[0][0])));
 //   printf("Five value: %c\n",bb[0][0]);
    free(bb);

// The following two below are equivalent    
//    printf("Four value: %c\n",(*A));
//    printf("Four value two: %c\n",*A);

//    printf("Nine value: %c\n",A);

    free(A);
    free(B);
    return 0;
}
