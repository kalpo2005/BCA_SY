//Sum Printng by Recurtion Function 

#include<stdio.h>
#include<conio.h>

double fact(int);
int main()
{
	int Number;
	double sum;

	printf("\n Enter a Number for Sum:");
	scanf("%d",&Number);

//	Fuction calling
	sum=fact(Number);

//sum printing
	printf("\n sum is a : %.lf ",sum);
	return 0;
}

double fact(int Num)
{
	double f=0;

//	sum logic by Recurtion
	if(Num>=0)
	{
		f=Num+fact(Num-1);
//			printf("\n sum is a %.lf for the %d ",f,Num++);
	}
		
	return f;
}
