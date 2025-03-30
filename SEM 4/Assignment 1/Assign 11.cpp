#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		int studentNumber;
		char studentName[100],collageName[100];
		int marks[6],total;
		float percantage;
		Student()
		{
			total=0;
		}

		void input();
};

class Test:virtual public Student
{
	public:

		void marksInput();
};

class Results:public Test
{
	public:
		void display();
};

int main()
{
	Results R;
	R.input();
	R.marksInput();
	R.display();
	return 0;
}

void Student::input()
{
	cout<<endl<<"Enter a Number of student :";
	cin>>studentNumber;

	cout<<endl<<"Enter a Name of student :";
	cin>>studentName;

	cout<<endl<<"Enter a Name of college :";
	cin>>collageName;
}

void Test::marksInput()
{

	for(int i=0; i<6; i++)
	{
		cout<<"Enter a marks of subject-"<<i+1<<":";
		cin>>marks[i];
	}
}

void Results::display()
{

	for(int i=0; i<6; i++)
	{

		total+=marks[i];
	}
	percantage=(total*100)/600;

	cout<<endl<<"A student roll number is a :"<<studentNumber;
	cout<<endl<<"A student name is a :"<<studentName;
	cout<<endl<<"A student collage name is a :"<<collageName;
	cout<<endl<<"A student Total marks is is a :"<<total<<"/600";
	cout<<endl<<"A student perchantage is a  :"<<percantage;
}
