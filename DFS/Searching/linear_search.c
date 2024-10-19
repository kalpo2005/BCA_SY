//linear search

#include<stdio.h>
#include<conio.h>
void linear(int[],int,int);

int main()
{
	int n,array[100],i;
	int key;
	printf("Enter a index of element :");
	scanf("%d",&n);

	printf("Enter a element for search  :");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		printf("enter element of index [%d]:",i);
		scanf("%d",&array[i]);
	}
	
	linear(array,n,key);
	return 0;
}

void linear(int arr[],int num,int key)
{
	int i;
	int flag=0;
	for(i=0;i<num;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
		printf("element is a found at a index [%d],element is a %d",i,arr[i]);
	}
	else
	{
		printf("Element is not a found");
	}
}
