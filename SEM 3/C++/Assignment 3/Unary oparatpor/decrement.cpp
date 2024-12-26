// unary oparator increment

#include<iostream>
using namespace std;

class decrement
{
	public:
		int n;


		void input()
		{
			cout<<"Enter a value of a n :";
			cin>>n;
		}

		void display()
		{
			cout<<"A value is a  :"<<n<<endl;
		}

		operator ++()
		{
			n=n-1;
		}
};

int main()
{
	decrement d;
	d.input();
	cout<<"Before the decrement";
	d.display();
	++d;
	d.display();

	return 0;
}
