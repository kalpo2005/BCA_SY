#include<iostream>
using namespace std;

class kalpesh
{
	public:
		virtual void display();

};

class bavaliya:public kalpesh
{
	public:
		void display();

};

int main()
{
	kalpesh K;
	bavaliya B;

	kalpesh *p;
	p=&K;
	p->display();
	p=&B;
	p->display();
	return 0;
}

void kalpesh::display()
{
	cout<<endl<<"A parents class function called";
}

void bavaliya::display()
{
	cout<<endl<<"A child class function called";
}
