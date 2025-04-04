#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tree
{
	struct tree *prev;
	int value;
	char name[100];
	char division;
	struct tree *next;
};
typedef struct tree kal;
kal *root=NULL;

kal *Inseart(kal *,int,char [],char);
void infixDisplay(kal *);
void prefixDisplay(kal *);
void Display(kal *);
void postfixDisplay(kal *);
void searching(kal *,int );
void update(kal *,kal *,int );
void updateLast(kal *,kal *,int );
void possible(int);
kal *deletion(kal *,int);
kal *whileprev(kal *);
kal *whilenext(kal *);

int main()
{
	int i=1,choice,rootCheck=1;
	int value,search;
	char division;
	char sname[100];

	while(i)
	{
//		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Inseart \n 02. Display \n 03. Searching \n 04. Deletion \n 05. Update \n 07. Exite");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\n Enter A roll number of student :");
				scanf("%d",&value);
//				fflush(stdin);
//				printf(" Enter A Name of student        :");
//				gets(sname);
//				fflush(stdin);
//				printf(" Enter A division of class      :");
//				scanf("%c",&division);

				root=Inseart(root,value,sname,division);
				break;

			case 2:
				Display(root);
				break;

			case 3:
				printf("\n Enter a searching element :");
				scanf("%d",&search);
				searching(root,search);
				break;

			case 4:
				printf("\n Enter a Delete element :");
				scanf("%d",&search);
				root=deletion(root,search);
				break;

			case 5:
				printf("\n Enter a update element :");
				scanf("%d",&search);
				update(root,NULL,search);
				break;

			case 7:
				i=0;
				break;

			default:
				printf("\n Invalid Choice !!");
				break;
		}
	}
	fflush(stdin);
	return 0;
}

kal *Inseart(kal *ptr, int value,char name[],char division)
{
	if(ptr==NULL)
	{
		ptr=(kal *)malloc(sizeof(kal));
		ptr->value=value;
		ptr->division=division;
		fflush(stdin);
		strcpy(ptr->name,name);
		ptr->next=ptr->prev=NULL;
	}
	else
	{
		if(value==ptr->value)
		{
			printf("\n A value is Alredy Exiting !!!!");
		}
		else if(value<ptr->value)
		{
			ptr->prev=Inseart(ptr->prev,value,name,division);
		}
		else
		{
			ptr->next=Inseart(ptr->next,value,name,division);
		}

	}

	return ptr;
}

void Display(kal *ptr)
{
	int choice;

	if(ptr==NULL)
	{
		printf("\n Tree is Empty");
	}

	else
	{
		printf("\n 01. Prefix \n 02. infix \n 03.postfix");

		printf("\n Enter a choice :");
		scanf("%d",&choice);

		printf("\n A Tree value is a : \n \n");

		switch(choice)
		{
			case 1:
				prefixDisplay(ptr);
				break;

			case 2:
				infixDisplay(ptr);
				break;

			case 3:
				postfixDisplay(ptr);
				break;

			default:
				printf("\n Invalid Choice !!!");
				break;
		}
	}

}

