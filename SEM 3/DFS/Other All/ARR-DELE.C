#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[5],n,value;
	clrscr();

       // For the data enter
	for(i=0;i<5;i++)
	{

		printf("\n The value of index [%d]: ",i);
		scanf("%d",&arr[i]);
	}


	// index delet number
	printf("\n enter a index no of delet index :");
	scanf("%d",&n);

	value=arr[n];

	// printing a array

	for(i=0;i<5;i++)
	{

		if(arr[i]!=value)
		{
			printf(" %d ",arr[i]);
		}
	}

	//for the delet array value

	printf("\n The delet value is a := %d",value);

 getch();
}