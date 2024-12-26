#include<iostream.h>
#include<conio.h>
#include<string.h>
class marksheet
{
	public:
	int rollno;
	float mark1,mark2,mark3,total;
	float percentage;
	char name[20];

	void input()
	{
		cout<<"\nEnter Roll NO:";
		cin>>rollno;
		cout<<"\nEnter NAME:";
		cin>>name;
		cout<<"Enter 1st Subject Mark=";
		cin>>mark1;
		cout<<"Enter 2nd Subject Mark=";
		cin>>mark2;
		cout<<"Enter 3rd Subject Mark=";
		cin>>mark3;

		total=mark1+mark2+mark3;
		percentage=total/300*100;
	}
	void display()
	{
		cout<<"\n \n Student Marksheet is:"<<endl;
		cout<<"\nROLL NO:"<<rollno;
		cout<<"\nNAME:"<<name;
		cout<<"\n1st Subject Mark:"<<mark1;
		cout<<"\n2nd Subject Mark:"<<mark2;
		cout<<"\n3rd Subject Mark:"<<mark3;
		cout<<"\n Total:"<<total<<endl;
		cout<<"Percentage is :"<<percentage;

	}
};
void main()
{
	marksheet m;
	clrscr();
	m.input();
	m.display();
	getch();
}