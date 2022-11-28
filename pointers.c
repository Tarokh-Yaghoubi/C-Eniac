#include <stdio.h>

int main()
{

	char* ptr;
	int size_t;

	ptr = "mmdfjgndlfjknldjkfglkjdfnhlkjdnfhdflhnldfkhjdfhndfjhdlfhnldkfj";

	for (;;) {
		printf(" for executed.");
		size_t = sprintf(ptr, "%s%s", *ptr, *ptr);
		printf("%c", size_t);
	}


	return 0;
}