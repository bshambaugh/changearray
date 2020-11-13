#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bA {
   char example[2];
};

typedef struct bA Struct;

Struct cV(char A, char B) {
   Struct s;
   s.example[0] = '\0';
   s.example[1] = '\0';
   char **bb;
   int i, m = 2, n = 2;
   bb = (char **) calloc(m,sizeof(char*));
   for(i = 0; i < m; ++i) {
       bb[i] = (char *) calloc(n, sizeof(char));
   }
    bb[0][0] = A;
    bb[0][1] = '\0';

    bb[1][0] = B;
    bb[1][1] = '\0';

    strcat(s.example,bb[0]);
    strcat(s.example,bb[1]);

     for(i = 0; i < m; ++i) {
       free(bb[i]);
    }

    printf("Here is the cV example[0] is: %c\n",s.example[0]);
    printf("Here is the cV example[0] pointer is: %p\n",&s.example[0]);

    printf("Here is the cV example[1] is: %c\n",s.example[1]);
    printf("Here is the cV example[1] pointer is: %p\n",&s.example[1]);

    free(bb);

   return s;
}

int main() {
    char *A;
    char *B;
    Struct result;

    A = (char *) malloc(sizeof(char));
    B = (char *) malloc(sizeof(char));

     *A = 'a';
     *B = 'b';

    result = cV(*A,*B);

    printf("Outside of the function, the array is :\n");

    printf("Here is the cV out example[0] is: %c\n",result.example[0]);
    printf("Here is the cV out example[0] pointer is: %p\n",&result.example[0]);

    printf("Here is the cV out example[1] is: %c\n",result.example[1]);
    printf("Here is the cV out example[1] pointer is: %p\n",&result.example[1]);

    printf("Here is the example string: %s\n",result.example);

    free(A);
    free(B);	
    return 0;
}
