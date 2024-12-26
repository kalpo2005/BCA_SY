//sum with binary operator

#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	public:

		int a;

		sum()
		{
			a=0;
		}

		sum	operator +(sum &k)
		{
//			cout<<"=====Out put is a :"<<k.a<<endl;
			k.a=a+k.a;
//			cout<<"Out put is a :"<<k.a<<endl;
			return k;
		}
		void input()
		{
			cout <<"enter a one number :";
			cin>>a;
		}
		void display()
		{
			cout<<" ---dis Out put is a "<<a;
		}
};
int main()
{
	sum a,b,c;
	a.input();
	b.input();
	c=a+b;
	c.display();
	return 0;
}
