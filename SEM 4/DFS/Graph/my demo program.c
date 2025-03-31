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
		printf("\n \n \n  Graph operation is a !!!!!!!!!");
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
			addEdge(start, end);
			break;
		case 3:
			printf("\n Remove a vetices Number :");
			scanf("%d", &n);
			removeVertax(n);
			break;

		case 4:
			printf("\n Enter a start and end point for the delete it  :");
			scanf("%d %d", &start, &end);
			removeEdge(start, end);
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

void addEdge(int start, int end)
{
	if (start < 0 || end < 0 || end >= vertax || start >= vertax)
		printf("\n Invalid Destination :");

	else
	{
		arr[start][end] = 1;
		arr[end][start] = 1;

		printf("\n Edge successfully added !! \n between %d to %d", start, end);
	}
}

void removeVertax(int Number)
{
	int i, j;

	for (i = Number; i < vertax; i++)
	{
		for (j = 0; j < vertax; j++)
		{
			arr[i][j] = arr[i + 1][j];
		}
	}

	for (i = Number; i < vertax; i++)
	{
		for (j = 0; j < vertax; j++)
		{
			arr[j][i] = arr[j][i + 1];
		}
	}

	for (i = 0; i < vertax; i++)
	{
		arr[vertax - 1][i] = 0;
		arr[i][vertax - 1] = 0;
	}

	vertax--;
	printf("\n Number of vertax is a removed %d :", Number);
}
void removeEdge(int start, int end)
{
	if (start < 0 || end < 0 || end >= vertax || start >= vertax)
		printf("\n Invalid Destination :");

	else
	{
		arr[start][end] = 0;
		arr[end][start] = 0;

		printf("\n Edge successfully removed !! \n between %d to %d", start, end);
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
