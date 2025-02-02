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
		int number,i;

		void arm();
};

int main()
{
	Child p;
	p.input();
	p.arm();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for 1 To N  Armstrong:";
	cin>>num;
}

void Child :: arm()
{
	for(i=1; i<=num; i++)
	{
		armstrongNumber=0;
		number=i;
		while(number>0)
		{
			reminder=number%10;
			armstrongNumber=armstrongNumber+(reminder*reminder*reminder);
			number/=10;
		}
		if(armstrongNumber==i)
			cout<<armstrongNumber<<",";

	}
}

