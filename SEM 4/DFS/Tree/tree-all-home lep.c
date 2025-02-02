// code by the kalpesh bavaliya
// tree all operation and the displayall three method are here
// if any changes and error please leave the comment here

#include <stdio.h>
#include <malloc.h>

struct tree
{
	struct tree *prev;
	int value;
	struct tree *next;
};

typedef struct tree kalpesh;
kalpesh *root=NULL;

kalpesh *insert(kalpesh *,int );
void Display(kalpesh *);
void indisplay(kalpesh *);
void infixdisplay(kalpesh *);
void postdisplay(kalpesh *);


int main()
{
	int choice, i = 1;
	int value;
	while(i)
	{
		system("CLS");
		printf("\n 01.insert \n 02.display \n 03.exite");

		printf("\n Enter the choice :");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("\n Enter the value of root :");
				scanf("%d", &value);
				root = insert(root,value);
				break;
			case 2:
				Display(root);
				break;
			case 3:
				i=0;
				break;

			default:
				printf("I\n nvalid choice");
				break;
		}

	}
	return 0;
}

kalpesh *insert(kalpesh *ptr,int value)
{
	if (ptr == NULL)
	{
		ptr = (kalpesh *)malloc(sizeof(kalpesh));
		ptr->value = value;
		ptr->next=ptr->prev=NULL;
		return ptr;
	}

	else if(value<ptr->value)
	{
		ptr->prev=insert(ptr->prev,value);
	}
	else
	{
		ptr->next=insert(ptr->next,value);
	}
}

void infixdisplay(kalpesh *ptr)
{
	if(ptr->prev!=NULL)
		infixdisplay(ptr->prev);
	printf("\n %d",ptr->value);
	if(ptr->next)
		infixdisplay(ptr->next);
}

void prefixdisplay(kalpesh *ptr)
{

	printf("\n %d",ptr->value);
	if(ptr->prev!=NULL)
		prefixdisplay(ptr->prev);
	if(ptr->next)
		prefixdisplay(ptr->next);
}

void postfixdisplay(kalpesh *ptr)
{
	if(ptr->prev!=NULL)
		postfixdisplay(ptr->prev);
	if(ptr->next)
		postfixdisplay(ptr->next);
	printf("\n %d",ptr->value);
}

void Display(kalpesh *ptr)
{
	int choice;
	if(ptr==NULL)
	{
		printf("\n A tree is a empty !!!!");
	}
	else
	{
		printf("\n 01. Inorder \n 02. Postorder \n 03. Preorder ");

		printf("\n Enter the choice :");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1:
				infixdisplay(ptr);
				break;
			case 2:
				postfixdisplay(ptr);
				break;
			case 3:
				prefixdisplay(ptr);
				break;

			default:
				printf("\n nvalid choice");
				break;
		}
	}
}
