#include <stdio.h>

int * getRandom() {
     static int r[3] = {3,5,9};

     return r;
}

int main () {
    int *p;
    p = getRandom();
    printf("%d\n",p[0]);
    printf("%d\n",p[1]);
    printf("%d\n",p[2]);
    return 0;
}
