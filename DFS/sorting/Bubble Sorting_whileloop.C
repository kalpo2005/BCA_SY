#include<stdio.h>
#include<conio.h>
void bubble(int[],int);
void display(int[],int);
int main()
{
	int array[100],n,i;
	
	printf("Enter a array index :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a element a of index[%d]:",i);
		scanf("%d",&array[i]);
	}
	
	bubble(array,n);
	printf("Sorted array is a :\n");
	display(array,n);
 return 0;
}

void bubble(int arr[],int n)
{
	int i,temp,count,swap=1;
	
	while(swap)
	{
		count=0;
		for(i=0;i<n-1;i++)
		{
	
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				count++;
			}
		}
		if(count==0)
		{
			swap=0;
		}
	}
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	//	printf("Enter a element a of index[%d]",i);
		printf("%d \n",arr[i]);
	}
}
