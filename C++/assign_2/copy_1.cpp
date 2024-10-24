// copy constructor for the student markds

#include<iostream>
#include<conio.h>
using namespace std;
class marksheet
{
	public:
	int roll,marks[10],internal[10],external[10],total,totalmarks;
	int n,a[10],b,c,k,i;
	float per;
	char name[100];
	
	public:
	marksheet()
	{
		a=0;
	}
	
	marksheet(marksheet &test)
	{
		k=test.n;
		for(i=0;i<n;i++)
		{
			a[i]=internal[i];
			b[i]=external[i];
			b[i]=internal[i];	
		}	
	}
	
	void input()
	{
		cout<<"Enter a student detail :"<<endl<<endl;
		cout<<"Enter a student name :";
		cin>>name;
		cout<<"Enter a roll number :";
		cin>>roll;
		
		cout<<"How many subject";
		cin>>n;
		
		for(i=0;i<n;i++)
		{
		
			cout<<"Enter a student internal marks :";
			cin>>internal[i];
			cout<<"Enter a student external marks :";
			cin>>external[i];
		}
	}
	
	void display()
	{
		for(i=0;i<k;i++)
		{
			t=t+a[i]+b[i];
		}
		total=internal+external;
		per=total*100/totalmarks;
		
		cout<<" A student name is :"<<name<<endl;
		cout<<" A student roll number is :"<<roll<<endl;
		cout<<" A student toatl :"<<total<<endl;	
		cout<<" A student name percentage is :"<<per<<endl;
		}
	
};
int main()
{
	marksheet m;
	m.input();
	m.display();
	
	return 0;
}
