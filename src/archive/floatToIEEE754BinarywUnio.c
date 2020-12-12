// C program to convert a real value 
// to IEEE 754 floating point representaion 
  
#include <stdio.h> 
#include <stdlib.h>

// print binary needs to return a variable length array. try a struct...

void printBinary(int n, int i,int array[]) 
{ 
  
    // Prints the binary representation 
    // of a number n up to i-bits. 
    int k;
    for (k = i - 1; k >= 0; k--) { 
        
	// instead of just printing things, I need to save these to an int array, and optionally a bitstring
        if ((n >> k) & 1) 
    	    printf("1"); 
        else
            printf("0"); 
    } 
} 
  
typedef union { 
  
    float f; 
    struct
    { 
  
        // Order is important. 
        // Here the members of the union data structure 
        // use the same memory (32 bits). 
        // The ordering is taken 
        // from the LSB to the MSB. 
        unsigned int mantissa : 23; 
        unsigned int exponent : 8; 
        unsigned int sign : 1; 
  
    } raw; 
} myfloat; 
  
// Function to convert real value 
// to IEEE foating point representation 
void printIEEE(myfloat var) 
{ 

    int m = 32;
    int *b;
    b = (int*) calloc(m,sizeof(int));

    printBinary(var.raw.sign,1,b);
    printf(" | ");
    printBinary(var.raw.exponent, 8,b);
    printf(" | "); 
    printBinary(var.raw.mantissa, 23,b); 
    printf("\n");

   free(b); 
} 
  
// Driver Code 
int main() 
{ 
  
    // Instantiate the union 
    myfloat var; 
  
    // Get the real value 
    var.f = 2.25; 
  
    // Get the IEEE floating point representation 
    printf("IEEE 754 representation of %f is : \n", 
           var.f); 
    printIEEE(var); 
  
    return 0; 
} 

