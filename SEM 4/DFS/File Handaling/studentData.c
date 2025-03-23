#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	int rollNumber;
	char name[100];
	char address[100];
} s;


int main()
{
	FILE *kal,*bav;
	char isYes='y',k;


	kal=fopen("studentdata.txt","w");
	while(isYes=='Y' || isYes=='y')
	{
		printf("\nEnter a student Roll NO:");
		scanf("%d",&s.rollNumber);
		printf("Enter a student Name:");
		fflush(stdin);
		gets(s.name);
		printf("Enter a student Address:");
		fflush(stdin);
		gets(s.address);

		fprintf(kal,"\n Roll Number : %d",s.rollNumber);
		fprintf(kal,"\n Student Name : %s",s.name);
		fprintf(kal,"\n Student Address : %s \n",s.address);


		printf("\n do you want a continue....y/n: ");
		scanf("%c",&isYes);

	}
	fclose(kal);
	bav=fopen("studentdata.txt","r");
	k=fgetc(bav);
	while(!feof(bav))
	{
		k=fgetc(bav);
		printf("%c",k);
	}
	fclose(bav);


	return 0;
}
