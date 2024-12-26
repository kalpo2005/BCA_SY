#include<iostream>
#include<conio.h>
using namespace std;

class equal1
{
	public:
		int a,b;

		equal1()
		{
			a=0;
			b=0;
		}

		 operator ==(equal1 &k)
		{
			return a==k.a;
		}

		 
		void input()
		{
			cout <<"enter a one number a :";
			cin>>a;
			cout <<"enter a one number b:";
			cin>>b;
		}
		
};
int main()
{
	equal1 c1,c2;
	c1.input();
	c2.input();

	if(c1==c2)
	{
		cout<<"equal value"<<endl;
	}
	else
	{
		cout<<"not equal value"<<endl;
	}
	return 0;
}
