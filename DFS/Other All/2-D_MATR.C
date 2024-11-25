#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[3][3];
	clrscr();
       // For the data enter
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{       printf("\n The value of index [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}

	}

	// for the printing

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",arr[i][j]);
		}

		printf("\n");

	}

 getch();
}