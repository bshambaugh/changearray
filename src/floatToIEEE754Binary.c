/* C program to convert a real value 
  to IEEE 754 floating point representaion */ 

#include <stdio.h> 
#include <stdlib.h>
#include "floatToIEEE754Binary.h"

/* or printBinary(int n, int i) */
void printBinary(int n, int i,int array[]) 
{ 

	/* Prints the binary representation 
	  of a number n up to i-bits. */
	int k; 
	int j = 0;
	for (k = i - 1; k >= 0; k--) { 
             
		if ((n >> k) & 1) {
		        array[j] = 1;
		      	j++;
		}
		else {
			array[j] = 0;
	        	j++;
	       }
	} 
} 

/* Function to convert real value 
  to IEEE foating point representation */ 

/* printIEEE needs to return a struct with an array of length, l, m, k */
void printIEEE(myfloat32 var, int l, int m, int k, int a[], int b[], int c[], int d[]) 
{ 
	int i;

	/* Prints the IEEE 754 representation 
	   of a float value (32 bits) */

	printBinary(var.raw.sign,l,a);
        printBinary(var.raw.exponent,m,b);
	printBinary(var.raw.mantissa,k,c);

	/* I need to take all of these array elements and roll it into one array */
        d[0] = a[0];
	
	for(i = 0; i < m; i++) {
	    d[i+l] = b[i];
	}	
	
	for(i = 0; i < k; i++) {
            d[i+l+m] = c[i];
        }

} 

/* function float To IEEE */
Struct32Int floatToIEEE754Int(float q)
{
    Struct32Int r;
     int *a;
     int *b;
     int *c;
     int *d;
     int l = 1;
     int m = 8;
     int k = 23;
     int p, i;

     p = l + m + k;

     a = (int *)calloc(l,sizeof(int));
     b = (int *)calloc(m,sizeof(int));
     c = (int *)calloc(k,sizeof(int));
     d = (int *)calloc(p,sizeof(int));

     myfloat32 var;

     var.f = q;

     printIEEE(var,l,m,k,a,b,c,d);

     /* I need to set r = d */
     for(i = 0; i < p; i++) {
          r.d[i] = d[i];
     }


     free(a);
     free(b);
     free(c);
     free(d);

     /* I need to set r = d... */

     return r;
}

/* Driver Code */
/* I need to move this driver code into its own function */
/*
int main() 
{
       int i;
       float q = -7.75;
       Struct32Int p;
       p = floatToIEEE754Int(q);       
       for(i = 0; i < 32; i++) {
            printf("%d",p.d[i]);
        }

        printf("\n");

	return 0; 
} 
*/

Hexarray floatToHex32(float q)
{
    int i;
    int length = 32;
    Struct32Int p;
    Hexarray resultThree;
    p = floatToIEEE754Int(q);
    int arrayTwo[32];
    for (i=0; i < 32; i++)
    {
        arrayTwo[i] = p.d[i];
    }
    resultThree = BinToHexArray(arrayTwo,length);

    return resultThree;
}

HexArrayINT32 resultToHexArray(Hexarray result) {
   HexArrayINT32 t;
   int i;
   for(i = 0; i < 4; i++)
    {
         t.array[i] = (u_int8_t)strtol(result.hexArray[i],NULL,16);
    }
    for(i = 4; i < 33; i++)
    {
         t.array[i] = 0;
    }
   return t;
}

HexArrayINT32 floatToHexArrayINT32(float a)
{
  Hexarray resultfour;
  HexArrayINT32 p;
  resultfour = floatToHex32(a);
  p = resultToHexArray(resultfour);
  return p;
}

