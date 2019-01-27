#include <stdio.h>

int print(char*);

int main(void)
{
	printf("What's your name?\n");

	char name[50];
	scanf("%s", name);

	printf("☆★Hello %s, welcome to c language★☆\n", name);

	return 0;
}
