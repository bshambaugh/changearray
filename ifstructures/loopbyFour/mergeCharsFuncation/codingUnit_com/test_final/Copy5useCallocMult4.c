#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void change_value(char,char);

int main() {
    char *A;
    char *B;
//    int i, m = 100, n = 30;
//    char **bb;
//    char example[2] = {0,0};

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));

     *A = 'a';
     *B = 'b';

/*
    bb = (char **) calloc(m,sizeof(char*));

    for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
    }
*/
/*    
    bb[0][0] = *A;
    bb[0][1] = '\0';

    bb[1][0] = *B;
    bb[1][1] = '\0';
*/

//    strcat(example,bb[0]);
//    strcat(example,bb[1]);

//    printf("Example is: %s\n",example);
/*
    for(i = 0; i < m; ++i) {
       free(bb[i]);
    }
*/
//    printf("The address of A outside of fnc is %p\n",&A);

    change_value(*A,*B);

//    free(bb);
    free(A);
    free(B);

    return 0;
}

void change_value(char A,char B) {
 /*
    printf("The address of A in fnc is %p\n",&A);    
    printf("The value of A is %c\n",A);
    printf("The address of B in fnc is %p\n",&B);
    printf("The value of B is %c\n",B);
 */
    char **bb;
    char example[2] = {0,0};
    int i, m = 100, n = 30;
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
}
