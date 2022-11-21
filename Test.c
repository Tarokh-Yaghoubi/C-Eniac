#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
	/*
	int n = 32;
	int p;

	int z = (n) ? 1 : 0;
	int o = (!p) ? 0 : 1;

	printf("%d\n", z);
	printf("%d\n", o);

	return 0; */

}


int binsearch(int x, int v[], int n)
{
	int low, mid, high;

	high = n - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (x < v[mid])
			high = mid + 1;
		else if (x > v[mid])
			low = mid + 1;

		else
			return mid;

	}
	return -1; /* NO MATCHES */
}