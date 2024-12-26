//Program for a find a odd and even 1 to n;

#include<iostream.h>
#include<conio.h>

class even
{
	public:
	int num,i;
	public:
	even(int a)
	{
		num=a;
		i=1;
	}

   void display_even()
   {
	cout<<"Even Number is:";
	while(i<=num)
	{
		if(i%2==0)
		{
			cout<<i<<",";
		}
		i++;
	}

   }
   void display_odd()
   {
	i=1;
	cout<<endl<<"Odd number is :";
	while(i<=num)
	{
		if(i%2!=0)
		{
			cout<<i<<",";
		}
		i++;
	}
   }

};

void main()
{
	int n;
	clrscr();
	cout<<"Enter a one number :";
	cin>>n;
	even e(n);
	e.display_even();
	e.display_odd();
 getch();
}