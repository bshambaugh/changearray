// Modified program using structures 
#include <stdio.h> 
struct greaterSmaller { 
        int arrays[3];
	int count;
}; 

typedef struct greaterSmaller Struct; 

Struct findGreaterSmaller() 
{ 
	Struct s; 

        s.arrays[0] = 4;
	s.arrays[1] = 9;
	s.arrays[2] = 12;

	s.count = 5;

	return s; 
} 

// Driver code 
int main() 
{ 
	Struct result; 

	result = findGreaterSmaller(); 

	printf("\nArray element 0, 1, 2 : %d, %d, %d\n",result.arrays[0],result.arrays[1],result.arrays[2]);

        printf("\nThe count is : %d\n",result.count);

	return 0; 
} 

