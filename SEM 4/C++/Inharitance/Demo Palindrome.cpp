#include<iostream>
using namespace std;

class Parents
{
	public:
		int num,palindrome,reminder;
		Parents()
		{
			reminder=0;
			palindrome=0;
		}
		void input();
};
class Child : public Parents
{
	public:
		int number;

		void pal();
		void display();
};

int main()
{
	Parents m;
	Child p;
	p.input();
	p.pal();
	p.display();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number for palindrome:";
	cin>>num;
}

void Child :: pal()
{
	number=num;
	while(number>0)
	{
		reminder=number%10;
		palindrome=(palindrome*10) + reminder;
		number/=10;
	}
}
void Child::display()
{
	if(palindrome==num)
		cout<<endl<<"A Number is Palindrome Number is a :"<<palindrome;
	else
		cout<<endl<<"A Number is a not Palindrome !!!";
}
