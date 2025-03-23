#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

	int n,name[100],i;
	int sum=0;
	FILE *kal,*demo;

	kal=fopen("F:\\SEM 4 B-03\\DFS\\arr.txt","w");


	printf("Enter a value of array index :");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("Enter a value of index array [%d]:",i);
		scanf("%d",&name[i]);
		fprintf(kal,"enter value :%d\n",name[i]);
	}

	fclose(kal);

	demo=fopen("F:\\SEM 4 B-03\\DFS\\arr.txt","a");

	fscanf(demo,"%d",&name);
	for(i=0; i<n; i++)
	{
		sum=name[i]+sum;
	}
	printf("\n A sum of array is a : %d",sum);

	fprintf(demo,"sum is a :%d\n",sum);
	fclose(demo);

	return 0;
}
