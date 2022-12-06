#include <stdio.h>

int main()
{
	int x = 1;
	int y = 1;
	int z[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* p;

	p = &z[0];
	x = *p;
	p = &z[1];
	

	for (y = 0; y < sizeof(z) / sizeof(z[0]); y++)
		z[y] = *p;

	for (y = 0; y < sizeof(z) / sizeof(z[0]); y++)
		printf("%d ", z[y]);


	return 0;
}