#include<iostream>
using namespace std;

class Parents
{
	public:
		int num,armstrongNumber,reminder;
		Parents()
		{
			reminder=0;
			armstrongNumber=0;
		}
		void input();
};

class Child : public Parents
{
	public:
		int number;

		void arm();
		void display();
};

int main()
{
	Child p;
	p.input();
	p.arm();
	p.display();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for Armstrong:";
	cin>>num;
}

void Child :: arm()
{
	number=num;
	while(number>0)
	{
		reminder=number%10;
		armstrongNumber=armstrongNumber+(reminder*reminder*reminder);
		number/=10;
	}
}
void Child::display()
{
	if(armstrongNumber==num)
		cout<<endl<<"A Number is Armstrong Number is a :"<<armstrongNumber;
	else
		cout<<endl<<"A Number is a not arm strong !!!";
}
