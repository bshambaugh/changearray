#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

uint8_t message[32] = {
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
};

int main () {
   char str[80];

   char sts[65];

   char *a;

   sprintf(str, "Value of Pi = %f", M_PI);
   puts(str);
   
   sprintf(sts,"%02x",message[4]);
   puts(sts);

   int i;
   char stt[3];
   int len = sizeof(message) / sizeof(message[0]);
   a = (char *)calloc(len*2+1,sizeof(char));
   for(i = 0; i < len; i++) {
     sprintf(stt,"%02x",message[i]);
     strcat(a,stt);
   }

   printf("here is a a %s\n",a);

   free(a);
   return(0);
}
