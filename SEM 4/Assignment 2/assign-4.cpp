#include<iostream>
using namespace std;

class wheather
{
	public:
		int a;

		void check(int k)
		{
			a=k;
			if(k==0)
				cout<<endl<<"Number is a zero :";
		}

		void check(float m)
		{
			if(m>0)
				cout<<endl<<"Number is a positive :";
		}

		void check()
		{
			if(a<0)
				cout<<endl<<"Number is a nagative :";
		}
};

int main()
{
	int number;
	float l;

	cout<<"Enter a Number :";
	cin>>number;
	l=number;
	wheather W;
	W.check(number);
	W.check(l);
	W.check();
	return 0;
}
