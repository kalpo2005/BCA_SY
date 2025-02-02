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
		int number,i;

		void pal();
};

int main()
{
	Parents m;
	Child p;
	p.input();
	p.pal();
	return 0;
}
void Parents :: input()
{
	cout<<endl<<"Enter a Number 1 to N palindrome:";
	cin>>num;
}

void Child :: pal()
{
	for(i=1; i<=num; i++)
	{
		number=i;
		palindrome=0;
		while(number>0)
		{
			reminder=number%10;
			palindrome=(palindrome*10) + reminder;
			number/=10;
		}

		if(palindrome==i)
		{
			cout<<palindrome<<",";
		}
	}
}

