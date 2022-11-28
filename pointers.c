#include <stdio.h>

int main()
{

	char* ptr;

	ptr = "mmdfjgndlfjknldjkfglkjdfnhlkjdnfhdflhnldfkhjdfhndfjhdlfhnldkfj";

	for (;;) {
		sprintf(ptr, "%s%s", *ptr, *ptr);
		printf("The character is : %s\n", ptr);
	}


	

	return 0;
}