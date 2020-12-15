

	#include<stdio.h>
        #include<stdlib.h>

	typedef struct rec
	{
    		int i;
    		float PI;
    		char A;
	}RECORD;

	int main()
	{
    		RECORD *ptr_one;

		int *ptr_two;

    		ptr_one = (RECORD *) malloc (sizeof(RECORD));

		ptr_two = (int *) malloc (sizeof(int));

    		(*ptr_one).i = 10;
    		(*ptr_one).PI = 3.14;
    		(*ptr_one).A = 'a';

		(*ptr_two) = 'b';

    		printf("First value: %d\n",(*ptr_one).i);
    		printf("Second value: %f\n", (*ptr_one).PI);
    		printf("Third value: %c\n", (*ptr_one).A);

    		free(ptr_one);

                printf("Four value: %c\n",(*ptr_two));
                
		free(ptr_two);

    		return 0;
	}
