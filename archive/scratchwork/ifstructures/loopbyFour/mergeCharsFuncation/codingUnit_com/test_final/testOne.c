#include<stdio.h>
#include<stdlib.h>

char mergeChars(char A, char B) {
     char words[1][2];
     char *C = (char *) malloc(sizeof(char));

     (*C) = A;

     printf("Within mergeChars A is: %c\n",A);
     printf("Within mergeChars B is: %c\n",B);

     printf("Within mergeChars C is: %c\n",(*C));

     /*
     words[0][0] = A;
     words[0][1] = 0;
     words[1][0] = B;
     words[1][1] = 0;
     */

     // print the words elements
   //  printf("here is the words[0] %s\n",words[0]);
   //  printf("here is the words[1] %s\n",words[1]);


     // do a merging here

     free(C);

     return A;
}

int main() {
    char *A;
    char *B;

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));
    (*A) = 'a';
    (*B) = 'b';
    printf("Before A is: %c\n",(*A));
    printf("Before B is: %c\n",(*B));
    mergeChars(*A,*B);
    free(A);
    free(B);
    return 0;
}

