/// https://stackoverflow.com/questions/1733881/c-correctly-freeing-memory-of-a-multi-dimensional-array
/// http://phyweb.physics.nus.edu.sg/~phywjs/CZ1102/lecture20/tsld014.htm


#include<stdio.h>
#include<stdlib.h>

int main() {

  int i;
  double **b; 

  b = (double **) calloc(100, sizeof(double*)); 

  for(i = 0; i < 100; ++i) {
     b[i] = (double *) calloc(30, sizeof(double));
  } 

  // double b[100][30];

  b[79][21] = 2.1;

//  free(**b);
  free(*b);
  free(b);
} 

