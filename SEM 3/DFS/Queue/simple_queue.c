// simple queue with all operation

#include<stdio.h>
#include<conio.h>
#define n 5

int front=-1,rear=-1;
int arr[n];

void enqueue();
void dequeue();
void display();
void peek();
void exit(int);

int main()
{
	int choice,i=1;

	while(i)
	{
		printf("\n \n Queue all operation :");
		printf("\n \n 1. inseart  2. delete\n 3. display  4. peek \n 5. exite ");
		printf("\n \n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				enqueue();
				break;

			case 2:
				dequeue();
				break;

			case 3:
				display();
				break;

			case 4:
				peek();
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

void enqueue()
{
	if(rear+1==n)
		printf(" \n queue is a full");
	else
	{
		rear++;

		printf("\n Enter value :");
		scanf("%d",&arr[rear]);

		if(front==-1)
			front=0;
	}
}
void dequeue()
{
	if(front>rear)
	{
		printf("\n Queue is empty :");
	}
	else
	{
		printf("\n Delete value is %d",arr[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("\n Queue is empty :");
	}
	else
	{

		for(i=front; i<=rear; i++)
		{
			printf("\n %d",arr[i]);
		}
	}
}

void peek()
{
	printf("\n Recent value is a : %d ",arr[rear]);
}
