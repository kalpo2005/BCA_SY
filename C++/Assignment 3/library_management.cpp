// Library management program

#include<iostream>
#include<conio.h>
using namespace std;

class Library
{
	public:

		int choice;

		void menu()
		{
			cout<<endl<<"1. Issue boook "<<endl<<"2. submit book"<<endl<<"3. exite"<<endl<<endl;
			cout<<"Enter a choice :";
			cin>>choice;
			cout<<endl;
		}
};

int main()
{
	int i=1,ch;


	while(i)
	{
		cout<<endl<<"1. Issue boook "<<endl<<"2. submit book"<<endl<<"3. exite"<<endl<<endl;
		cout<<"Enter a choice :";
		cin>>ch;
		cout<<endl;

		switch(ch)
		{
			case 1:
				cout<<"Issue book :"<<endl;
				break;

			case 2:
				cout<<"Submit the book :"<<endl;
				break;

			case 3:
				cout<<"Exite "<<endl;
				i=0;
				break;

			default:
				cout<<"wrong choice input:"<<endl;
				break;
		}

	}

	return 0;
}
