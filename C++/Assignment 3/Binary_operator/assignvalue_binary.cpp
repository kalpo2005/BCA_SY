// assign value

#include<iostream>
#include<conio.h>
using namespace std;

class Assign
{
	public:

		int a;

		Assign()
		{
			a=0;
		}

		void input()
		{
			cout<<"Enter a value of A:";
			cin>>a;
		}

		operator =(Assign &k)
		{
			return a=k.a;
		}

		void display()
		{
			cout<<"copy value is a : "<<a;
		}
};

int main()
{
	Assign a,a1;
	a1.input();
	a=a1;
	a.display();

	return 0;
}

