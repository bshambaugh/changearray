#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void change_value(char,char);

int main() {
    char example[2] = {0,0};
    char *A;
    char *B;

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));

     *A = 'a';
     *B = 'b';

    change_value(*A,*B);

    free(A);
    free(B);

    return 0;
}

void change_value(char A,char B) {
    char **bb;
    char example[2] = {0,0};
    int i, m = 2, n = 2;
    bb = (char **) calloc(m,sizeof(char*));
    for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
    }
    bb[0][0] = A;
    bb[0][1] = '\0';

    bb[1][0] = B;
    bb[1][1] = '\0';

    strcat(example,bb[0]);
    strcat(example,bb[1]);

    printf("Example inside is: %s\n",example);

     for(i = 0; i < m; ++i) {
       free(bb[i]);
    }

    free(bb);
  
    // How do I return an array from a function??? I need to do that...
}
