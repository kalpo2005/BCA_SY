#include<iostream>
#include<conio.h>

using namespace std;

class poly
{

	public:
		double total;

		void operation(int a,int b)
		{

			cout<<endl<<"A sum is a one number a is "<<a+b;
		}

		void operation(int j,double k)
		{
			cout<<endl<<"A substraction is a two number is a :"<<j-k;
		}

		void operation(double m,int n)
		{
			cout<<endl<<"A multiplication is a two number is a :"<<m*n;
		}

		void operation(double m,double n)
		{
			cout<<endl<<"A dividion is  is a two number is a :"<<m/n;
		}

};

int main()
{
	poly P;
	int a,b,choice;
	double c,d;
	int i=1;

	while(i)
	{
		cout<<endl<<"01. sum";
		cout<<endl<<"02. subsraction";
		cout<<endl<<"03. multiplication";
		cout<<endl<<"04. division";
		cout<<endl<<"05. exite";

		cout<<endl<<"Enter a your choice :";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter a value of A :";
				cin>>a;
				cout<<"Enter a value of B:";
				cin>>b ;
				P.operation(a,b);
				break;

			case 2:
				cout<<"Enter a value of A :";
				cin>>a;
				cout<<"Enter a value of B:";
				cin>>c ;
				P.operation(a,c);
				break;

			case 3:
				cout<<"Enter a value of a:";
				cin>>a ;
				cout<<"Enter a value of b:";
				cin>>c ;
				P.operation(c,a);
				break;

			case 4:
				cout<<"Enter a value of a:";
				cin>>c;
				cout<<"Enter a value of b:";
				cin>>d;
				P.operation(c,d);
				break;

			case 5:
				i=0;
				break;

			default:
				cout<<endl<<"Enter a right choice !!!!!!";
				break;
		}
	}
}
