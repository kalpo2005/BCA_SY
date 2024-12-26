// Program  for the sum of two number throught friend function

#include<iostream.h>
#include<conio.h>

class sum
{

	int a,b,Total;

	public:

	void input()
	{
		cin>>a;
		cin>>b;
	}

  friend void add1(sum);

};

void add1(sum t)
{
	t.Total=t.a+t.b;
	cout<<"Total is a :"<<t.Total;
}

void main()
{
	sum p;
	clrscr();
	p.input();
	add1(p);

 getch();
}