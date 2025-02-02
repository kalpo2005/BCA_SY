#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:
		int num1,num2,total;
		Parents()
		{
			num1=0;
			num2=0;
			total=0;
		}

		void input();

};
class Child : public Parents
{
	public:

		void sum();
		void display();
};

int main()
{
	Child p;
	p.input();
	p.sum();
	p.display();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number 1 :";
	cin>>num1;
	cout<<endl<<"Enter a Number 2 :";
	cin>>num2;
}

void Child :: sum()
{
	total=num1+num2;
}
void Child::display()
{
	cout<<endl<<"A total is a :"<<total;
}
