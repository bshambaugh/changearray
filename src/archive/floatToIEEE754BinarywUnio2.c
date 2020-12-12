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
			/* printf("(1,J:%d) ",j); */
		        printf("1");	
		        array[j] = 1;
		      	j++;
		}
		else {
			printf("0");
			/* printf("(0,J:%d)",j); */
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
	printf("|");
        printBinary(var.raw.exponent,8,b);
	printf("|");
	printBinary(var.raw.mantissa,23,c);

	/* I need to take all of these array elements and roll it into one array */
        printf("\n");
	printf("a[0] %d\n",a[0]);
        d[0] = a[0];
	for(i = 0; i < m; i++) {
	    d[i+l] = b[i];
	}	
	printf("b[0] %d\n",b[0]);
        printf("b[1] %d\n",b[1]);
	printf("b[2] %d\n",b[2]);
	printf("b[3] %d\n",b[3]);
	printf("b[4] %d\n",b[4]);
	printf("b[5] %d\n",b[5]);
	printf("b[6] %d\n",b[6]);
	printf("b[7] %d\n",b[7]);
	for(i = 0; i < k; i++) {
            d[i+l+m] = c[i];
        }
        printf("c[0] %d\n",c[0]);
	printf("c[1] %d\n",c[1]);
	printf("c[2] %d\n",c[2]);
	printf("c[3] %d\n",c[3]);
	printf("c[4] %d\n",c[4]);
	printf("c[5] %d\n",c[5]);
	printf("c[6] %d\n",c[6]);
	printf("c[7] %d\n",c[7]);
	printf("c[8] %d\n",c[8]);
	printf("c[9] %d\n",c[9]);
	printf("c[10] %d\n",c[10]);
        printf("c[11] %d\n",c[11]);
        printf("c[12] %d\n",c[12]);
        printf("c[13] %d\n",c[13]);
        printf("c[14] %d\n",c[14]);
        printf("c[15] %d\n",c[15]);
        printf("c[16] %d\n",c[16]);
        printf("c[17] %d\n",c[17]);
        printf("c[18] %d\n",c[18]);
        printf("c[19] %d\n",c[19]);
	printf("c[20] %d\n",c[20]);
	printf("c[21] %d\n",c[21]);
	printf("c[22] %d\n",c[22]);

	for(i = 0; i < p; i++) {
            printf("%d",d[i]);
        }

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

	// Get the IEEE floating point representation 
	printf("IEEE 754 representation of %f is : \n", 
		var.f); 
	printIEEE(var); 

	return 0; 
} 
