#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // student structure
  struct student {
    int id[1];
  };
// new type
typedef struct student candidate;

candidate testFunction(int A) {
    candidate m;
    return m;
}

  // student structure pointer
  candidate *sptr;

  // variables
  int no_of_students = 3;

  // allocate memory blocks
  sptr = (candidate *) calloc (no_of_students, sizeof(candidate));

  // free memory location
  free(sptr);

  return 0;
}
