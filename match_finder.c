				/*
				 _     ___ _   _ _   ___  __
				| |   |_ _| \ | | | | \ \/ /
				| |    | ||  \| | | | |\  /
				| |___ | || |\  | |_| |/  \
				|_____|___|_| \_|\___//_/\_\


				 Linux is the reason software is still alive !
				|WWWWWWWWWWWWWWWWWWWx,.   .;OWWWWWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWWWXc          .dWWWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWWX.             :WWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW;               kWWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW..od.  .xXKo    ;WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW.xo;N  0O.'Wc   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW';c.::l;:..K.   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWW'.ckkkkkkxll.   .WWWWWWWWWWWWW|
				|WWWWWWWWWWWWWWN .'clllllcc,     kWWWWWWWWWWWW|
				|WWWWWWWWWWWWWN'    .::,..;d.     xWWWWWWWWWWW|
				|WWWWWWWWWWWWK.   xW0xxOXMMMX      ,KWWWWWWWWW|
				|WWWWWWWWWWNl    ;MMMMMMMMMMMO       lNWWWWWWW|
				|WWWWWWWWWK. .  .WMMMMMMMMMMMMx   .   .0WWWWWW|
				|WWWWWWWWx  '  .NMMMMMMMMMMMMMMd   .    kWWWWW|
				|WWWWWWWd      XMMMMMMMMMMMMMMMMc        0WWWW|
				|WWWWWWO      OMMMMMMMMMMMMMMMMMM'       .WWWW|
				|WWWWWW.     'MMMMMMMMMMMMMMMMMMMO        0WWW|
				|WWWWWW      OMMMMMMMMMMMMMMMMMN;         KWWW|
				|WWWWWd ''   .lKMMMMMMMMMMMMMMO           KWWW|
				|WXkl.,kOOO'    .kMMMMMMMMMMMM. ;x.  .'ldl xWW|
				|o.:dOOOOOOO:     ;MMMMMMMMMMK  oOOOOOOOOOc.NW|
				|,'OOOOOOOOOOo     XMMMMMMMMMl  OOOOOOOOOOOc.k|
				|c.OOOOOOOOOOOk,   ;XMMMMMMWK   ;OOOOOOOOOOOk,|
				| :OOOOOOOOOOOOOo    .''..     kOOOOOOOOd;',lX|
				|l.',;:lokOOOOOOO'    ....    .OOOOOOk:.c0WWWW|
				|WWWNK0kd:,',::;.,0NWWWWWWWWWK.,dxdl'.oNWWWWWW|
				|WWWWWWWWWWNOdoxNWWWWWWWWWWWWWWl.  ,kWWWWWWWWW| */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

 /*
int* getrandom();

int main_1()
{
	// { a pointer to an int } 

	int* p;

	int i;

	p = getrandom();

	for (i = 0; i < 10; i++)
	{
		printf("*(p + %d) : %d \n", i, *(p + i));
	}
	return 0;

} 

*/
/*
int* getrandom()
{
	static int random_array[10];
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		random_array[i] = rand();
		printf("random_number [%d] = %d\n", i, random_array[i]);

	}

	return random_array;

} */

\
						
// char change_indexes(char* first, char* second, char* last);

// char change_indexes(char* first, char* second, char* last);

const int MAX = 3;

int  repeat(int* arr, int size, int number);
char match_finder(const char* first, const char* second, int size);
char match_finder_2(char* str, char* sub);
void replace(int* arr, int size, int from, int to);

int main()
{
	int from, to;
	int i = 0;
	char replace_resualt;
	int arr[10] = { 1, 1, 2, 3, 4, 5, 1, 1, 1, 1 };
	int resault;

	char first[6] = { 'a', 'b', 'c', 'd', 'e', '\0'};
	char second[6] = { 'o', 'r', 'p', 'z', 'f', '\0'};

	char str[1024*20];
	char sub[1024];

	strcpy(str, "The time() function is defined in time.h (ctime in C++) header file. This function returns the time since 00:00:00 UTC, January 1, 1970 (Unix timestamp) in seconds. If second is not a null pointer, the returned value is also stored in the object pointed to by second");
	strcpy(sub, "Unix timestamp");




	printf("Running the function : ... \n ");

	resault = repeat(arr, 10, 1);

	printf("The result is : %d\n", resault);

	printf("-----------------------------------\n");

	printf("From : ... \n");
	scanf("%d", &from);
	printf("To: ... \n");
	scanf("%d", &to);

	//for (i = 0; i < 10; i++)
		//if (arr[i] == from)

	printf("B "); for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) printf("%d ", arr[i]); printf("\n");

	replace(arr, 10, from, to);

	printf("A "); for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) printf("%d ", arr[i]); printf("\n");

	printf("------------------------------\n");
	printf("Match Finder : .. \n");
	replace_resualt = match_finder(first, second, (sizeof(first) / sizeof(first[0])));

	printf("%d\n", replace_resualt);

	printf("------------------\n");

	replace_resualt = match_finder_2(str, sub);

	printf("%d\n", replace_resualt);

	return 0;

}

int repeat(int* arr, int size, int number)
{
	int i = 0;
	int count = 0;

	for (i = 0; i < size; i++)
		if (arr[i] == number)
			count++;

	return count;
}

void replace(int* arr, int size, int from, int to)
{
	int i = 0;

	for (i = 0; i < size; i++)
		if (arr[i] == from)
			arr[i] = to;

	/*
		for (i = 0; i < size; i++)
			printf("%d ", arr[i]);
		*/

		//	return arr;

}

char match_finder(const char* first, const char* second, int size)
{
	int i, j;
	i = j = 0;

	for (i = 0, j = 0; i < size && j < size; i++, j++)
		if (first[i] == second[j])
		{
			return 1;
		}
		else
			return 0;


}

char match_finder_2(char* str, char* sub)
{
	char* p1, * p2, * p3;
	
	int i = 0, j = 0, flag = 0;

	p1 = str;
	p2 = sub;

	for (i = 0; i < strlen(str); i++)
	{
		if (*p1 == *p2)
		{
			p3 = p1;
			for (j = 0; j < strlen(sub); j++)
			{
				if (*p3 == *p2)
				{
					p3++;
					p2++;
				}
				else
					break;
			}
			p2 = sub;
			if (j == strlen(sub))
			{
				flag = 1;
				printf("\n substring found in index : %d\n", i);
			}
		}
		p1++;
	}
	if (flag == 0)
	{
		printf("Substring not found\n");

	}
	if (flag == 1)
		return flag;	
	else if (flag == 0)
		return flag;
}