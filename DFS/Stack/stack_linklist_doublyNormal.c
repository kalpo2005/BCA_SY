//doblylinklist sir demo all posible insertoin done

#include<stdio.h>
#include<conio.h>
//#include<string.h>
#include<malloc.h>

struct student
{
	struct student *prev;
	int roll;
	struct student *next;
};

typedef struct student node;
node *lp=NULL,*rp=NULL;
void push(node *);
void display(node *);
void exit(int);
void totalnode();
void pop(node *);
void peep(node *);
void update(node *);
void destroy(node *);
int num=0;
int main()
{
	int s,i=1;
	while(i)
	{
		printf("\n \n Linklist all operation : ");
		printf("\n \n 01. insert \t  02. delete \n 03. search \t  04. display \n 05.exite");
		printf("\n \n Enter your choice : ");
		scanf("%d",&s);

		switch(s)
		{
			case 1:
				push(lp);
				break;

			case 2:
				pop(lp);
				break;

			case 3:
				peep(lp);
				break;

			case 4:
				display(lp);
				break;

			case 5:
				printf("\n exit :");
				exit(0);
				break;

			default:
				printf("\n Invalid choice :");
				break;
		}
	}


	return 0;
}

void push(node *ptr)
{
	node *new1;
	new1=(node *)malloc(sizeof(node));
	new1->prev=new1->next=NULL;
	printf("enter a student roll number :");
	scanf("%d",&new1->roll);

	if(ptr==NULL)
	{
		lp=rp=new1;
		num++;
	}
	else
	{
		rp->next=new1;
		new1->prev=rp;
		rp=new1;
		num++;
	}
}

void pop(node *ptr)
{
	if(ptr==NULL)
	{
		printf("\n \n List is a empty :");
	}
	else
	{
		ptr=rp;
		if(rp==lp)
		{
			rp=lp=NULL;
			free(ptr);
			num--;
		}
		else
		{
			rp=rp->prev;
			rp->next=NULL;
			free(ptr);
			num--;
		}
	}
}

void peep(node *ptr)
{
	int search;
	printf("enter a search roll :");
	scanf("%d",&search);
	if(ptr==NULL)
	{
		printf("\n Note possible list is empty :");
	}
	else
	{
		while(ptr!=NULL)
		{
			if(search==ptr->roll)
			{
				printf("\n Element is a found %d",ptr->roll);
				break;
			}
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			printf("\n Note available:");
		}
	}
}
void display(node *ptr)
{
	if(ptr==NULL)
	{
		printf("\n List is a empty :");
	}

	else
	{
		while(ptr!=NULL)
		{
			printf("\n Student roll Number is a : %d",
			       ptr->roll);
			ptr=ptr->next;
		}
	}
}

