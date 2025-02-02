#include <iostream>
#include<conio.h>
using namespace std;

class Parents
{
	public:
		Parents()
		{
			cout<<"Hello World !!"<<endl;
		}
};

class Child : public Parents
{
	public:
		void input();
};

int main()
{
	Child P;
	P.input();
	return 0;
}
void Child :: input()
{
	cout<<"Hii !! MR.Kalpesh Bavaliya"<<endl;
}
