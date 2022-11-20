#include <stdio.h>

void change_index(int x[10], int first_number, int second_number);

int main()
{
	int i;

	int a, b, c;

	int n[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


	for (i = 0; i < 10; ++i)
		printf("%d\n", n[i]);
	
	printf("-----------------------------\n");

	/*
	a = n[2];
	b = n[3];

	n[2] = b;
	n[3] = a;
	*/

	c = n[2];
	n[2] = n[3];
	n[3] = c;



	/* printf("%d\n", a);
	/* printf("%d\n", b);
	*/

	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", n[i]);
	}

	printf("*******************\n");




	change_index(n, 7, 2);


	return 0;
}



void change_index(int x[10], int first_index, int second_index)
{
	int i;

	//int x[10];

	int first = x[first_index]; /* x[2] */
	int second = x[second_index]; /* x[3] */

	x[first_index] = second;
	x[second_index] = first;

	for (i = 0; i < 10; i++)
		printf(" %d\n", x[i]);

}
