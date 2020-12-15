#include <stdio.h>

int main()
{
  int age = 45;
  
  if (age < 18)
  { 
      printf("Minor");
  } else if ( age < 43 ) {
      printf("Adult");
  } else if (age < 55) {
      printf("AdultTwo");
  } else if (age < 65) { 
     printf("AdultThree");
  } else
      printf("Senior Citizen");

   return 0;
}

