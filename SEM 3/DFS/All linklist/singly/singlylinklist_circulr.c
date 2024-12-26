// singly linklist with all operation

#include<stdio.h>
#include<malloc.h>
struct student
{
	int roll;
	struct student *next;
};

typedef struct student node;
node *new1,*start=NULL;
int num=0;
void create(node *);
void display(node *);
void inseart_first(node *);
void inseart_last(node *);
void inseart_position(node *);
void delete_first(node *);
void delete_last(node *);
void delete_position(node *);
void search(node *);
void update(node *);
void destroy(node *);

void exit(int);
void totalnode(int);
int main()
{
	int choice;

	while(1)
	{
		printf("\n \n singly linklist all operation : \n");
		printf("\n 1. create \t 2. inseart first \n 3. inseart last 4. inseart position \n 5. Display \t 6. exite \n 7. Total node \t");
		printf(" 8. Delete First \n 9. Delete last  10. Delete position \n 11. search \t 12. update \n 13. destroys");
		printf("\n \n Enter your choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				start=(node *)malloc(sizeof(node));
				create(start);
				break;
			case 2:
				inseart_first(start);
				break;
			case 3:
				inseart_last(start);
				break;
			case 4:
				inseart_position(start);
				break;
			case 5:
				display(start);
				break;
			case 6:
				exit(0);
				break;
			case 7:
				totalnode(num);
				break;

			case 8:
				delete_first(start);
				break;

			case 9:
				delete_last(start);
				break;

			case 10:
				delete_position(start);
				break;

			case 11:
				search(start);
				break;

			case 12:
				update(start);
				break;

			case 13:
				destroy(start);
				break;

			default:
				break;
		}
	}
	return 0;
}
void create(node *ptr)
{
	char isYes;
	do
	{
		printf("\n Enter a new node value :");
		scanf("%d",&ptr->roll);
		printf("For continue ....y/n :");
		fflush(stdin);
		isYes=getchar();

		if(isYes=='y' || isYes=='Y')
		{
			ptr->next=(node *)malloc(sizeof(node));
			ptr=ptr->next;
			ptr->next=start;
		}
		num++;
	}
	while(isYes=='y' || isYes=='Y');
}

void display(node *ptr)
{
	if(ptr==NULL)
	{
		printf("\n List is empty\n ");
	}
	else
	{
		while(ptr->next!=start)
		{
			printf("\n %d",ptr->roll);
			ptr=ptr->next;
		}
		printf("\n %d",ptr->roll);
	}
}
void inseart_first(node *ptr)
{
	new1=(node *)malloc(sizeof(node));
	new1->next=NULL;
	printf("\n Enter a new node value :");
	scanf("%d",&new1->roll);

	if(ptr==NULL)
	{
		start=new1;
		start->next=start;
		num++;
	}
	else
	{
		new1->next=start;
		num++;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		start=new1;
	}
}
void inseart_last(node *ptr)
{
	new1=(node *)malloc(sizeof(node));
	new1->next=start;
	printf("\n Enter a new node value :");
	scanf("%d",&new1->roll);

	if(ptr==NULL)
	{
		start=new1;
		start->next=start;
		num++;
	}
	else
	{
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		num++;
	}
}

void inseart_position(node *ptr)
{
	int position,count=2;
	new1=(node *)malloc(sizeof(node));
	new1->next=NULL;
	printf("\n Enter a new node value :");
	scanf("%d",&new1->roll);
	printf("\n Enter a position for inseart:");
	scanf("%d",&position);


	if(position==1)
	{
		inseart_first(start);

	}
	else
	{
		while(count<position && ptr->next!=start)
		{
			ptr=ptr->next;
			count++;
		}
//		printf("\n %d -----",count);
//		printf("\n position  %d ----- ",position);
//		printf("\n------ total roll %d",ptr->roll);

		if(position>count)
		{
			printf("\n Not possible ");
		}
		else if(position<count)
		{
			inseart_last(start);
		}
		else
		{
			new1->next=ptr->next;
			ptr->next=new1;
			num++;
		}
	}
}
void totalnode(int n)
{
	printf("\n Total node is a : %d",n);
}

void delete_first(node *ptr)
{
	if(ptr==NULL)
	{
		printf("\n List is a empty");
	}
	else
	{
		start=start->next;
		free(ptr);
		num--;
	}
}

void delete_last(node *ptr)
{
	if(ptr==NULL)
	{
		printf("\n List is a empty");
	}
	else if(ptr->next==NULL)
	{
		free(ptr);
		start==NULL;

	}
	else
	{
		while(ptr->next->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
		free(ptr->next);
		num--;
	}
}

void delete_position(node *ptr)
{
	int position,count=2;
	node *temp;
	printf("Enter a position you can delete :");
	scanf("%d",&position);

	if(ptr==NULL)
	{
		printf("\n List is a empty :");
	}
	else if(position==1)
	{

		delete_first(start);
	}

	else if(position<=num)
	{
		while(position>count && ptr->next!=NULL)
		{
			count++;
			ptr=ptr->next;
		}
		temp=ptr->next;
		if(ptr->next==NULL)
		{
			delete_last(start);
		}
		else
		{
			ptr->next=ptr->next->next;
			free(temp);
			num--;
		}
	}
	else
	{
		printf("\n Note possible :");
	}
}


void search(node *ptr)
{
	int search;
	printf("\n Enter a search element :");
	scanf("%d",search);

	while(search!=ptr->roll && ptr!=NULL)
	{
		ptr=ptr->next;
	}

	if(ptr==NULL)
	{
		printf("\n Element was not search");
	}
	else
	{
		printf("\n search Element is a : %d",ptr->roll);
	}
}

void update(node *ptr)
{
	int up;
	printf("enter a update roll :");
	scanf("%d",&up);
	while(up!=ptr->roll && ptr!=NULL)
	{
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("\n Note possible :");
	}
	else
	{
		printf("\n Element for update value");
		scanf("%d",&ptr->roll);
	}
}
void destroy(node *ptr)
{
	node *temp;
	while(ptr!=NULL)
	{
		temp=ptr;
		start=start->next;
		ptr=ptr->next;
		free(temp);
	}
	if(start==NULL)
	{
		printf("\n pointer is empty :");
	}
}


