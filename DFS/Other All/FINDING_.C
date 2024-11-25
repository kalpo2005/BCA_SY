#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int arr[5],add_start,index_start,index_find,final_add;
	clrscr();

	printf("\n Enter a array value :\n ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	add_start=&arr[0];

	//  printf(" the value of a %d",sizeof(arr[0]));


	  printf("\n Enter a starting index value :");
	  scanf("%d",&index_start);
	  printf("\n Enter a finding index value :");
	  scanf("%d",&index_find);


	  // formula of finding address

	  final_add=add_start+2*(index_find-index_start);

	  // Print the finding index address
	  printf("\n The index value i=%d",final_add);


getch();
}