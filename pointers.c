#include <stdio.h>

int main()
{
	int num;
	int n2 = 1;
	int* x;
	int* n;

	printf("Type in a number .. \n");

	scanf("%d", &num);

	x = &num;
	n = &n2;


	printf("The number is : %d\n", *x);
	printf("Heres a sum : %d", (*x + *n));

	return 0;
}