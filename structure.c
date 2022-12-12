#include <stdio.h>
#include <string.h>

typedef struct {
	char Name[100];
	char Sirname[120];
	char Nickname[100];
	char Address[200];
	int age;

}IdCard;

void printInfo(IdCard* info);


int main()
{
	IdCard Id1;
	IdCard Id2;

	strcpy(Id1.Name, "Tarokh");
	strcpy(Id1.Sirname, "Yaghoubi");
	strcpy(Id1.Nickname, "Shelldon");
	strcpy(Id1.Address, "London , Camden Street , after the famous garden");
	Id1.age = 18;

	printInfo(&Id1);

	return 0;
}

void printInfo(IdCard* info)
{
	printf("The Users name is : %s\n", info->Name);
	printf("The Users Sirname is : %s\n", info->Sirname);
	printf("The Users Nickname is : %s\n", info->Nickname);
	printf("The Users Address is : %s\n", info->Address);
	printf("The Users Age is : %d\n", info->age);
}

