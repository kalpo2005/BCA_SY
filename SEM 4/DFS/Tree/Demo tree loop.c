#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct tree
{
	struct tree *prev;
	int value;
	struct tree *next;
};
typedef struct tree kal;
kal *lp=NULL,*rp=NULL;

void Inseart(kal *);
void Display(kal *);

int main()
{
	int i=1,choice,rootCheck=1;

	while(i)
	{
		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Inseart \n 02. Display \n 03. Exit");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				Inseart(lp);
				getch();
				break;

			case 2:
				Display(lp);
				break;

			case 3:
				i=0;
				break;

			default:
				printf("\n invalid Choice !!");
				break;
		}
	}
	return 0;
}

void Inseart(kal *ptr) 
{
	int number;
	char isYes;


	printf("\n Enter the value of root :");
	scanf("%d",&number);

	if(ptr==NULL)
	{
		ptr=(kal *)malloc(sizeof(kal));
		ptr->value=number;
		ptr->next=ptr->prev=NULL;
		lp=ptr;
	}
	do
	{
		printf("\n Do you want a continue .....(y/n) :");
		fflush(stdin);
		isYes=getchar();

		if(isYes=='Y' || isYes=='y')
		{
			printf("\n Enter the value of root :");
			scanf("%d",&number);

			if(number<ptr->value)
			{
				ptr->prev=(kal *)malloc(sizeof(kal));
				ptr=ptr->prev;
				ptr->value=number;
				ptr->next=ptr->prev=NULL;
			}
			else
			{
				ptr->next=(kal *)malloc(sizeof(kal));
				ptr=ptr->next;
				ptr->value=number;
				ptr->next=ptr->prev=NULL;
			}
		}
	}
	while(isYes=='Y' || isYes=='y');
}

void Display(kal *ptr)
{

	if(ptr==NULL)
	{
		printf("\n Tree is Empty");
	}
	else
	{
		if(ptr->prev!=NULL)
			printf("\n A prev node is a : %d ",ptr->prev->prev->value);
		printf("\n A root node is a : %d ",ptr->value);
		if(ptr->next!=NULL)
			printf("\n A next node is a : %d ",ptr->prev->next->value);
	}
	getch();
}

