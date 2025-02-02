#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct student
{
	struct student *prev;
	int roll;
	struct student *next;
};

typedef struct student kalpesh;
kalpesh *lp=NULL,*rp=NULL;

void Create(kalpesh *);
void Display(kalpesh *, kalpesh *);

int main()
{
	int i=1,choice;

	while(i)
	{
		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Createe \n 02. Display \n 03. Exite");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				lp=(kalpesh *)malloc(sizeof(kalpesh));
				Create(lp);
				break;

			case 2:
				Display(lp,rp);
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

void Create(kalpesh *ptr)
{
	char isYes;
	ptr->prev=NULL;

	do
	{
		printf("\n Enter A student Roll No :");
		scanf("%d",&ptr->roll);

		printf("Continue (Y/N)....");
		fflush(stdin);
		isYes=getchar();


		if(isYes=='y'||isYes=='Y')
		{
			ptr->next=(kalpesh *)malloc(sizeof(kalpesh));
			ptr->next->prev=ptr;
			ptr=ptr->next;
			ptr->next=NULL;
		}
	}
	while(isYes=='y'|| isYes=='Y');
	rp=ptr;

}
void Display(kalpesh *ptrlp , kalpesh *ptrrp)
{
	int printChoice;
	if(ptrlp==NULL)
	{
		printf("\n List is a Empty !!!");
	}
	else
	{
		printf("\n \n 01. LP to RP \n 02.3 RP to LP");
		printf("\n \n Enter a choice for the Display :");
		fflush(stdin);
		scanf("%d",&printChoice);

		switch(printChoice)
		{
			case 1:
				printf("\n Roll Number is a  :");
				while(ptrlp!=NULL)
				{
					printf("\n %d",ptrlp->roll);
					ptrlp=ptrlp->next;
				}
				break;

			case 2 :
				printf("\n Roll Number is a  :");
				while(ptrrp!=NULL)
				{
					printf("\n %d",ptrrp->roll);
					ptrrp=ptrrp->prev;
				}
				break;

			default:
				printf("\n invalid Choice !!");
				break;
		}
		getch();

	}
}
