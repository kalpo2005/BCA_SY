// binary substraction

#include<iostream>
using namespace std;

class Sub
{

	public:
		int a,b,total;

		Sub()
		{
			a=0;
			b=0;
			total=0;
		}
		Sub	operator -(Sub &k)
		{
			k.total=a-k.a;
			return k;
		}

		void input()
		{
			cout<<"enter a value of element A:";
			cin>>a;
		}
		void display()
		{
			cout<<"SUB is a : "<<total<<endl;
		}
};

int main()
{
	Sub s,s1,s2;
	s1.input();
	s2.input();
	s=s1-s2;
	s.display();
	return 0;
}
