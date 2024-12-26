// This program for REVERSE ARRAY

#include<stdio.h>
#include<conio.h>
void main()
{
	char mainArray[100];
	int n,i;
	clrscr();

	//FOR THE INPUT ARRAY VALUE.

	printf(" \n Enter a value for index input: ");
	scanf("%d",&n);

	printf("Enter a value of index :");
	scanf("%s",mainArray);


	// FOR THE RTEVERSE ARRAY PRINT

	printf("\n \nThe reverse Array is : \n");

	for(i=n-1;i>=0;i--)
	{
		printf("%c",mainArray[i]);
	}

 getch();
}