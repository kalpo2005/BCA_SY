// doblylinklist sir demo all posible insertoin done

#include <stdio.h>
#include <conio.h>
// #include<string.h>
#include <malloc.h>

struct student
{
	struct student *prev;
	int roll;
	struct student *next;
};

typedef struct student node;
node *lp = NULL, *rp = NULL;
void create(node *);
void insertfirst(node *);
void insertlast(node *);
void display(node *);
void insertbefore(node *);
void insertafter(node *);
void insertposition(node *);
void exit(int);
void totalnode();
void delete_first(node *);
void delete_before(node *);
void delete_after(node *);
void delete_last(node *);
void delete_position(node *);
void search(node *);
void update(node *);
void destroy(node *);
int num = 0;
int main()
{
	int s, i = 1;
	while (i)
	{
		printf("\n \n Linklist all operation : ");
		printf("\n \n 01. create \t  02. insert first \n 03. inseart last 04. display \n 05.insert before 06. insert after \n 07. position \t  08. Total Node \n 09. Exit");
		printf("\t  10. delete first \n 11. delete last  12. delete position \n 13. search \t  14. update \n 15. Destroy \t  16.delete before \n 17. Delete after");
		printf("\n \n Enter your choice : ");
		scanf("%d", &s);

		switch (s)
		{
		case 1:
			lp = (node *)malloc(sizeof(node));
			create(lp);
			break;

		case 2:
			insertfirst(lp);
			break;
		case 3:
			insertlast(lp);
			break;
		case 4:
			display(lp);
			break;

		case 5:
			insertbefore(lp);
			break;

		case 6:
			insertafter(lp);
			break;

		case 7:
			insertposition(lp);
			break;

		case 8:
			totalnode();
			break;

		case 9:
			printf("\n exit :");
			exit(0);
			break;

		case 10:
			delete_first(lp);
			break;

		case 11:
			delete_last(lp);
			break;
		case 12:
			delete_position(lp);
			break;
		case 13:
			search(lp);
			break;
		case 14:
			update(lp);
			break;
		case 15:
			destroy(lp);
			break;

		case 16:
			delete_before(lp);
			break;

		case 17:
			delete_after(lp);
			break;

		default:
			// exit();
			break;
		}
	}

	return 0;
}

void create(node *ptr)
{
	char isYes;

	do
	{
		printf("enter a student roll number :");
		scanf("%d", &ptr->roll);

		printf("\n for a continue y/n  :");
		fflush(stdin);
		isYes = getchar();

		if (isYes == 'y' || isYes == 'Y')
		{
			ptr->next = (node *)malloc(sizeof(node));
			ptr->next->prev = ptr;
			ptr = ptr->next;
		}
		num++;
	} while (isYes == 'y' || isYes == 'Y');
	ptr->next = NULL;
	rp = ptr;
}

void insertfirst(node *ptr)
{
	node *new1;
	new1 = (node *)malloc(sizeof(node));
	new1->prev = new1->next = NULL;
	printf("enter a student roll number :");
	scanf("%d", &new1->roll);
	if (ptr == NULL)
	{
		lp = rp = new1;
		num++;
	}
	else
	{
		ptr->prev = new1;
		new1->next = ptr;
		lp = new1;
		num++;
	}
}

void insertlast(node *ptr)
{
	node *new1;
	new1 = (node *)malloc(sizeof(node));
	new1->prev = new1->next = NULL;
	printf("enter a student roll number :");
	scanf("%d", &new1->roll);
	rp->next = new1;

	if (ptr == NULL)
	{
		lp = rp = new1;
		num++;
	}
	else
	{
		rp->next = new1;
		new1->prev = rp;
		rp = new1;
		num++;
	}
}
void display(node *ptr)
{
	if (ptr == NULL)
	{
		printf("\n List is a empty :");
	}

	else
	{
		while (ptr != NULL)
		{
			printf("\n Student roll Number is a : %d",
				   ptr->roll);
			ptr = ptr->next;
		}
	}
}

void insertbefore(node *ptr)
{
	node *new1;
	int element;
	new1 = (node *)malloc(sizeof(node));
	new1->prev = new1->next = NULL;
	printf("enter a student roll number :");
	scanf("%d", &new1->roll);
	printf("Enter a roll number for before :");
	scanf("%d", &element);

	while (ptr->roll != element && ptr != NULL)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		lp = rp = new1;
		num++;
	}
	else if (ptr == lp)
	{
		new1->next = ptr;
		ptr->prev = new1;
		lp = new1;
		num++;
	}
	else
	{
		ptr->prev->next = new1;
		new1->prev = ptr->prev;
		new1->next = ptr;
		ptr->prev = new1;
		num++;
	}
}

void insertafter(node *ptr)
{
	node *new1;
	int element;
	new1 = (node *)malloc(sizeof(node));
	new1->prev = new1->next = NULL;
	printf("enter a student roll number :");
	scanf("%d", &new1->roll);
	printf("Enter a roll number for after :");
	scanf("%d", &element);

	while (ptr->roll != element && ptr != NULL)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		lp = rp = new1;
		num++;
	}
	else if (ptr == rp)
	{
		new1->prev = ptr;
		ptr->next = new1;
		rp = new1;
		num++;
	}
	else
	{
		ptr->next->prev = new1;
		new1->next = ptr->next;
		new1->prev = ptr;
		ptr->next = new1;
		num++;
	}
}

