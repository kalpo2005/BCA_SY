//  Student Name : Kalpesh Bavaliya
//  class        : bca_sy_B (2024-2025)
//  project      : Banking Process 

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
void Detail(node *);

int main()
{
	int i = 1, choice;

	while (i)
	{
		printf("\n*********************\n Bank all operation are here :");

		printf("\n\n 01. create a account 02. deposite balance \n 03. withdraw balance 04. Detail (with Balance) \n 05.exite ...");

		printf("\n \n Enter a your choice :");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\n Create a bank account\n **************\n");
			lp = (node *)malloc(sizeof(node));
			create(lp);
			break;
		case 2:
			printf("\n Deposite balance\n ***************\n");
			deposite(lp);
			break;

		case 3:
			printf("/\n withdrawal balance\n ********************\n");
			withdrawal(lp);
			break;

		case 4:
			printf("/\n Detail of account balance \n* *************** \n");
			Detail(lp);
			break;

		case 5:
			printf("\n exite \n ****************\n");
			i = 0;
			break;
		default:
			printf("\n invalid choice \n ****************\n");
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

	printf("\n Enter a Ammount (min-500 required):");
	scanf("%d", &ptr->ammount);
	if (ptr->ammount < 500)
	{
		printf(" Your ammount is less than 500 \n sorry !!! we can not open your account : \n \n");
		lp = NULL;
	}
	else
	{
		printf("Your account is succesfully creaed !!!! \n \n");
	}
}
void deposite(node *ptr)
{
	int tempAcNo, tempAmmount, tempAcType;

	printf("Enter Your account Number :");
	scanf("%d", &tempAcNo);

	if (ptr == NULL || ptr->acNo != tempAcNo)
	{
		printf("Account not found");
	}
	else
	{
	reEnterAcType:
		printf("\n Enter a Account type (1.saving  2. current):");
		scanf("%d", &tempAcType);
		if (ptr->acType != tempAcType)
		{
			printf("\n Enter a valid Account type");
			goto reEnterAcType;
		}

		printf("Enter deposite ammount  :");
		scanf("%d", &tempAmmount);
		ptr->ammount += tempAmmount;

		printf("\n your ammount successfully Deposite !!!!!!!!!!!!!");
	}
}
void withdrawal(node *ptr)
{
	int tempAcNo, tempAmmount, tempAcType;

	printf("Enter Your account Number :");
	scanf("%d", &tempAcNo);

	if (ptr == NULL || ptr->acNo != tempAcNo)
	{
		printf("Account not found");
	}
	else
	{
	reEnterAcType:
		printf("\n Enter a Account type (1.saving  2. current):");
		scanf("%d", &tempAcType);
		if (ptr->acType != tempAcType)
		{
			printf("\n Enter a valid Account type");
			goto reEnterAcType;
		}

		printf("Ente withdrawal ammount  :");
		scanf("%d", &tempAmmount);

		if ((ptr->ammount - tempAmmount) < 500)
		{
			printf("\n Ammount is less than 500 \n not possible withdrawal: ");
		}
		else
		{

			ptr->ammount -= tempAmmount;

			printf("\n your ammount successfully Withdrawal !!!!!!!!!!!!");
		}
	}
}

void Detail(node *ptr)
{

	if (ptr == NULL)
	{
		printf("\n sorry ! NO Any type of account is founded :");
	}
	else
	{

		printf("\n your account detail is :\n********************************\n");

		printf("\n Acccount number is     : %d", ptr->acNo);
		if (ptr->acType == 1)
			printf("\n Account Type is        : Saving");
		else
			printf("\n Account Type is        : Current");

		printf("\n Acccount holder Name   : ");
		puts(ptr->name);
		printf(" Acccount Balance is    : %d", ptr->ammount);
	}
}
