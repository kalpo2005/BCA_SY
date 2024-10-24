// program for the class to basic data type

#include<iostream>
using namespace std;

class weight
{
	public:
		int n;

		void input()
		{
			cout<<"Enter a value of gram:";
			cin>>n;
		}
		int kg()
		{
			return n/1000;
		}
		int gm()
		{
			return n%1000;
		}
};
int main()
{
	int kg,gram;
	weight k;
	k.input();
	kg=k.kg();
	gram=k.gm();

	cout<<"Enter a value of kilogram:"<<kg<<endl;
	cout<<"Enter a value of gram    :"<<gram;
	return 0;
}
