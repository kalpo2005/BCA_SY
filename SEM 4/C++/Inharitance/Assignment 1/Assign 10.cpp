#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Book
{
	public:
		int bookId,bookCost;
		char bookName[100];
		int wSell,wPrice;
		int rSell,rPrice;

		void input()
		{
			cout<<"Enter a book ID :";
			cin>>bookId;

			cout<<"Enter a book Name :";
			cin>>bookName;

			cout<<"Enter a book cost :";
			cin>>bookCost;
		}
};

class Wholeseller:virtual public Book
{
	public:
		void wholeinput()
		{
			cout<<"Enter a whole selling number :";
			cin>>wSell;

			cout<<"Enter a whole selling Price :";
			cin>>wPrice;

		}
};

class Retailseller:virtual public Book
{
	public:
		void retailinput()
		{
			cout<<"Enter a retail selling number :";
			cin>>rSell;

			cout<<"Enter a retail selling Price :";
			cin>>rPrice;

		}
};

class Totalsales:public Retailseller,public Wholeseller
{
	public:

		void display()
		{
			cout<<endl<<"Total selling Items :"<<rSell+wSell;

			cout<<endl<<"Total Ammount z:"<<(rSell*rPrice)+(wSell*wPrice);

			cout<<endl<<" Total Profit :"<<(rSell*rPrice)+(wSell*wPrice)-((rSell+wSell)*bookCost);
		}


};
int main()
{
	Totalsales P;
	P.input();
	P.wholeinput();
	P.retailinput();
	P.display();
}
