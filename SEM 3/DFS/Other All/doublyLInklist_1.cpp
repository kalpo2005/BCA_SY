// doubly linklist
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct student
{
	struct student *prev;
	int roll;
	struct student *next;
};
typedef struct student node;

int main()
{
	node *lp=NULL,*rp=NULL;
	char ch;
	int num=0;
	
	lp=(node *)malloc(sizeof(node));
	lp->prev=NULL;
	do{
		printf("Enter the value of %d node:",num+1);
		scanf("%d",&lp->roll);
		fflush(stdin);
		printf("enter choice for continue (y\n)");
		ch=getchar();
	//	scanf("%c",&ch);
		if(ch=='y')
		{
			lp->next=(node *)malloc(sizeof(node));
			lp->next->prev=lp;
			lp=lp->next;
		}
		num++;
		
	}while(ch=='y');
	
	lp->next=NULL;
	rp=lp;
	
	printf("total node is a : %d",num);
	
	return 0;
}
