#include<iostream>

using namespace std;

class Kalpesh
{
	public:
		int number,n,arm,reminder;
		Kalpesh()
		{
			arm=0;
		}
		void input(int number)
		{
			this->number=number;
		}

		void armsrtong()
		{
			n=number;
			while(n>0)
			{
				reminder=n%10;
				arm+=(reminder*reminder*reminder);
				n=n/10;
			}
			if(arm==number)
				cout<<endl<<"NUmber is a armstrong";

			else
				cout<<endl<<"Number is a not armstorng";
		}

};

int main()
{
	int Number;
	cout<<"Enter a one number :";
	cin>>Number;

	Kalpesh K;
	K.input(Number);
	K.armsrtong();

	return 0;
}
