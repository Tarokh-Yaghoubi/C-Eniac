#include <stdio.h>

int myxor(int arr[], int len);

int main()
{

	int n[5] = {11, 12, 13, 15, 16};

	myxor(n, 5);
	
	return 0;
}


int myxor(int arr[], int len)
{
	int i, ans;

	ans = arr[0] ^ arr[1];

	
	if (len == 0)
		printf("%d\n", 0);
	if (len == 1)
		printf("%d\n", 1);

	for (i = 2; i < len; ++i)
		ans = ans ^ arr[i];

	printf("%d\t\n", ans);

	return 0;
}