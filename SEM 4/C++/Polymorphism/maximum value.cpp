
#include<iostream>
#include<conio.h>

using namespace std;

class maximum
{
	public:
		int k,j;

		void max(int m,int n)
		{
			k=m;
			j=n;
			if(m<n)
				cout<<endl<<"value is a big :"<<n;
			else
				cout<<endl<<"value is a big :"<<m;
		}

		void max()
		{
			if(k>j)
				cout<<endl<<"value is a small :"<<j;
			else
				cout<<endl<<"value is a small :"<<k;
		}
};

int main()
{

	int a,b;
	maximum M;

	cout<<"Enter a value of A:";
	cin>>a;
	cout<<endl<<"Enter a valur of B :";
	cin>>b;

	M.max(a,b);
	M.max();
	return 0;

}
