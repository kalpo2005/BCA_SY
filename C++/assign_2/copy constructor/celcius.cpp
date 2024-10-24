// fenarhit and celcius

#include<iostream>
#include<conio.h>
using  namespace std;

class Total
{
	public:
		int choice;
		float n,t;
	public:
		Total(Total &copy)
		{
			n=copy.n;
		}

		void menu()
		{
			cout<<"1. f to c "<<endl <<"2.c to f "<<endl;
			cout<<"Enter your choice ";
			cin>>choice;
		}

		void input()
		{
			cout<<"Enter a value of celcius or a fenarhit:";
			cin>>n;
		}

		void fenar()
		{
			t=(9/5)*n+32;
		}
//		void cel()
//		{
//			t=(n-32)*5/9;
//		}
		void displayf()
		{
			cout<<"A value of fenar is a :"<<t;
		}
//		void displayc()
//		{
//			cout<<"A value of celcius is a :"<<t;
//		}
};

int main()
{
	Total p;
	p.menu();
	p.input();
	Total q(p);
	q.fenar();
	q.displayf();
	return 0;
}
