#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Employee
{
	public:
		char emp_name[100],designation[100];
		int age,Ta,Da,Hra,Pf,Net_salary;
		int Basic_salary;
		void input();

};

class Salary:virtual public Employee
{
	public:

		void Salaryinput();

};

class Allowance:virtual public Employee
{
	public:

		void calculate();


};

class Salary_count:public Allowance,public Salary
{
	public:
		void display();

};

int main()
{
	Salary_count S;
	S.input();
	S.Salaryinput();
	S.calculate();
	S.display();
	return 0;
}

void Employee :: input()
{
	cout<<"Enter a empoyee name :";
	cin>>emp_name;

	cout<<"Enter a empoyee age :";
	cin>>age;

	cout<<"Enter a empoyee Designation :";
	cin>>designation;
}

void Salary :: Salaryinput()
{
	cout<<"Enter a empoyee basic Salary :";
	cin>>Basic_salary;
}

void Allowance :: calculate()
{
	Ta=Basic_salary*5/100;
	Da=Basic_salary*5/100;
	Hra=Basic_salary*5/100;
	Pf=Basic_salary*12/100;

}

void Salary_count :: display()
{
	Net_salary=Ta+Da+Hra+Basic_salary-Pf;

	cout<<endl<<"A total net salary is a :"<<Net_salary;

}
