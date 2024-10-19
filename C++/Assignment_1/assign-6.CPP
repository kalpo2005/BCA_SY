// This program about tha find minimum number in three input number

#include<iostream.h>
#include<conio.h>
class minimum
{
	public:
	int num1,num2,num3;

    void input()
    {
	cout <<"Enter a number 1:";
	cin>>num1;
	cout <<"\n Enter a number 2:";
	cin>>num2;
	cout <<"\n Enter a number 3:";
	cin>>num3;

    }
    void display()
    {

	if(num1>num2 && num1>num3)
	{
		cout<<"Number 1 is a maximum number :"<<num1;

	}
		else if(num2>num3)
		{
			cout<<"Number 2 is a maximum number :"<<num2;
		}
	else
	{
		cout<<"Number 3 is a maximum number :"<<num3;

	}
    }


};


void main()
{
	clrscr();
	minimum m;
	m.input();
	m.display();

 getch();
}