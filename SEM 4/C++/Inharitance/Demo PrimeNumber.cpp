#include<iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:
		int num,isPrime,i;
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
	p.display();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for PrimeNumber:";
	cin>>num;
}

void Child :: prime()
{
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			isPrime=0;
			break;
		}
	}
}
void Child::display()
{
	if(isPrime)
	{
		cout<<endl<<"Number is a Prime :";
	}
	else
	{
		cout<<endl<<"Number is a not Prime :";
	}
}
