#include<iostream>
#include<conio.h>
using namespace std;

int Number;

class Parents
{
	public:

		void input();
};

class child1:virtual public Parents
{
	public:

		void nagative();

};

class child2:virtual public Parents
{
	public:
		void sqr();
};

int main()
{
	child1 k;
	child2 k2;
	k.input();
	k.nagative();
	cout<<endl<<"For the sqaure test :";
//	k2.input();
	k2.sqr();
	return 0;
}

void  Parents :: input()
{
	cout<<endl<<"Enter a number for wheather cheaking :";
	cin>>Number;
}

void child1::nagative()
{
	Number>0?
	cout<<"Number is a Postitive !!" :cout<<"Number is a Nagative !!";
}

void child2::sqr()
{

//	cout<<endl<<"pass valure is a :-----"<<Number;
	(Number>0)?
	cout<<endl<<"A number square is a : "<<Number*Number : cout<<"Number is a nagative Not possible !!!";
}
