#include<stdio.h>
#include<string.h>

int main() {
  int i;
  char A[] = "43";
  char B[] = "83";
  char C[] = "A6";
  char D[] = "65"; 
  char E[4][2]; 
  // array to merge here //
  // See:: https://overiq.com/c-programming-101/array-of-strings-in-c/
  for(i=0; i < 4; i++) {
    // strcpy(E[i],A);
    printf("here is i %d",i);
  }
  strcpy(E[0],A);
  strcpy(E[1],B);
  strcpy(E[2],C);
  strcpy(E[3],D);
  printf("here is the string %s\n",A);
  printf("here is the array %s\n",E[0]);
  printf("here is the array %s\n",E[1]);
  printf("here is the array %s\n",E[2]);
  printf("here is the array %s\n",E[3]);
  return 0;
}
