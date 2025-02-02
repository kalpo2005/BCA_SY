#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:
		int num,isPrime,i,j;
		Parents()
		{
			isPrime=1;
		}

		void input();

};
class Child : public Parents
{
	public:

		void prime();
		void display();
};

int main()
{
	Child p;
	p.input();
	p.prime();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for Prime Number:";
	cin>>num;
}

void Child :: prime()
{
	cout<<endl<<" Prime Number is a:";
	for(i=1; i<=num; i++)
	{
		isPrime=1;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime)
		{
			cout<<endl<<i;
		}
	}
}

