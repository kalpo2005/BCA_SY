#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:
		int Number1,Number2;

		void input();
};

class mother:virtual public Parents
{
	public:

		int m;
		mother()
		{
			m=0;
		}
		void multi();
};

class bigchild:virtual public Parents
{
	public:
		int sum;
		bigchild()
		{
			sum=0;
		}

		void saravalo();

};

class child:public mother,public bigchild
{
	public:
		void display();
};

int main()
{
	child k;
	k.input();
	k.multi();
	k.saravalo();
	k.display();
	return 0;
}

void Parents:: input()
{
	cout<<"Enter a Number 1 for the Multiplication :";
	cin>>Number1;
	cout<<"Enter a Number 2 for the Multiplication :";
	cin>>Number2;
}
void mother::multi()
{
	m= Number1*Number2;
}
void bigchild::saravalo()
{
	sum=Number1+Number2;
}

void child::display()
{
	cout<<"A multiplication is a :"<<m<<endl;
	cout<<"A saravalo is a :"<<sum<<endl;
}
