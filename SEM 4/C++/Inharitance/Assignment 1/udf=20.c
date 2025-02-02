#include<stdio.h>
#include<conio.h>
int max(int a,int b);
main()
{
	int n1,n2,ans;
	printf("enter no1=");
	scanf("%d",&n1);
	printf("enter no2=");
	scanf("%d",&n2);
	ans=max(n1,n2);
	printf("max no=%d");
}
int max(int a,int b)
{
	int temp;
	if(a>b)
	{
		temp=a;
	}
	else
	{
		temp=b;
	}
	return temp;
}

 

