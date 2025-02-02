#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	public:

		int marks[100],i,n,sum;
		Student()
		{
			sum=0;
		}

		void input();
};

class Marks:public Student
{

	public:
		void display();
};

int main()
{
	Marks k;
	k.input();
	k.display();
	return 0;
}

void Student :: input()
{
	cout<<endl<<"Eneter a subject number :";
	cin>>n;

	for(i=0; i<n; i++)
	{

		cout<<endl<<"Enter a subject-"<<i+1<<"marks (0-100):";
		cin>>marks[i];
	}

}

void Marks :: display()
{
	for(i=0; i<n; i++)
	{
		sum+=marks[i];
	}

	for(i=0; i<n; i++)
	{

		cout<<endl<<"Student marks is  subject-"<<i+1<<"marks :"<<marks[i];
	}

	cout<<endl<<"Student marks is  grand total is a : "<<sum<<"/"<<n*100;
}
