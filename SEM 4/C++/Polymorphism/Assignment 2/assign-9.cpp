#include<iostream>
using namespace std;

class Number
{
	public:
		int m,n;

		Number(int j, int k)
		{
			m=j;
			n=k;
		}

		void check(int a, int b)
		{
			if(a>b)
				cout<<endl<<"A number is a max :"<<a;
			else
				cout<<endl<<"A Number is a max :"<<b;
		}

		void check()
		{
			if(m<n)
				cout<<endl<<"A number is a min :"<<m;
			else
				cout<<endl<<"A Number is a min :"<<n;
		}

};

int main()
{
	int a,b;

	cout<<"Enter the Number 1 :";
	cin>>a;

	cout<<"Enter  the Number 2 :";
	cin>>b;

	Number N(a,b);
	if(a==b)
		cout<<endl<<"both are  the same :";
	else
	{
		N.check(a,b);
		N.check();
	}

	return 0;
}
