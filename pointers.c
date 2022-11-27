#include <stdio.h>

int main()
{
	int num;
	int* x;

	printf("Type in a number .. \n");

	scanf("%d", &num);

	x = &num;

	printf("The number is : %d\n", *x);

	return 0;
}