// stack using a array


#include<stdio.h>
#include<conio.h>
#define n 5

int top=-1;
int arr[n];
void exit(int);
void push();
void pop();
void peep();
void display();
void destroy();
int main()
{
	int i=1,choice;

	while(i)
	{
		printf(" \n \n stack all operation :\n");

		printf("\n 01. Push  \t 02. pop\n 03. peep  \t 04. display  \n 05. Exite \n");

		printf("\n Enter a choice :");
		scanf("%d",&choice);
		switch(choice)
		{

			case 1:
				push();
				break;

			case 2:
				pop();
				break;

			case 3:
				peep();
				break;

			case 4:
				display();
				break;

			case 5:
				exit(0);
				break;

			default:
				printf("\n invalid choice :");
				break;
		}
	}

	return 0;
}
void push()
{
	if (top>=n-1)
	{
		printf("\n stack is a full :");
	}
	else
	{
		top++;
		printf("\n Enter a value :");
		scanf("%d",&arr[top]);
	}
}

void display()
{
	int i;
	if(top<0)
	{
		printf("\n stack is a Empty :");
	}
	else
	{
		for(i=0; i<=top; i++)
		{
			printf("\n %d",arr[i]);
		}
	}


}

void pop()
{
	if (top<0)
	{
		printf("\n Stack is empty :");
	}
	else
	{
		printf("\n Delete value is %d :",arr[top]);
		top--;
	}
}

void peep()
{

	int search,i,f=0;
	printf("\n Enter a search element");
	scanf("%d",&search);
	for(i=0; i<=top; i++)
	{
		if(search==arr[i])
		{
			f++;
		}
	}
	if(f!=0)
	{
		printf("\n Element is a found times- %d :",f);
	}
	else
	{
		printf("Element is  not found");
	}
}
