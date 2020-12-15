// C program to convert a real value 
// to IEEE 754 floating point representaion 

#include <stdio.h> 

void printBinary(int n, int i) 
{ 

	// Prints the binary representation 
	// of a number n up to i-bits. 
	int k; 
	for (k = i - 1; k >= 0; k--) { 

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
		unsigned int all : 23; 

	} raw; 
} myfloat; 

// Driver Code 
int main() 
{ 

	// Instantiate the union 
	myfloat var; 

	// Get the real value 
	var.f = -2.25; 

	printf("this the whole %d\n",var.raw.all);

	return 0; 
} 

