// binary operator compare two value

#include<iostream>
#include<conio.h>
using namespace std;
class Compare
{

	public:
		int a;

		void input()
		{
			cout<<"Enter a value :";
			cin>>a;
		}

		operator ==(Compare &k)
		{
			return a==k.a;
		}
};

int main()
{
	Compare p,q;
	p.input();
	q.input();

	if(p==q)
	{
		cout<<endl<<"Both value are same";
	}
	else
	{
		cout<<endl<<"both value are not same";
	}
	return 0;
}
