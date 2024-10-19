// Binary search
#include<stdio.h>
#include<conio.h>
void bubble(int[],int);
void display(int[],int);
void binary(int[],int,int);

int main()
{
	int array[100],n,i,key;
	
	printf("Enter a array index :");
	scanf("%d",&n);

	printf("Enter a finding element :");
	scanf("%d",&key);	
	
	for(i=0;i<n;i++)
	{
		printf("Enter a element a of index[%d]:",i);
		scanf("%d",&array[i]);
	}
	
	bubble(array,n);
//	printf("Sorted array is a :\n");
//	display(array,n);
	binary(array,n,key);

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

void binary(int arr[],int n, int key)
{
	int low,high,mid;
	
	low=0;
	high=n-1;
	mid=(low+high)/2;
	
	while(low<=high)
	{
		if(arr[mid]==key)
		{
			printf("Element is a founded :");
			break;
		}
		if(arr[mid]>key)
		{
			high=mid-1;
		}
		
		else
		{
			low=mid+1;
		}
		mid=(low+high)/2;
	
	}
	
	if(low>high)
	{
		printf("Element is not a found :");
	}
	else
	{
		printf("\n founded element is a %d and index is a %d",arr[mid],mid);
	}
}