void insertposition(node *ptr)
{
	node *new1;
	int position, count = 2;
	new1 = (node *)malloc(sizeof(node));
	new1->prev = new1->next = NULL;
	printf("enter a student roll number :");
	scanf("%d", &new1->roll);
	printf("Enter a position you can inseart :");
	scanf("%d", &position);

	if (ptr == NULL)
	{
		if (position == 1)
		{
			lp = rp = new1;
			num++;
		}
		else
		{
			printf("\n Not posible to inseart element :");
		}
	}
	else
	{
		if (position == 1)
		{
			ptr->prev = new1;
			new1->next = ptr;
			lp = new1;
			num++;
		}
		else
		{
			while (position > count && ptr->next != NULL)
			{
				ptr = ptr->next;
				count++;
			}
			//			printf("\n------ total count %d",count);

			if (position > count)
			{
				printf(" \n \n Not possible at a index :");
			}
			else if (position < count)
			{
				new1->prev = ptr;
				ptr->next = new1;
				rp = new1;
				num++;
			}
			else
			{
				ptr->next->prev = new1;
				new1->next = ptr->next;
				new1->prev = ptr;
				ptr->next = new1;
				num++;
			}
		}
	}
}
void delete_first(node *ptr)
{
	if (ptr == NULL)
	{
		printf("\n \n List is a empty :");
	}
	else
	{
		if (lp == rp)
		{
			free(ptr);
			rp = lp = NULL;
			num--;
		}
		else
		{
			lp = lp->next;
			free(ptr);
			lp->prev = NULL;
			num--;
		}
	}
}

void delete_last(node *ptr)
{
	if (ptr == NULL)
	{
		printf("\n \n List is a empty :");
	}
	else
	{
		if (rp == lp)
		{
			free(ptr);
			rp = lp = NULL;
			num--;
		}
		else
		{
			rp = rp->prev;
			rp->next = NULL;
			free(ptr);
			num--;
		}
	}
}

void delete_position(node *ptr)
{
	int position, count = 1;
	printf("Enter a position you can delete :");
	scanf("%d", &position);

	if (ptr == NULL)
	{
		printf("\n List is a empty :");
	}
	else if (position == 1)
	{

		if (lp == rp)
		{
			rp = lp = NULL;
			free(ptr);
			num--;
		}
		else
		{
			lp = lp->next;
			lp->prev = NULL;
			free(ptr);
			num--;
		}
	}

	else if (position <= num)
	{
		while (position != count && ptr->next != NULL)
		{
			count++;
			ptr = ptr->next;
		}
		if (ptr == rp)
		{
			rp = rp->prev;
			rp->next = NULL;
			free(ptr);
			num--;
		}
		else
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			num--;
		}
	}
	else
	{
		printf("\n Note possible :");
	}
}

void delete_before(node *ptr)
{
	int position;
	printf("Enter a element before delete :");
	scanf("%d", &position);

	if (ptr == NULL)
	{
		printf("\n List is a empty \ not possible :");
	}
	else
	{
		while (ptr->roll != position && ptr != NULL)
		{
			ptr = ptr->next;
		}

		if (ptr == lp)
		{
			printf("\n Not possible node is first:");
		}
		else if (ptr->prev == lp)
		{
			lp = lp->next;
			//			ptr1=ptr->prev;
			free(ptr->prev);
			lp->prev = NULL;
			num--;
		}
		else if (ptr == NULL)
		{
			printf("\n Not possible because not search:");
		}
		else
		{
			ptr = ptr->prev;
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			num--;
		}
	}
}

void delete_after(node *ptr)
{
	int position;
	printf("Enter a element after delete :");
	scanf("%d", &position);

	if (ptr == NULL)
	{
		printf("\n List is a empty \ not possible :");
	}
	else
	{
		while (ptr->roll != position && ptr != NULL)
		{
			ptr = ptr->next;
		}

		if (ptr == rp)
		{
			printf("\n Not possible node is last:");
		}
		else if (ptr->next == rp)
		{
			rp = rp->prev;
			free(ptr->next);
			rp->next = NULL;
			num--;
		}
		else if (ptr == NULL)
		{
			printf("\n Not possible because not search:");
		}
		else
		{
			ptr = ptr->next;
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			num--;
		}
	}
}

void totalnode()
{
	printf("\n \n Total node is a : %d", num);
}
void search(node *ptr)
{
	int search;
	printf("enter a search roll :");
	scanf("%d", &search);
	if (ptr == NULL)
	{
		printf("\n Note possible list is empty :");
	}
	else
	{
		while (ptr != NULL)
		{
			if (search == ptr->roll)
			{
				printf("\n Element is a found %d", ptr->roll);
				break;
			}
			ptr = ptr->next;
		}
		if (ptr == NULL)
		{
			printf("\n Note available:");
		}
	}
}
void update(node *ptr)
{
	int up;
	printf("enter a update roll :");
	scanf("%d", &up);
	while (up != ptr->roll && ptr != NULL)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		printf("\n Note possible :");
	}
	else
	{
		printf("\n Element for update value");
		scanf("%d", &ptr->roll);
	}
}

void destroy(node *ptr)
{
	while (ptr != NULL)
	{
		ptr = ptr->next;
		lp = lp->next;
		free(ptr);
		ptr = lp;
	}
	if (lp == NULL)
	{
		rp = NULL;
	}
}
