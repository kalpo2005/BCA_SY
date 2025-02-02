#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Person
{
	public:
		char Student_name[100],Teacher_name[100];

};

class Teacher:public Person
{
	public:
		void Teacherinput()
		{
			cout<<endl<<"Enter a Teacher Name :";
			cin>>Teacher_name;
		}

		void teacherdisplay()
		{
			cout<<endl<<"A Teacher Name is  :";
			cout<<Teacher_name;
		}

};

class Student:virtual public Person
{
	public:
		char Student_Exam[100],Awards_Name[100];

		void Studentinput()
		{
			cout<<endl<<"Enter a Student Name :";
			cin>>Student_name;
		}

};
class Exam:virtual public Student
{
	public:
		void Examinput()
		{
			cout<<endl<<"Enter a Student Exam Name :";
			cin>>Student_Exam;
		}
};


class Talent
{
	public:
		char Talant_name[100];
		void Talantinput()
		{
			cout<<endl<<"Enter a Student Talant Name :";
			cin>>Talant_name;
		}

};

class Awards: virtual public Exam,public Talent
{
	public:

		void Awardsinput()
		{
			cout<<endl<<"Enter a Student Award name Name :";
			cin>>Awards_Name;
		}

		void display()
		{
			cout<<endl<<"Student Name is :";
			cout<<Student_name;

//			cout<<endl<<"Teacher Name is :";
//			cout<<Teacher_name;

			cout<<endl<<" Student_Exam is Name :";
			cout<<Student_Exam;

			cout<<endl<<"Talant_name is  Name :";
			cout<<Talant_name;

			cout<<endl<<"Awards_Name is Name :";
			cout<<Awards_Name;
		}

};


int main()
{
	Teacher T;
	Awards k;
	T.Teacherinput();
	k.Studentinput();
	k.Examinput();
	k.Talantinput();
	k.Awardsinput();
	T.teacherdisplay();
	k.display();
	return 0;
}
