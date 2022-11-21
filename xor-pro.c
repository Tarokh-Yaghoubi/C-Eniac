#include <stdio.h>

int xorpro(int arr[], int len);

int main()
{

	int n[16] = { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };

	xorpro(n, 16);

	return 0;

}

int xorpro(int arr[], int len)
{
	int i, ans, x, cnt;
	int first_segment[8]; 
	int second_segment[8];

	int first_index, second_index;
	
	cnt = len / 2;

	for (i = 0; i < cnt; ++i)
		arr[i];

	for (i = 0, x = 0; i < cnt && x < cnt; ++i, ++x)
			first_segment[x] = arr[i];

	
	for (i = 0; i < cnt; i++)
	{
		printf("%d\n", first_segment[i]);
	}
	

	printf("-------------------------------\n");

	for (i = 8, x = 0; i < 16 && x < 8; ++i, ++x)
		second_segment[x] = arr[i];


	for (i = 0; i < 8; ++i)
		printf("%d\n", second_segment[i]);


	printf("-------------------------------\n");

	first_index = first_segment[0];
	second_index = second_segment[0];

	printf(" first segment - first index : %d\t second segment - first index : %d\n", first_index, second_index);


	printf("-------------------------------\n");

	for (i = 0; i < 8; ++i)
		printf(" %d", first_segment[i] ^ second_segment[i]);
	

	return 0;
	
}