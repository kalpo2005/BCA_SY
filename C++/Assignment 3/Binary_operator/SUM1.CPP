// binary operater

#include<iostream.h>
#include<conio.h>
class sum
{
	public:
	int a;
	sum()
	{
		a=0;
	}
	 operator +(sum &k)
	{
		sum m;
		cout<<"pre is a:"<<a<<endl;
		m.a=a+k.a;
		cout<<"pas is a:"<<m.a<<endl;
		cout<<"pre is a:"<<a<<endl;
		return m.a;
	}
	void input()
	{
		 cout<<"Enter a value of n:";
		 cin>>a;
	}
	void display()
	{
		 cout<<"sum is a:"<<a;
	}
};

void main()
{
	sum p1,p2,p;
	clrscr();
	p1.input();
	p2.input();
	p=p1+p2;
	p.display();



 getch();
}