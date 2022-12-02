#include <stdio.h>

void geeks(void);

int main_2()
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

int main()
{
	geeks();

	return 0;

}

void geeks()
{
	int var = 20;
	int x = 30;
	int pl;

	int* ptr;
	int* jsm;

	ptr = &var;

	jsm = &x;

	if (*ptr + *jsm == 50)
		printf("%d\n", (*ptr + *jsm));
	else
		printf("not match");

}