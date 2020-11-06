#include <stdio.h>

/*
int mergeChars(char A, char B) {
    // I think I need to allocate memory for the array elements, so I do not get stack smashing....
    // https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    char bird[2];
    char words[1][2];
    char *c,*d;
    c = malloc(1 * sizeof(char));
    d = malloc(1 * sizeof(char));

    *c = A;
    *d = B;

    // this should return a merge of two characters... as a pointer...
    printf("The first char is ++++++++++++ %d\n",A);
    printf("The first char is ++++++++++++ %s\n",c);
    printf("The second char is ++++++++ %d\n",B);
    printf("The second char is ++++++++ %s\n",d);

    words[0][0] = *c;
    words[0][1] = 0;
    words[1][0] = *d;
    words[1][1] = 0;

    printf("here is the words[0] %s\n",words[0]);
    printf("here is the words[1] %s\n",words[1]);
//    strcat(bird,words[0]);
//    strcat(bird,words[1]);

  //  printf("here is the third %s\n",third[0]);

 //   printf("here is the first and the second ???............................ %s\n",third);

    free(c);
    free(d);
    return 0;
}
*/

int main () {
    printf("Here is something printed.\n");   
}
