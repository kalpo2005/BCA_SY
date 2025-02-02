#include<iostream>
using namespace std;

class Parents
{
	public:
		int num,reverse,reminder;
		Parents()
		{
			reminder=0;
			reverse=0;
		}
		void input();
};
class Child : public Parents
{
	public:

		void rev();
		void display();
};

int main()
{
	Parents m;
	Child p;
	m.input();
	p.rev();
	p.display();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for reverse:";
	cin>>num;
}

void Child :: rev()
{
	while(num>0)
	{
		reminder=num%10;
		reverse=(reverse*10) + reminder;
		num/=10;
	}
}
void Child::display()
{
	cout<<endl<<"A Reverse Number is a :"<<reverse;
}
