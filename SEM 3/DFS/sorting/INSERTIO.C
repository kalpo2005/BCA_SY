// Insertion sorting of array (Ascending)

#include<stdio.h>
//#include<conio.h>

void insertion_ascending(float[],int);
void display(float[],int);
void insertion_descending(float[],int);

int main()
{
	int n,i;
	float Array[20];
	//clrscr();

	printf("Enter a number for the index :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a number of index[%d] :",i);
		scanf("%f",&Array[i]);
	}

	printf("\n\n Before the sorting\n \n");
	display(Array,n);
	insertion_ascending(Array,n);
	printf("\n\n After the Ascending sorting");
	display(Array,n);
	insertion_descending(Array,n);
	printf("\n\n After the descending sorting");
	display(Array,n);


 return 0;
}
// For the Array sorting :

void insertion_ascending(float Arr[],int n)
{
	int i;
	float temp,pointer;

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
