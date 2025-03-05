#include<stdio.h>
#include<stdlib.h>

struct student
{
	struct student *prev;
	int number;
	struct student *next;
};

typedef struct student kalpesh;
kalpesh *root=NULL;

kalpesh *inseart(kalpesh *);
void infixDisplay(kalpesh *);
void prefixDisplay(kalpesh *);
void Display(kalpesh *);
void postfixDisplay(kalpesh *);

int main()
{
	int choice,i=1;
	while(i)
	{
		printf("\n \n A tree all operation :");

		printf("\n 01.inseart \n 02.Display \n 03.Exite");

		printf("\n Enter a right choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				root=inseart(root);
				break;

			case 2:
				printf("\n A Node value is a :");
				Display(root);
				break;

			case 3:
				printf("\n \n Program exite !!!!");
				i=0;
				break;

			default:
				printf("\n 'n invalid choice  !!!!");
				break;
		}

	}
	return 0;
}

kalpesh *inseart(kalpesh *ptr)
{

	int value;

	char choice;
	if(ptr==NULL)
	{
//		printf("\n do you want a create a root node...(y/n)");
//		fflush(stdin);
//		choice=getchar();
//		if(choice=='y' || choice=='Y')
//		{
		printf("\n Enter a node value :");
		scanf("%d",&value);
		ptr=(kalpesh *)malloc(sizeof(kalpesh));
		ptr->number=value;
		ptr->next=ptr->prev=NULL;
//		ptr=inseart(ptr);
//		}
	}
	printf("\n do you want a crate a right node.... (y/n)");
	fflush(stdin);
	choice=getchar();
	if(choice=='y' || choice=='Y')
	{
		ptr->prev=inseart(ptr->prev);
	}

	printf("\n do you want a crate a left node.... (y/n)");
	fflush(stdin);
	choice=getchar();
	if(choice=='y' || choice=='Y')
	{
		ptr->next=inseart(ptr->next);
	}

	return ptr;
}

kalpesh *create(kalpesh *ptr)
{
//	int value;
//
//	printf("\n Enter a value of the new node :");
//	scanf("%d",&value);
//
	if(value==ptr->number)
	{
		printf("\n Not Possible because value is a reapeat :");
	}

	else
	{
		if(value<ptr->number)
			create(ptr->prev);
		else
			create(ptr->next);
	}
}

void Display(kalpesh *ptr)
{
	int choice;

	if(ptr==NULL)
	{
		printf("\n Tree is Empty");
	}

	else
	{
		printf("\n 01. Prefix \n 02. infix \n 03.postfix");

		printf("\n Enter a choice :");
		scanf("%d",&choice);
		printf("\n A Tree value is a : \n \n");

		switch(choice)
		{
			case 1:
				prefixDisplay(ptr);
				break;

			case 2:
				infixDisplay(ptr);
				break;

			case 3:
				postfixDisplay(ptr);
				break;

			default:
				printf("\n Invalid Choice !!!");
				break;
		}
	}

}

void infixDisplay(kalpesh *ptr)
{
	if(ptr->prev!=NULL)
		infixDisplay(ptr->prev);
	printf("%d,",ptr->number);
	if(ptr->next!=NULL)
		infixDisplay(ptr->next);
}
void prefixDisplay(kalpesh *ptr)
{
	printf("%d,",ptr->number);
	if(ptr->prev!=NULL)
		prefixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		prefixDisplay(ptr->next);
}

void postfixDisplay(kalpesh *ptr)
{
	if(ptr->prev!=NULL)
		postfixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		postfixDisplay(ptr->next);
	printf("%d,",ptr->number);
}
