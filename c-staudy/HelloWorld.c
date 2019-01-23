#include <stdio.h>

int print(char*);

int main(void)
{
	printf("What's your name?\n");

	char name[50];
	scanf("%s", name);

<<<<<<< HEAD
	printf("☆★Hello %s, welcome to c language★☆\n", name);
=======
	printf("Hello %s, welcome to c language!\n", name);
>>>>>>> c8e8ee230b3082f0fe581ce337231628c60bf762

	return 0;
}
