#include<iostream>
using namespace std;

class kalpesh
{
	public:
		virtual void display()=0;

};

class bavaliya:public kalpesh
{
	public:
		void display();

};

int main()
{
	kalpesh *p;
	bavaliya B;
	p=&B;
	p->display();
	return 0;
}

void kalpesh::display()
{
	int m,n;

	cout<<"Enter a value of Num 1 :";
	cin>>m;
	cout<<"Enter a value of Num 2 :";
	cin>>n;

	if(m>n)
		cout<<endl<<"A value is max :"<<m;
	else
		cout<<endl<<"A value is a max :"<<n;

}

void bavaliya::display()
{
	int m,n;
	cout<<" Child class Enter a value of Num 1 :";
	cin>>m;
	cout<<"Enter a value of Num 2 :";
	cin>>n;

	if(m>n)
		cout<<endl<<"A value is a min :"<<n;
	else
		cout<<endl<<"A value is min :"<<m;
}
