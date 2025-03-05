#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:

		int Num;

		void input();
};

class Child:public Parents
{

	public:
		void display();
};

int main()
{
	Child k;
	k.input();
	k.display();
	return 0;
}

 void Parents :: input()
{
	cout<<endl<<"Enter a Number for the square :";
	cin>>Num;
}

void Child :: display()
{
	cout<<endl<<"A square is a  :"<<Num*Num;

}
