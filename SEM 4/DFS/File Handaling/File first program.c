#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

	char name;
	FILE *kal,*demo;

	kal=fopen("F:\\SEM 4 B-03\\DFS\\file.txt","w");
	name=getchar();
	while(name!=EOF)
	{
		fputc(name,kal);
		name=getchar();
	}
	fclose(kal);
	demo=fopen("F:\\SEM 4 B-03\\DFS\\file.txt","r");
	name=fgetc(demo);

	printf("\n File string is a :\n");
	while(name!=EOF)
	{
		printf("%c",name);
		name=fgetc(demo);
	}
	fclose(demo);

	return 0;
}
