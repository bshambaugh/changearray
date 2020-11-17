#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *file = fopen("phonebook.csv","a");
	if (file == NULL)
	{
	     return 1;
	}

	// char *name = get_string("Name: ");
	printf("Name: ");
	char *name;
	name = malloc(15 * sizeof(char));
	scanf("%s",name);

	// char *number = get_string("Number: ");
        printf("Number: ");
	char *number;
	number = malloc(15 * sizeof(char));
	scanf("%s",number);

	fprintf(file, "%s,%s\n", name, number);

	fclose(file);
}

