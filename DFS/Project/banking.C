#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct Bank
{
    struct Bank *prev;
    char name[100];
    int acNO;
    struct Bank *next;
};
struct Bank typedefined node;
node lp = NULL, rp = NULL;
void create(node *);
void deposite(node *);
void withdrawal(node *);
void exit(int);

int main()
{
    int i = 1, choice;

    while (i)
    {
        printf("/n Bank all operation are here ");

        printf("/n 1. create a account 2. deposite balance 3. withdraw balance");

        printf("/n enter a youtr choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("/n create a bank account");
            lp = (node *)malloc(sizeof(node));
            create(lp);
            break;
        case 2:
            printf("/n deposite balance");
            deposite(lp);
            break;

        case 3:
            printf("/n withdrawal balance");
            withdrawal(lp);
            break;
        case 4:
            printf("/n exite ");
            exit(0);
            break;
        default:
            printf("/n invalid choice ");
            break;
        }
    }
    return 0;
}

void create(node *)
{
}
void deposite(node *)
{
}
void withdrawal(node *)
{
}