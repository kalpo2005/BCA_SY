// For the demo of the structure
#include<stdio.h>
#include<conio.h>

struct student
{
	int rollNo,mark[3],total;
	char name[20];

}s1,s2;

void main()
{
	int i;
	clrscr();

	printf("ENter a student Detail  :");
	printf("\n Enter a student Roll number:");
	scanf("%d",&s1.rollNo);
	printf("\n Enter a student name :");
	scanf("%s",s1.name);
	for(i=0;i<3;i++)
	{
		printf("\n Enter a student marks for sub-%d:",i);
		scanf("%d",&s1.mark[i]);
	}
	for(i=0;i<3;i++)
	{
		s1.total=s1.total+s1.mark[i];
	}

	printf("\n \n student detail is a :");
	printf("\n Student  roll %d :",s1.rollNo);
	printf("\n Student maks total %s :",s1.name);
	printf("\n Student maks total %d :",s1.total);

 getch();
}