#include <stdio.h>

int main() {
  char greeting[] = "hello";
  char string[] = "hello";
  printf("%s\n",greeting);
  if(greeting == string) {
     printf("This is a string\n");
  }
}
