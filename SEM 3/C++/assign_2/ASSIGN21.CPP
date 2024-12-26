#include<iostream.h>
#include<conio.h>

class odd
{
	public:
	int n;

 inline void input()
  {
	cout<<"Enter a number for a odd and even:";
	cin>>n;
  }
  inline void display()
  {

	if(n==0)
	{
		cout<<"Number is a zero :";
	}
	else if(n%2==0)
	{
		cout<<"Number is a even :";
	}
	else
	{
		cout<<"Number is a odd :";
	}
  }


};

void main()
{

	odd p;
	clrscr();
	p.input();
	p.display();

 getch();
}