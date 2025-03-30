#include<stdio.h>
#include<conio.h>
int max();
main()
{
	int mx;
	mx=max();
	printf("max no=%d",mx);
}
int max()
{
	int a,b,temp;
	printf("enter no1=");
	scanf("%d",&a);
	printf("enter no2=");
	scanf("%d",&b);
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
