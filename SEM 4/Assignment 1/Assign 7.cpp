#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Student
{
	public:
		string studentName;
		int testMarks;

		void input()
		{
			cout<<endl<<"Enter a student Name :";
			cin>>studentName;
//			cout<<endl<<"A student Name is a ----:"<<studentName;
		}

		void displayStudent()
		{
			cout<<endl<<"A student Name is a :"<<studentName;
//			puts(studentName);
		}

};

class Test: virtual public Student
{
	public:
		void inputTest()
		{
			cout<<endl<<"Enter a student Test (0-100) marks :";
			cin>>testMarks;

		}

};

class Sport
{
	public:
		int sportsMarks;

		void inputSports()
		{
			cout<<endl<<"Enter a student Sport (0-100) marks :";
			cin>>sportsMarks;
		}

};

class Result:public Test,public Sport
{
	public:

		void display()
		{
//			cout<<endl<<"A student Name is a :";
//			puts(studentName);
			if((sportsMarks+testMarks)>66)
			{
				cout<<endl<<"Student grand total is a "<<sportsMarks+testMarks;
				cout<<endl<<"congratulation !!, Student is a Pass !!!";

			}
			else
			{
				cout<<endl<<"Student grand total is a "<<sportsMarks+testMarks;
				cout<<endl<<"Try next time  !!!, Student is a fail !!!";
			}
		}

};

int main()
{

	Result R;
	R.input();
	R.inputTest();
	R.inputSports();
	R.displayStudent();
	R.display();
	return 0;
}