void infixDisplay(kal *ptr)
{
	if(ptr->prev!=NULL)
		infixDisplay(ptr->prev);
	printf("\n \n Student Roll Number is a : %d,",ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,",ptr->division);
	if(ptr->next!=NULL)
		infixDisplay(ptr->next);
}
void prefixDisplay(kal *ptr)
{
	printf("\n \n Student Roll Number is a : %d,",ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,",ptr->division);
	if(ptr->prev!=NULL)
		prefixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		prefixDisplay(ptr->next);
}

void postfixDisplay(kal *ptr)
{
	if(ptr->prev!=NULL)
		postfixDisplay(ptr->prev);
	if(ptr->next!=NULL)
		postfixDisplay(ptr->next);
	printf("\n \n Student Roll Number is a : %d,",ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,",ptr->division);
}

void searching(kal *ptr,int search)
{

	if(ptr==NULL)
		printf("\n Tree is a empty , Do not perform a searching !!!!!");

	else
	{
		if(ptr->value==search)
		{
			printf("\n Element is a found");
		}
		else
		{
			if(ptr->value>search)
			{
				if(ptr->prev!=NULL)
					searching(ptr->prev,search);
				else
					printf("\n Element not found !!!!");
			}
			else
			{
				if(ptr->next!=NULL)
					searching(ptr->next,search);
				else
					printf("\n Element not found !!!!");
			}
		}
	}
}

kal *deletion(kal *ptr,int search)
{
	kal *temp,*temp2;

	if(ptr==NULL)
		printf("\n Tree is a empty , Do not perform a Deletion !!!!!");

	else if(ptr->value==search)
	{
		printf("\n Node value is a  : %d",ptr->value);

		if(ptr->prev==NULL && ptr->next==NULL)
		{
			free(ptr);
			printf("\n Deletion is succesfully !!! last leaf node");
			return NULL;
		}
		else
		{
			if(ptr->next==NULL)
			{
				temp=ptr->prev;
				free(ptr);
				printf("\n Deletion is succesfully !!! right only one node");
				return temp;
			}
			else if(ptr->prev==NULL)
			{
				temp=ptr->next;
				free(ptr);
				printf("\n Deletion is succesfully !!! left only one node");
				return temp;
			}
			else
			{
				printf("\n Deletion is succesfully !!! between");

				temp=temp2=ptr->next;

				while(temp->prev!=NULL)
					temp=temp->prev;
				temp->prev=ptr->prev;
				free(ptr);
				return temp2;
			}
		}
	}
	else
	{
		if(ptr->value>search)
		{
			if(ptr->prev!=NULL)
				ptr->prev=deletion(ptr->prev,search);
			else
				printf("\n Element not found !!!!");
		}
		else
		{
			if(ptr->next!=NULL)
				ptr->next=deletion(ptr->next,search);
			else
				printf("\n Element not found !!!!");
		}
		return ptr;
	}
}

void update(kal *ptr, kal *temp,int search)
{
	int value;
	char name[100];
	char div;
	kal *tempPrev,*tempLast;
	kal *run;
	tempPrev=tempLast=run=ptr;

	if(ptr==NULL)
		printf("\n Tree is a empty , Do not perform a updating !!!!!");

	else
	{
		if(ptr->value==search)
		{
			printf("\n ptr roll is a : %d ",ptr->value);
			printf("\n Enter A update roll number of student :");
			scanf("%d",&value);
//			fflush(stdin);
//			printf(" Enter A update Name of student        :");
//			gets(name);
//			fflush(stdin);
//			printf(" Enter A update division of class      :");
//			scanf("%c",&div);

			while(tempPrev->prev!=NULL)
			{
				tempPrev=tempPrev->prev;
			}

			while(tempLast->next!=NULL)
			{
				tempLast=tempLast->next;
			}

			if(ptr->prev==ptr->next) // for the last node or only one node
			{
				if(ptr==root)
				{
					ptr->value=value;
					ptr->division=div;
					strcpy(ptr->name,name);
					possible(1);
				}
				else
				{
					if(temp->prev==ptr)
					{
						if(run->prev==temp)
						{
							if(value<temp->value && temp->prev==ptr && run->value<value)
							{
								ptr->value=value;
								ptr->division=div;
								strcpy(ptr->name,name);
								possible(1);
							}
						}
						else
						{
							whileprev(temp);
						}
						else if(temp->next==ptr)
						{
							if(value>temp->value && temp->next==ptr && run->value>value)
							{
								ptr->value=value;
								ptr->division=div;
								strcpy(ptr->name,name);
								possible(1);
							}
						}
						else
							possible(0);


					}
				}
			}
			else if(ptr->prev==NULL)
			{
				if(ptr==root)
				{
					if(value<ptr->next->value)
					{
						ptr->value=value;
						ptr->division=div;
						strcpy(ptr->name,name);
						possible(1);
					}
					else
						possible(0);
				}
				else
				{
					if(value<ptr->next->value && temp->value>value)
					{
						ptr->value=value;
						ptr->division=div;
						strcpy(ptr->name,name);
						possible(1);
					}
					else
						possible(0);
				}
			}

			else if(ptr->next==NULL)
			{
				if(ptr==root)
				{
					if(value>ptr->prev->value)
					{
						ptr->value=value;
						ptr->division=div;
						strcpy(ptr->name,name);
						possible(1);
					}
					else
						possible(0);
				}
				else
				{
					if(value>ptr->prev->value && temp->value>value)
					{
						ptr->value=value;
						ptr->division=div;
						strcpy(ptr->name,name);
						possible(1);
					}
					else
						possible(0);
				}
			}
			else
			{
				if(temp->value>value && tempPrev->value<value && ptr->prev->value<value &&ptr->next->value>value)
				{
					ptr->value=value;
					ptr->division=div;
					strcpy(ptr->name,name);
					possible(1);
				}
				else if(temp->value<value && tempLast->value>value && ptr->next->value>value &&ptr->prev->value<value)
				{
					ptr->value=value;
					ptr->division=div;
					strcpy(ptr->name,name);
					possible(1);
				}
				else
					possible(0);
			}
		}
		else
		{
			if(ptr->value>search)
			{
				if(ptr->prev!=NULL)
					update(ptr->prev,ptr,search);
				else
					printf("\n Element not found !!!!");
			}
			else
			{
				if(ptr->next!=NULL)
					update(ptr->next,ptr,search);
				else
					printf("\n Element not found !!!!");
			}
		}
	}
}

void possible(int n)
{
	if(n)
		printf("sucessfully update !!!");
	else
		printf("Not possible !!!");
}

kal *whileprev(kal *temp)
{
	kal *run=root;
	while(run->prev==temp && run->prev!=NULL)
	{
		run=run->prev;
	}
	return run;
}
kal *whilenext(kal *temp)
{
	kal *run=root;
	while(run->next==temp && run->next!=NULL)
	{
		run=run->next;
	}
	return run;
}
