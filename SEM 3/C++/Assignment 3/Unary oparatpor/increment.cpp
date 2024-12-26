// unary oparator increment

#include<iostream>
#include<conio.h>
using namespace std;

class increment
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
			n=n+1;
		}
};

int main()
{
	increment i;
	i.input();
	cout<<"Before the increment";
	i.display();
	++i;
	i.display();

   return 0;
}
