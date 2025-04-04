#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tree
{
	struct tree *prev;
	int value;
	char name[100];
	char division;
	struct tree *next;
};
typedef struct tree kal;
kal *root = NULL;
int max, min, maximum, minimum, tempmax;

kal *Inseart(kal *, int, char[], char);
void infixDisplay(kal *);
void prefixDisplay(kal *);
void Display(kal *);
void postfixDisplay(kal *);
void searching(kal *, int);
kal *deletion(kal *, int);
void update(kal *, int);
void possible(int);
void assignValue(kal *, int, char name[], char);
void minvalue(kal *);
void maxptr(int, kal *);
void minptr(int, kal *);

int main()
{
	int i = 1, choice;
	int value, search;
	char division;
	char sname[100];

	while (i)
	{
		//		system("cls");
		printf("\n \n linklist operation :");

		printf("\n 01. Inseart \n 02. Display \n 03. Searching \n 04. Deletion \n 05. Update \n 07. Exite");
		printf("\n Enter a choice :");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\n Enter A roll number of student :");
			scanf("%d", &value);
			fflush(stdin);
			printf(" Enter A Name of student        :");
			gets(sname);
			fflush(stdin);
			printf(" Enter A division of class      :");
//			scanf("%c", &division);

			root = Inseart(root, value, sname, division);
			break;

		case 2:
			Display(root);
			break;

		case 3:
			printf("\n Enter a searching element :");
			scanf("%d", &search);
			searching(root, search);
			break;

		case 4:
			printf("\n Enter a Delete element :");
			scanf("%d", &search);
			root = deletion(root, search);
			break;

		case 5:
			printf("\n Enter a update element :");
			scanf("%d", &search);
			minvalue(root);
			update(root, search);
			break;

		case 7:
			i = 0;
			break;

		default:
			printf("\n Invalid Choice !!");
			break;
		}
	}
	fflush(stdin);
	return 0;
}

kal *Inseart(kal *ptr, int value, char name[], char division)
{
	if (ptr == NULL)
	{
		ptr = (kal *)malloc(sizeof(kal));
		ptr->value = value;
		ptr->division = division;
		fflush(stdin);
		strcpy(ptr->name, name);
		ptr->next = ptr->prev = NULL;
	}
	else
	{
		if (value == ptr->value)
		{
			printf("\n A value is Alredy Exiting !!!!");
		}
		else if (value < ptr->value)
		{
			ptr->prev = Inseart(ptr->prev, value, name, division);
		}
		else
		{
			ptr->next = Inseart(ptr->next, value, name, division);
		}
	}

	return ptr;
}

