#include<stdio.h>
#include<stdlib.h>

int main() {
    char *A;
    char *B;
    int i, m = 100, n = 30;
    char **bb;

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));
    (*A) = 'a';
    (*B) = 'b';

    bb = (char **) calloc(m,sizeof(char*));

    for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
    }

    bb[0][0] = 'c';
    bb[0][1] = '\0';
 
     
//    bb[0][0] = (*A);
//    bb[0][1] = 0;
 //   bb[1][0] = (*B);
 //   bb[1][1] = 0;
 //   bb[2][0] = 'd';
 //   bb[2][1] = 0;

    for(i = 0; i < m; ++i) {
       free(bb[i]);
    }

 //   printf("here is the words[0] %s\n",bb);
 //  this is confusing .... I do not know how to print out double pointers...
    printf("here is the words[0] %s\n",(*(*bb[0][0])));
 //   printf("Five value: %c\n",bb[0][0]);
    free(bb);
    
    printf("Four value: %c\n",(*A));
//    printf("Nine value: %c\n",A);

    free(A);
    free(B);
    return 0;
}
