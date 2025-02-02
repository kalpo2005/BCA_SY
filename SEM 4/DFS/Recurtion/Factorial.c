//Factorial Printng by Recurtion Function 

#include<stdio.h>
#include<conio.h>
double fact(int);
int main()
{
	int Number;
	double factorial;

	printf("\n Enter a Number for factorial:");
	scanf("%d",&Number);

//	Fuction calling
	factorial=fact(Number);

//Factorial printing
	printf("\n factorial is a %.lf ",factorial);
	return 0;
}

double fact(int Num)
{
	double f=1;

//	factorial logic by Recurtion
	if(Num>0)
	{
		f=Num*fact(Num-1);
//			printf("\n facorial is a %.lf for the %d ",f,Num);
	}
		
	return f;
}
