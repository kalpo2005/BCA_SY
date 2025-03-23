#include<stdio.h>
#include<string.h>

int main()
{
	FILE *file;
	int n,i,data[3];

	file=fopen("binaydata.txt","a");
	printf("Enter a  array size :");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("Enter a element of [%d] :",i);
		scanf("%d",&data[i]);

	}
	printf("%d",sizeof(int)*n);

	fwrite(&data,sizeof(int)*n,n,file);
	fread()

	fclose(file);

	return 0;
}
