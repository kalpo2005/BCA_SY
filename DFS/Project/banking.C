#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct Bank
{
	struct Bank *prev;
	char name[100];
	int acNo, ammount, acType;
	struct Bank *next;
};
struct Bank typedef node;
node *lp = NULL, *rp = NULL;
void create(node *);
void deposite(node *);
void withdrawal(node *);

int main()
{
	int i = 1, choice;

	while (i)
	{
		printf("\n Bank all operation are here :");

		printf("\n\n 01. create a account 02. deposite balance \n 03. withdraw balance 04. exite ...");

		printf("\n \n enter a youtr choice :");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\n Create a bank account");
			lp = (node *)malloc(sizeof(node));
			create(lp);
			break;
		case 2:
			printf("\n Deposite balance");
			deposite(lp);
			break;

		case 3:
			printf("/\n withdrawal balance");
			withdrawal(lp);
			break;
		case 4:
			printf("\n exite ");
			i = 0;
			break;
		default:
			printf("\n invalid choice ");
			break;
		}
	}
	return 0;
}

void create(node *ptr)
{
	printf("\n Your account Number is a : 1");
	ptr->acNo = 1;
	fflush(stdin);
	printf("\n Enter a Account holder name :");
	gets(ptr->name);
accountType:
	printf("\n Enter a Account type (1.saving  2. current):");
	scanf("%d", &ptr->acType);
	if (ptr->acType != 1 && ptr->acType != 2)
		goto accountType;

	printf("\n Enter a Ammount (min-500 required:)");
	scanf("%d", &ptr->ammount);
	if (ptr->ammount < 500)
	{
		printf("Your ammount is less than 500 \n sorry !!! we can not open your account : \n \n");
	}
	else
	{
		printf("Your account is succesfully creaed !!!! \n \n");
	}
}
void deposite(node *ptr)
{
}
void withdrawal(node *ptr)
{
}
