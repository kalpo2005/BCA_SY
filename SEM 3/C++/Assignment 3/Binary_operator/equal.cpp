#include<iostream>
#include<conio.h>
using namespace std;

class equal
{
	public:
		int a,b;

		equal()
		{
			a=0;
			b=0;
		}

		 equal operator ==(equal &k)
		{
			return a==k.a;
		}

		 operator <=(equal &k)
		{
			return b<=k.b;
		}
		void input()
		{
			cout <<"enter a one number a :";
			cin>>a;
			cout <<"enter a one number b:";
			cin>>b;
		}
		void display()
		{
			cout<<" ---dis Out put is a :"<<a;
		}
};
int main()
{
	equal c1,c2;
	c1.input();
	c2.input();

//	c=c1==c2;
	if(c1==c2)
	{
		cout<<"equal value"<<endl;
	}
	else
	{
		cout<<"not equal value"<<endl;
	}
//
//	if(c1<=c2)
//	{
//		cout<<"object  c1 is small"<<endl;
//	}
//	else
//	{
//		cout<<"object c2 is small"<<endl;
//	}
//	c.display();
	return 0;
}
