// A progrma for the insert after the array value

#include<stdio.h>
#include<conio.h>
void main()
{
	float array[20];
	int i,n,afterIndex;
	char isYes;
	clrscr();


	printf("Enter the value of index :");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		printf("\n Enter the index of [%d]value:",i);
		scanf("%f",&array[i]);
	}

	printf("\n If you can add more element Y - N :");

	scanf("%c",&isYes);

	if(isYes=='Y')
	{
		printf("\n How many index you can add:");
		scanf("%d",&afterIndex);

		for(i=n;i<n+afterIndex;i++)
		{
			printf("\n Enter the index of [%d] value:",i);
			scanf("%f",&array[i]);
		}

	}

      /*	// Printing the array

	for(i=0;i<n+afterIndex;i++)
	{
		printf("\n %f",array[i]);
	}*/

 getch();
}
