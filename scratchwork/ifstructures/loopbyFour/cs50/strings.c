//#include <string.h>
#include <stdio.h>

char s[] = "Hi!";
char *k = "Trash";

int main(void) {
        printf("%p\n",s);
	printf("%p\n",&s[0]);
	 printf("%c\n",s[0]);
	printf("%p\n",&s[1]);
	printf("%c\n",s[1]);
	printf("%p\n",&s[2]);
	printf("%c\n",s[2]);
	printf("%p\n",&s[3]);
	printf("%c\n",s[3]);

	printf("%s",k);
	return 0;
}
