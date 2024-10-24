// Factorial

#include<iostream.h>
#include<conio.h>

class factorial
{
	int n,fact,i;
	public:

  factorial()
   {
	fact=1;
   }

   void input()
   {
	cout<<"Enter a number for factorial :";
	cin>>n;
   }
   friend void findFact(factorial);

};

void findFact(factorial f)
{
	for(f.i=f.n;f.i>=1;f.i--)
	{
		f.fact=f.fact*f.i;
	}
	cout<<" Factorial is :"<<f.fact;
}

void main()
{
	factorial p;
	clrscr();
	p.input();
	findFact(p);

 getch();
}