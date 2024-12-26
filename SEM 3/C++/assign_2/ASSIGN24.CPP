#include<iostream.h>
#include<conio.h>

class maximum
{

	int a,b,c;

	public:

	void input()
	{
		cout<<"Enter a Num 1:";
		cin>>a;
		cout<<"Enter a Num 2:";
		cin>>b;
		cout<<"Enter a Num 3:";
		cin>>c;
	}

  friend void add1(maximum);

};

void add1(maximum t)
{
	if(t.a>t.b && t.a>t.c)
	{       cout<<"Number "<<t.a <<" is maximum";

	}
	else if( t.b>t.c)
	{
		cout<<"Number "<<t.b <<" is maximum";
	}
	else
	{
		cout<<"Number "<<t.c <<" is maximum";
	}
}

void main()
{
	maximum p;
	clrscr();
	p.input();
	add1(p);

 getch();
}