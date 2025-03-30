#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:

		int Number1;

		void input();
};

class Parents2
{
	public:

		int Number2;

		void input2();
};

class child:public Parents,public Parents2
{
	public:

		void display();
};

int main()
{
	child k;
	k.input();
	k.input2();
	k.display();
	return 0;
}

void Parents::input()
{
	cout<<"Enter a value for the division :";
	cin>>Number1;
}

void Parents2::input2()
{
	cout<<"Enter a value of divider :";
	cin>>Number2;
}

void child::display()
{
	cout<<endl<<"A division is a :"<<Number1/Number2;
}
