#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int arr[MAX][MAX];
int vertax = 0;

void addVertax(int);
void addEdge(int, int);
void removeVertax(int);
void removeEdge(int, int);
void displayMatrix();

int main()
{

	int i = 1, choice;
	int start, end;
	int n;

	while (i)
	{
		printf("\n Graph operation is a !!!!!!!!!");
		printf("\n 1.Add a vertices :");
		printf("\n 2.Add a edge :");
		printf("\n 3.remove vertices :");
		printf("\n 4.remove edge :");

		printf("\n Enter a your choice :");
		scanf("%d", &choice);

		switch (choice)

		{
		case 1:
			printf("\n Add a vetices Number :");
			scanf("%d", &n);
			addVertax(n);
			break;

		case 2:
			printf("\n Enter a start and end point  :");
			scanf("%d %d", &start, &end);
			break;

		case 5:
			displayMatrix();
			break;
			
		case 10:
			printf("\n Program Terminated :");
			i = 0;
			break;

		default:
			printf("\n in valid choice, select a right choice !!!!");
			break;
		}
	}

	return 0;
}

void addVertax(int Number)
{
	int i;
	if (Number + vertax > MAX)
		printf("\n Please enter a valid count :");
	else
	{
		for (i = 0; i < Number; i++)
		{
			vertax++;
			printf("\n New add vartext is a %d :", vertax - 1);
		}
	}
}

void displayMatrix()
{
	int i, j;

	for (i = 0; i < vertax; i++)
	{
		for (j = 0; j < vertax; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
}
