#include<iostream>
using namespace std;

class kal
{
	public:
	int i;
	kal()
	{
		i=20;
	}
	
	virtual void display()
	{
		cout<<endl<<"display value o base classs is a : "<<i;
	}
};

class bav:public kal
{
	public:
	
	int i;
	
	bav()
	{
		i=99;
	}	
		
		void display()
		{
			cout<<endl<<"display the child class : "<<i;
		}
};

int main()
{
	kal k;
	bav b;
	kal *p;
	
	p=&k;
	p->display();
	p=&b;
	p->display();
	
	return 0;
}