void Display(kal *ptr)
{
	int choice;

	if (ptr == NULL)
	{
		printf("\n Tree is Empty");
	}

	else
	{
		printf("\n 01. Prefix \n 02. infix \n 03.postfix");

		printf("\n Enter a choice :");
		scanf("%d", &choice);

		printf("\n A Tree value is a : \n \n");

		switch (choice)
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
	if (ptr->prev != NULL)
		infixDisplay(ptr->prev);
	printf("\n \n Student Roll Number is a : %d,", ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,", ptr->division);
	if (ptr->next != NULL)
		infixDisplay(ptr->next);
}
void prefixDisplay(kal *ptr)
{
	printf("\n \n Student Roll Number is a : %d,", ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,", ptr->division);
	if (ptr->prev != NULL)
		prefixDisplay(ptr->prev);
	if (ptr->next != NULL)
		prefixDisplay(ptr->next);
}

void postfixDisplay(kal *ptr)
{
	if (ptr->prev != NULL)
		postfixDisplay(ptr->prev);
	if (ptr->next != NULL)
		postfixDisplay(ptr->next);
	printf("\n \n Student Roll Number is a : %d,", ptr->value);
	printf("\n Student name is a        :");
	puts(ptr->name);
	printf("Student class is a        : %c,", ptr->division);
}

void searching(kal *ptr, int search)
{

	if (ptr == NULL)
		printf("\n Tree is a empty , Do not perform a searching !!!!!");

	else
	{
		if (ptr->value == search)
		{
			printf("\n Element is a found");
		}
		else
		{
			if (ptr->value > search && ptr->prev != NULL)
			{
				if (ptr->prev != NULL)
					searching(ptr->prev, search);
				else
					printf("\n Element not found !!!!");
			}
			else
			{
				if (ptr->next != NULL)
					searching(ptr->next, search);
				else
					printf("\n Element not found !!!!");
			}
		}
	}
}

kal *deletion(kal *ptr, int search)
{
	kal *temp, *temp2;

	if (ptr == NULL)
		printf("\n Tree is a empty , Do not perform a Deletion !!!!!");

	else if (ptr->value == search)
	{
		if (ptr->prev == NULL && ptr->next == NULL)
		{
			free(ptr);
			return NULL;
		}
		else
		{
			if (ptr->next == NULL)
			{
				temp = ptr->prev;
				free(ptr);
				return temp;
			}
			else if (ptr->prev == NULL)
			{
				temp = ptr->next;
				free(ptr);
				return temp;
			}
			else
			{
				temp = temp2 = ptr->next;
				while (temp->prev != NULL)
					temp = temp->prev;
				temp->prev = ptr->prev;
				free(ptr);
				return temp2;
			}
		}
	}
	else
	{
		if (ptr->value > search)
		{
			if (ptr->prev != NULL)
				ptr->prev = deletion(ptr->prev, search);
			else
				printf("\n Element not found !!!!");
		}
		else
		{
			if (ptr->next != NULL)
				ptr->next = deletion(ptr->next, search);
			else
				printf("\n Element not found !!!!");
		}
		return ptr;
	}
}

void update(kal *ptr, int search)
{
	int value;
	char name[100];
	char div;

	if (ptr == NULL)
		printf("\n Tree is a empty , Do not perform a updating !!!!!");

	else
	{
		maximum = max;
		minimum = min;
		tempmax = search;
		if (ptr->value == search) // if node found so we can update it a
		{
			maxptr(search, root);
			tempmax = min;
			minptr(search, root);
			printf("\n A nearest biggest value is a : %d", maximum);
			printf("\n A nearest smallest value is a : %d", minimum);

			printf("\n Enter A update roll number of student :");
			scanf("%d", &value);
			fflush(stdin);
			printf(" Enter A update Name of student        :");
			gets(name);
			fflush(stdin);
			printf(" Enter A update division of class      :");
			scanf("%c", &div);

			if (ptr->prev == ptr->next && ptr == root) // if root node
				assignValue(ptr, value, name, div);

			else if (search == min) // if last node but prev last node
			{
				if (value <= maximum)
					assignValue(ptr, value, name, div);
				else
					possible(0);
			}
			else if (search == max) // if last but next last node
			{
				if (value >= minimum)
					assignValue(ptr, value, name, div);
				else
					possible(0);
			}
			else // between last node update anywhere
			{
				if (value < maximum && value > minimum)
					assignValue(ptr, value, name, div);
				else
					possible(0);
			}
		}
		else // for the searching and traveliing at the tree node
		{
			if (ptr->value > search)
			{
				if (ptr->prev != NULL)
					update(ptr->prev, search);
				else
					printf("\n Element not found !!!!");
			}
			else
			{
				if (ptr->next != NULL)
					update(ptr->next, search);
				else
					printf("\n Element not found !!!!");
			}
		}
	}
}

void possible(int n)
{
	if (n)
		printf("sucessfully update !!!");
	else
		printf("Not possible !!!");
}

void assignValue(kal *ptr, int value, char name[], char div)
{
	ptr->value = value;
	strcpy(ptr->name, name);
	ptr->division = div;
	possible(1);
}

void minvalue(kal *ptr)
{
	kal *temp = ptr;
	while (ptr->prev != NULL)
	{
		ptr = ptr->prev;
	}
	min = ptr->value;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	max = temp->value;
}

void maxptr(int search, kal *ptr)
{
	if (ptr->prev != NULL)
		maxptr(search, ptr->prev);
	if (ptr->value > search && tempmax < ptr->value)
	{
		tempmax = ptr->value;
		if (tempmax < maximum)
			maximum = tempmax;
	}
	if (ptr->next != NULL)
		maxptr(search, ptr->next);
}

void minptr(int search, kal *ptr)
{
	if (ptr->prev != NULL)
		minptr(search, ptr->prev);
	if (ptr->value < search && tempmax <= ptr->value)
	{
		tempmax = ptr->value;
		if (tempmax > minimum)
			minimum = tempmax;
	}
		if (ptr->next != NULL)
			minptr(search, ptr->next);
}
