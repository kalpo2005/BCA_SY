#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Employee
{
	public:
		char emp_name[100];
		int emp_no;
		int dep_code,salary;
		void input();

};

class Salary:virtual public Employee
{
	public:
		int dep_code;
		char location[100],depname[100];
		void display();
		void Salaryinput();

};

int main()
{
	Salary S;
	S.input();
	S.Salaryinput();
	S.display();
	return 0;
}

void Employee :: input()
{
	cout<<"Enter a empoyee no :";
	cin>>emp_no;

	cout<<"Enter a empoyee name :";
	fflush(stdin);
	gets(emp_name);

	cout<<"Enter a empoyee Salary :";
	cin>>salary;
}

void Salary :: display()
{
	cout<<endl<<"empoyee no :"<<emp_no;
	cout<<endl<<"empoyee name :";
	puts(emp_name);
	cout<<endl<<"empoyee Salary :"<<salary;

	cout<<endl<<"dep code :"<<dep_code;

	cout<<endl<<"department name :";
	puts(location);

	cout<<endl<<"department name :";
	puts(depname);

}

void Salary :: Salaryinput()
{
	cout<<"Enter a dep code :";
	cin>>dep_code;

	cout<<"Enter a department location :";
	fflush(stdin);
	gets(location);

	cout<<"Enter a department name :";
	gets(depname);
}

