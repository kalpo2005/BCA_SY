#include<iostream>

using namespace std;

class Operation
{
	public:

		void kalpesh(int m, int n)
		{
			cout<<endl<<"A sum is a :"<<m+n;
		}

		void kalpesh(int m, double n)
		{
			cout<<endl<<"A sub is a :"<<m-n;
		}

		void kalpesh(double m, int n)
		{
			cout<<endl<<"A multiplication is a :"<<m*n;
		}

		void kalpesh(double m, double n)
		{
			cout<<endl<<"A division is a :"<<m/n;
		}

};

int main()
{
	int a,b;
	double c,d;

	cout<<"Enter a Number 1 :";
	cin>>a;
	cout<<"Enter a Number 2 :";
	cin>>b;
	c=a;
	d=b;

	Operation O;
	O.kalpesh(a,b);
	O.kalpesh(a,d);
	O.kalpesh(c,b);
	O.kalpesh(c,d);

	return 0;
}
