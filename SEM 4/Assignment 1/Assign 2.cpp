 #include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:

		int Number1,Number2,Multiple;

		void input1();
};

class child:public Parents
{
	public:

		void input2();
};

class subchild:public child
{
	public:

		void display();
};

int main()
{
	subchild k;
	k.input1();
	k.input2();
	k.display();
	return 0;
}

void Parents :: input1()
{
	cout<<"Enter a Number 1 for multiplication :";
	cin>>Number1;
}
void child :: input2()
{
	cout<<"Enter a Number 2 for multiplication :";
	cin>>Number2;
}

void subchild :: display()
{
	cout<<endl<<"A multiplication is a :"<<Number1*Number2;
}
