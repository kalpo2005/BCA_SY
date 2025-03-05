#include<iostream>
#include<conio.h>
using namespace std;

class Publisher
{
	public:
		char storename[100],title[100];

		void display()
		{
			cout<<endl<<"Store name is a :"<<storename;
			cout<<endl<<"Title name is a :"<<title;
		}

};

class Selldetail
{
	public:

		int threemonth;
		void sellinput()
		{
			cout<<endl<<"Enter a three month sell reports (product number) :";
			cin>>threemonth;
		}

		void selldisplay()
		{
			cout<<endl<<"Last three month sell reports (product number) is a :"<<threemonth;
		}

};

class book:public Selldetail,public Publisher
{
	public:
		void input()
		{
			cout<<endl<<"Enter a store name :";
			cin>>storename;

			cout<<endl<<"Enter a Title name :";
			cin>>title;

		}
};

class tap:public Selldetail,public Publisher
{
	public:
		void display()
		{
			cout<<endl<<"Store name is a :"<<storename;

			cout<<endl<<"Title name is a :"<<title;
		}

};

int main()
{
	book B;
	tap T;
	B.input();
	T.sellinput();
	B.display();
	T.selldisplay();
	return 0;
}
