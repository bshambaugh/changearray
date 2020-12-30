#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

uint8_t message[32] = {
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
};

int i;

int main() {
   char *a;
   int len = sizeof(message)/sizeof(message[0]);
   a = (char *)calloc(len*2,sizeof(char));
   for(i=0; i < len; i++) {
        printf("here is element %x\n",message[i]);
       /* strcat(a,message[i]); */
       strcat(a,"AB");
   }
   printf("here is the len %d\n",len);
   printf("here is the string %s\n",a);
}
