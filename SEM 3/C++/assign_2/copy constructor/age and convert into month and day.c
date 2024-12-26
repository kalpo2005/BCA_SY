#include<stdio.h>
#include<conio.h>
main()
{
	int age,mul;
	printf("enter age=");
	scanf("%d",&age);
	mul=age*365;
	printf("days=%d",mul);
	mul=age*12;
	printf("month=%d"mul);
	getch();
}
