// This program for finding a sparse matrix

#include<stdio.h>
#include<conio.h>
void main()
{
	int mainMatrix[4][4],sparseMatrix[4][3],i,j,isZero=0;
	clrscr();

	//FOR THE INPUT MATRIX VALUE.

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter a value of index [%d][%d]:",i,j);
			scanf("%d",&mainMatrix[i][j]);
		}
	}

	// FOR THE PRINT A MAIN MATRIX

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",mainMatrix[i][j]);

		}
		printf("\n");
	}


	// LOGICAL OPARATION OF SPARSE MATRIX

	printf("\n A main matrix is a \n \n :");


	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(mainMatrix[i][j]!=0)
			{
				sparseMatrix[isZero][0]=mainMatrix[i][j];
				sparseMatrix[isZero][1]=i;
				sparseMatrix[isZero][2]=j;
				isZero++;
			}
		}
	}

	// FOR THE SPARSE MATRIX PRINTING
	printf("A sparse matrix is :");

	for(i=0;i<isZero;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d",sparseMatrix[i][j]);
		}
		printf("\n");

	}

 getch();
}