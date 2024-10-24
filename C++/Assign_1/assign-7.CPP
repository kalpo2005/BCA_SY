// This progrma about swap two value  without third variable using

#include<iostream.h>
#include<conio.h>
class swap
{
	public:
	int num1,num2;

    void input()
    {
	cout <<"Enter a number 1:";
	cin>>num1;
	cout <<"\n Enter a number 2:";
	cin>>num2;
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;

    }
    void display()
    {

	cout <<"\n a number 1:";
	cout<<num1;
	cout <<"\n  number 2:";
	cout<<num2;

    }

};


void main()
{
	clrscr();
	swap s;
	s.input();
	s.display();

 getch();
}