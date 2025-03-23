#include<iostream>
using namespace std;

class Number
{
	public:
		int m,n,o;

		Number(int j, int k, int l)
		{
			m=j;
			n=k;
			o=l;
		}

		void check(int a, int b, int c)
		{
			if(a>b && a>c)
				cout<<endl<<"A number is a max :"<<a;
			else if(b>c && b>a)
				cout<<endl<<"A Number is a max :"<<b;
			else
				cout<<endl<<"A Number is a max :"<<c;
		}

		void check()
		{
			if(m<n && m<o)
				cout<<endl<<"A number is a min :"<<m;
			else if(n<o && n<m)
				cout<<endl<<"A Number is a min :"<<n;
			else
				cout<<endl<<"A Number is a min :"<<o;
		}

};

int main()
{
	int a,b,c;

	cout<<"Enter the Number 1 :";
	cin>>a;

	cout<<"Enter  the Number 2 :";
	cin>>b;

	cout<<"Enter  the Number 3 :";
	cin>>c;

	Number N(a,b,c);
	if(a==b && b==c)
		cout<<endl<<"both are  the same :";
	else
	{
		N.check(a,b,c);
		N.check();
	}

	return 0;
}
