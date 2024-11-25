#include<stdio.h>
#include<conio.h>
main()
{
	int no1,no2,temp;
	printf("enter no1=");
	scanf("%d",&no1);
	printf("enter no2=");
	scanf("%d",&no2);
	temp=no1;
	no1=no2;
	no2=temp;
	printf("After swaping no1=%d",no1);
	printf("After swaping no2=%d",no2);
	getch();
}
