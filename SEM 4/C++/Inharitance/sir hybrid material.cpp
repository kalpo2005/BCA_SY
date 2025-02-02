#include<iostream>
#include<conio.h>
using namespace std;
class father
{
	public :
		int a;
		void input()
		{
			cout<<"a=";
			cin>>a;
		}
};
class mother : public father
{
	public :
		int b;
		mother()
		{
			b=5;
		}
};
class child : public father
{
	public:
		int sum;
		child()
		{
			sum=10;
		}
};
class child2:public mother, public child
{
	public:
		int mul;
		void display()
		{
			mul = sum * b;
			cout<<"mul="<<mul;
		}
};
int main()
{
	child2 m;
	system("cls");
	m.display();
	getch();
}
