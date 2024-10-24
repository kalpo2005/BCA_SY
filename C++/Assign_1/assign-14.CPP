#include<iostream.h>
#include<conio.h>
class emp
{
	public:
	int emp_no;
	float basic_salary,da,ta,salary;
	char name[20],dept[20];

	void input()
	{
		cout<<"\nEnter Emp_no:";
		cin>>emp_no;
		cout<<"\n Enter Employee Name:";
		cin>>name;
		cout<<"\nEnter Employee Department:";
		cin>>dept;
		cout<<"\nEnter Basic Salary:";
		cin>>basic_salary;
		salary=basic_salary;

	}
	void display()
	{
		da=(salary*12)/100;
		ta=(salary*10)/100;
		basic_salary=salary+ta+da;

		cout<<endl<<"Employee detail is :";
		cout<<"Emp_no:"<<emp_no;
		cout<<"\nEmployee Name:"<<name;
		cout<<"\nEmployee Department:"<<dept;
		cout<<"\nBasic Salary:"<<salary;
		cout<<"\nDA:"<<da;
		cout<<"\nTA:"<<ta;
		cout<<"\nTotal Salary before increment:"<<basic_salary<<endl;
	}
};
void main()
{
	emp e;
	clrscr();
	e.input();
	cout<<"\n \n Before  the increment"<<endl;
	e.display();
	e.salary=e.salary+e.salary*0.5;
	cout<<"\n \n After  the increment"<<endl;
	e.display();
	getch();
}