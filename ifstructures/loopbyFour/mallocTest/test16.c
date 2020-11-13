
#include<stdio.h>
#include<stdlib.h>

// Create a rectangle structure
typedef struct{
  int height;
  int width;
} rec_t;

rec_t* new_rectangle(void);

int main(){
  rec_t *ptr;
  ptr = new_rectangle();

  rec_t rectangle = *ptr;

  rectangle.width = 10;
  rectangle.height = 10;

  printf("height: %d\n, width: %d\n", rectangle.height, rectangle.width);

  free(ptr);

  printf("height: %d\n, width: %d\n", rectangle.height, rectangle.width);

  return 0;
}


rec_t* new_rectangle(void){
  rec_t *p = malloc(sizeof *p);
  return p;
}
