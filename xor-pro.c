#include <stdio.h>

int xorpro(int arr[], int len);

int main()
{
	int p[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 };

	xorpro(p, 16);

	return 0;
}

/* XOR two Arrays index by index */

int xorpro(int arr[], int len)
{
	int i, x;
	int first_segment[8];
	int second_segment[8];
	int count;

	count = len / 2;

	for (i = 0, x = 0; i < 8 && x < 8; ++i, ++x)
		first_segment[x] = arr[i];

	count = 16;

	for (i = 8, x = 0; i <= count && x < 8; ++i, ++x)
		second_segment[x] = arr[i];


	printf("-*-*-*-*-*-*-*--*-*-*-*-\n");

	for (i = 0; i < 8; ++i)
		printf("%d\n", first_segment[i] ^ second_segment[i]);


	return 0;
}