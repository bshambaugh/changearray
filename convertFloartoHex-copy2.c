#include <stdio.h>

int main(void)
{
    float k = 0.0;
    printf("\nEnter a float number: ");
    scanf("%f", &k);

   union 
   {
      float          f;
      unsigned char  b[sizeof(float)];
   } v = { k };
   size_t i;
   printf("%f is stored as ", v.f);
   for ( i = 0; i < sizeof(v.b); ++i )
   {
      printf("%02X%c", v.b[i], i < sizeof(v.b) - 1 ? '-' : '\n');
   }
   return 0;
}
