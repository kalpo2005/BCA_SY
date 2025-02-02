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
void infixdisplay(kalpesh *);

int main()
{
	int choice,i=1;
	while(i)
	{
		printf("\n \n A tree all operation :");

		printf("\n 01.inseart \n 02.infixdisplay \n 03.prefixdisplay \n 04.postfixdisplay \n 05.exite");

		printf("\n Enter a right choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				root=inseart(root);
				break;

			case 2:
				printf("\n A Node value is a :");
				infixdisplay(root);
				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
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

void infixdisplay(kalpesh *ptr)
{
	if(ptr==NULL)
		printf("\n A tree is a empty !!!");

	else
	{
		if(ptr->prev!=NULL)
			infixdisplay(ptr->prev);
		printf("\n %d",ptr->number);
		if(ptr!=NULL)
			infixdisplay(ptr->next);
	}
}
