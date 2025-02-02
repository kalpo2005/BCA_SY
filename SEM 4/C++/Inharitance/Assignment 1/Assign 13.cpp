#include<iostream>
#include<conio.h>

using namespace std;
int fQnt;
class media
{
	public:
		char tital[100];
		int fPrice,cPrice;
		char fType,cType;
		int cQnt;

		void input();
};

class Flopy:virtual public media
{
	public:

		void inputFloppy();
		void displayFloppy();
};

class Cd:virtual public media
{
	public:

		void inputcd();
		void displaycd();
};

int main()
{
	Flopy F;
	Cd  C;
	C.input();
	C.inputcd();
	F.inputFloppy();
	C.displaycd();
	F.displayFloppy();
	return 0;
}

void media::input()
{
	cout<<endl<<"Enter a tital :";
	cin>>tital;

	cout<<endl<<"Enter a cd disk price :";
	cin>>cPrice;

}

void Flopy::inputFloppy()
{

	cout<<endl<<"Enter a floppy disk price :";
	cin>>fPrice;

	cout<<endl<<"Enter a floppy disk type(w,r) :";
	cin>>fType;

	cout<<endl<<"Enter a floppy disk quentity :";
	cin>>fQnt;
//	cout<<endl<<"A floppy666666 sell is A :"<<fPrice;
}

void Cd::inputcd()
{
	cout<<endl<<"Enter a cd disk type(w,r) :";
	cin>>cType;

	cout<<endl<<"Enter a cd disk quentity :";
	cin>>cQnt;
}

void Cd::displaycd()
{
	cout<<endl<<"A cd type is A :"<<cType;
	cout<<endl<<"A cd total sell is A :"<<cQnt*cPrice;

}

void Flopy::displayFloppy()
{
	cout<<endl<<"A floppy type is A :"<<fType;
	cout<<endl<<"A floppy sell is A :"<<fQnt*fPrice;
	cout<<endl<<"A floppy sell is A :"<<fQnt;
}

