  // Insertion sorting of two array (Ascending)

#include<stdio.h>
#include<conio.h>

void insertion_ascending(float[],int);
void display(float[],int);
void insertion_descending(float[],int);

void main()
{
	int n,i,m;
	float Array[20],Arr[20];
	clrscr();

	printf("Enter a number for the first array index :");
	scanf("%d",&n);
	printf("Enter a number for the second array index :");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
		printf("Enter a number first array of index[%d] :",i);
		scanf("%f",&Array[i]);
	}

	//For the second array input

	for(i=0;i<m;i++)
	{
		printf("Enter a number second array of index[%d] :",i);
		scanf("%f",&Arr[i]);
	}

	printf("\n\n Before the sorting\n \n");
	display(Array,n);
	insertion_ascending(Array,n);
	display(Array,n);
	insertion_descending(Array,n);
	display(Array,n);

	printf("\n\n\n For the second array sorting :");

	printf("\n\n Before the sorting\n \n");
	display(Arr,m);
	insertion_ascending(Arr,m);
	display(Arr,m);
	insertion_descending(Arr,m);
	display(Arr,m);


 getch();
}
// For the Array sorting :

void insertion_ascending(float Arr[],int n)
{
	int i;
	float temp,pointer;

	printf("\n\n After the Ascending sorting\n");

	for(i=0;i<n;i++)
	{
		temp=Arr[i];
		pointer=i-1;

		// Logical part of insertion sorting

		while(pointer>=0 && temp<Arr[pointer]) // < for the ascending and > for the descending
		{
			Arr[pointer+1]=Arr[pointer];
			pointer--;
		}

		Arr[pointer+1]=temp;
	}

}
// For the Array printing :

void display(float ArrDisplay[],int n)
{

	int i;

	// For the pritnting a array

      //	printf("\n Aftetr Sorting: \n ");

	for(i=0;i<n;i++)
	{
		printf("\n %f ",ArrDisplay[i]);
	}

}

void insertion_descending(float Arr[],int n)
{
	int i;
	float temp,pointer;

	printf("\n\n After the descending sorting\n ");

	for(i=0;i<n;i++)
	{
		temp=Arr[i];
		pointer=i-1;

		// Logical part of insertion sorting

		while(pointer>=0 && temp>Arr[pointer]) // < for the ascending and > for the descending
		{
			Arr[pointer+1]=Arr[pointer];
			pointer--;
		}

		Arr[pointer+1]=temp;
	}

}