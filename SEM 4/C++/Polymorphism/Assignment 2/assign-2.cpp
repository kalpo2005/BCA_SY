#include<iostream>

using namespace std;

class Reverse
{
	public:
		int num,revnum;

		void kalpesh(int m)
		{
			num=m;
			int reminder,rev=0;
			while(m>0)
			{
				reminder=m%10;
				rev=(rev*10)+reminder;
				m/=10;
			}
			cout<<"A reverse Number is a :"<<rev;
			revnum=rev;
		}

		void kalpesh()
		{
			if(num==revnum)
				cout<<endl<<"Number is a Palindrone :";
			else
				cout<<endl<<"Number is a note palindrone";
		}


};

int main()
{
	int a;

	cout<<"Enter a Number 1 :";
	cin>>a;

	Reverse O;
	O.kalpesh(a);
	O.kalpesh();

	return 0;
}
