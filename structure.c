#include <stdio.h>
#include <string.h>

typedef struct  {
	char Name[100];
	char Sirname[120];
	char Nickname[100];
	char Address[200 + 1];
	int user_id;
} IdCard;

void printId(IdCard* info);

int main()
{
	IdCard Id1;
	IdCard Id2;

	strcpy(Id1.Name, "Tarokh");
	strcpy(Id1.Sirname, "Yaghoubi");
	strcpy(Id1.Nickname, "Shelldon");
	strcpy(Id1.Address, "London , Camden Yard, That famous garden");
	Id1.user_id = 11;

	strcpy(Id2.Name, "Jacob");
	strcpy(Id2.Sirname, "Rosen");
	strcpy(Id2.Nickname, "Chosen");
	strcpy(Id2.Address, "New york, Jordans , second street, Number 8");
	Id2.user_id = Id1.user_id + 1;

	printId(&Id1);
	printf("\n--------------SECOND INFO TABLE----------------\n");
	printId(&Id2);

	return 0;
}

void printId(IdCard* info)
{
	printf("\nThe name is : %s\n", info->Name);
	printf("The sirname is : %s\n", info->Sirname);
	printf("The nickname is : %s\n", info->Nickname);
	printf("The Address is : %s\n", info->Address);
	printf("The name is : %d\n", info->user_id);
}