// Modified program using structures 
#include <stdio.h> 
struct greaterSmaller { 
	int greater, smaller; 
        int arrays[3];
	int count;
}; 

typedef struct greaterSmaller Struct; 

Struct findGreaterSmaller(int a, int b) 
{ 
	Struct s; 
	if (a > b) { 
		s.greater = a; 
		s.smaller = b; 
	} 
	else { 
		s.greater = b; 
		s.smaller = a; 
	} 

        s.arrays[0] = 4;
	s.arrays[1] = 9;
	s.arrays[2] = 12;

	s.count = 5;

	return s; 
} 

// Driver code 
int main() 
{ 
	int x, y; 
	Struct result; 

	printf("Enter two numbers: \n"); 
	scanf("%d%d", &x, &y); 

	// The last two arguments are passed 
	// by giving addresses of memory locations 
	result = findGreaterSmaller(x, y); 
	printf("\nThe greater number is %d and the"
		"smaller number is %d", 
		result.greater, result.smaller); 

	printf("\nArray element 0, 1, 2 : %d, %d, %d\n",result.arrays[0],result.arrays[1],result.arrays[2]);

        printf("\nThe count is : %d\n",result.count);
	return 0; 
} 

