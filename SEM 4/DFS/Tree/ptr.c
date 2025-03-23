#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int*ptr;
	a=10;
	ptr=&a;
	printf("%d",*ptr);
	printf("%u",*ptr);
	return(0);
	
}
