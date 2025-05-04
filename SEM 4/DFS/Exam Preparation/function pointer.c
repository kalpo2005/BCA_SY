#include<stdio.h>
#include<string.h>

void show(char *kal)
{
	printf("text is a : %s",kal);
}

int main()
{
	char kalpesh[100];
	gets(kalpesh);
	show(kalpesh);
	
	return 0;
}
