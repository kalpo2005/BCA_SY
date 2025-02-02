#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct tree
{
	struct tree *prev;
	int value;
	struct tree *next;
};
typedef struct tree kal;
kal *root=NULL;

kal *Inseart(kal *,int);
void infixDisplay(kal *);
void prefixDisplay(kal *);
void Display(kal *);
void postfixDisplay(kal *);

int main()
{
	int i=1,choice,rootCheck=1;
	int value;

	while(i)
	{
//		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Inseart \n 02. Display \n 03. Exite");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\n Enter the value of root :");
				scanf("%d",&value);

				root=Inseart(root,value);
				rootCheck=0;
				break;

			case 2:
				Display(root);
//				getch();
				break;

			case 3:
				i=0;
				break;

			default:
				printf("\n Invalid Choice !!");
				break;
		}
	}
	return 0;
}

kal *Inseart(kal *ptr, int value)
{
	if(ptr==NULL)
	{
		ptr=(kal *)malloc(sizeof(kal));
		ptr->value=value;
		ptr->next=ptr->prev=NULL;
	}
	else
	{
		if(value==ptr->value)
		{
			printf("\n A value is Alredy Exiting !!!!");
		}
		else if(value<ptr->value)
		{
			ptr->prev=Inseart(ptr->prev,value);
		}
		else
		{
			ptr->next=Inseart(ptr->next,value);
		}

	}

	return ptr;
}

void Display(kal *ptr)
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

void infixDisplay(kal *ptr)
{
	if(ptr->prev!=NULL)
		infixDisplay(ptr->prev);
	printf("%d,",ptr->value);
	if(ptr->next!=NULL)
		infixDisplay(ptr->next);
}
void prefixDisplay(kal *ptr)
{
	printf("%d,",ptr->value);
	if(ptr->prev!=NULL)
		prefixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		prefixDisplay(ptr->next);
}

void postfixDisplay(kal *ptr)
{
	if(ptr->prev!=NULL)
		postfixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		postfixDisplay(ptr->next);
	printf("%d,",ptr->value);
}

