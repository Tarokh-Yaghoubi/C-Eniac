#include <stdio.h>

/*    

 _     ___ _   _ _   ___  __
| |   |_ _| \ | | | | \ \/ /
| |    | ||  \| | | | |\  /
| |___ | || |\  | |_| |/  \
|_____|___|_| \_|\___//_/\_\


*/

int max(int, int);

int main()
{
	int ret;
	int a ,b;
	a = 10;
	b = 11;
	ret = max(a, b);
	printf("The bigger number is : %d\n", ret);
	return 0;

}

int max(int num1 , int num2)
{
	int result;

	result = (num1 > num2) ? num1 : num2;

	return result;

}
