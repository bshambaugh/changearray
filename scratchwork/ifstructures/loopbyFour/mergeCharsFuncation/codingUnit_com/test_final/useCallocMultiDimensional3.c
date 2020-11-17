#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i, m = 100, n = 30;
    double **b;
    b = (double **) calloc(m,sizeof(double*));

    for(i = 0; i < m; ++i) {
       b[i] = (double *) calloc(n, sizeof(double));
    }

    b[79][21] = 2.1;

    for(i = 0; i < m; ++i) {
       free(b[i]);
    }

    free(b);

    return 0;
}
