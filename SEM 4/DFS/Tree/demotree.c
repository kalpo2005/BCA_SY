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
kal *lp=NULL;

void Inseart(kal *);
void Display(kal *);

int main()
{
	int i=1,choice,rootCheck=1;

	while(i)
	{
		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Inseart \n 02. Display \n 03. Exite");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:

				Inseart(lp);
				rootCheck=0;
//				getch();
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

	printf("\n Enter the value of root :");
	scanf("%d",&number);

	if(ptr==NULL)
	{
		lp=(kal *)malloc(sizeof(kal));
		ptr=lp;
		ptr->value=number;
		ptr->next=ptr->prev=NULL;
	}

	else if(number<ptr->value)
	{
		ptr->prev=(kal *)malloc(sizeof(kal));
		ptr=ptr->prev;
		ptr->value=number;
		ptr->next=ptr->prev=NULL;
		printf("\n A next node is a : %d ",ptr->value);
	}
	else
	{
		ptr->next=(kal *)malloc(sizeof(kal));
		ptr=ptr->next;
		ptr->value=number;
		ptr->next=ptr->prev=NULL;
		printf("\n A next node is a : %d ",ptr->value);
	}
}

void Display(kal *ptr)
{
	kal *ptrprev,*ptrnext;
	ptrprev=ptr->prev;
	ptrnext=ptr->next;

	if(ptr==NULL)
	{
		printf("\n Tree is Empty");
	}
	else
	{
		printf("\n A prev node is a : %u ",ptrprev->value);
		printf("\n A root node is a : %d ",ptr->value);
		printf("\n A next node is a : %d ",ptrnext->value);
	}
	getch();
}

