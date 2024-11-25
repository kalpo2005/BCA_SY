// selection sort

#include<stdio.h>
#include<conio.h>

void display(int[],int);
void selection_sort(int[],int);
int main()
{
	int arr[100],n,i;
	//clrscr();

	printf("Enter a index number :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a element of [%d]:",i);
		scanf("%d",&arr[i]);
	}
	 selection_sort(arr,n);
	 printf("\n sorted array is a :");
	 display(arr,n);



 return 0;
 }

void display(int array[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n %d",array[i]);
	}

}

void selection_sort(int arr[],int n)
{
	int temp,index,i,j;

	// for the selection sort

	for(i=0;i<n-1;i++)
	{
		index=i;

		for(j=i+1;j<n;j++)
		{
			if(arr[index]>arr[j])
			{
				index=j;
			}
		}
		if(index!=i)
		{
			temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}

	}
}
