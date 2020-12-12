// C program to convert a real value 
// to IEEE 754 floating point representaion 

#include <stdio.h> 
#include <stdlib.h>

// or printBinary(int n, int i)
void printBinary(int n, int i,int array[]) 
{ 

	// Prints the binary representation 
	// of a number n up to i-bits. 
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

// printIEEE needs to return a struct with an array of length, l, m, k
void printIEEE(myfloat var) 
{ 
        int *a;
	int *b;
	int *c;
	int *d;
        int l = 1;
	int m = 8;
	int k = 23;
	int p;
	int i;

	p = l + m + k;

	a = (int *)calloc(l,sizeof(int));
	b = (int *)calloc(m,sizeof(int));
	c = (int *)calloc(k,sizeof(int));
        d = (int *)calloc(p,sizeof(int));
	
	// Prints the IEEE 754 representation 
	// of a float value (32 bits) 

	printBinary(var.raw.sign,1,a);
        printBinary(var.raw.exponent,8,b);
	printBinary(var.raw.mantissa,23,c);

	/* I need to take all of these array elements and roll it into one array */
        d[0] = a[0];
	
	for(i = 0; i < m; i++) {
	    d[i+l] = b[i];
	}	
	
	for(i = 0; i < k; i++) {
            d[i+l+m] = c[i];
        }

	for(i = 0; i < p; i++) {
            printf("%d",d[i]);
        }

	printf("\n");
	// return the array d here
	free(a);
	free(b);
	free(c);
	free(d);

} 

// Driver Code 
int main() 
{ 

	// Instantiate the union 
	myfloat var; 

	// Get the real value 
	var.f = -7.75; 

	printIEEE(var); 

	return 0; 
} 
