#include <stdio.h>

/* The XOR progrm : 
		
		- a program to split a list and calculate xor of each pair of indexes
		
*/

int calxor(int arr[], int);

int lst[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 11, 12, 13, 14, 15, 16 };

int main()
{
	// extern int lst[];

	int len;
	int j = 0;
	int i = 0;
	int ans = 0;

	for (i = 0, j = 0; i < sizeof(lst); i += sizeof(int), j++) {


		printf("%d \n", lst[j]);

	}
	
	len = j;

	ans = len % 8;
	if (ans == 0)
	{
		printf(". . . . . . .  . . . . . . . . . . \n");
		printf("LENGTH MATCH :) \n REMAINDER : .. %d\n", ans);
		printf("XOR CALCULATION : \n");
		calxor(lst, len);
	}


	else {

		printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		printf("! NOT AN APROPRIATE LENGTH ! \n");

	}

	return 0;
}


int calxor(int arr[], int len)
{
	int i, x;
	int first_segment[8], second_segment[8];

	//for (i = 0; i < len; ++i)
		//printf("%d\n", arr[i]);

	for (i = 0, x = 0; i < len && x < 8; ++x, ++i)
		first_segment[x] = arr[i];

	for (i = 8, x = 0; i < len && x < 8; ++x, ++i)
		second_segment[x] = arr[i];

	printf("- - - - - - - - - - - - - - - - - - - \n");

	for (i = 0; i < 8; i++)
		printf(" %d", (first_segment[i] ^ second_segment[i]));

	return 0;

}
