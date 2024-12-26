// tupe conversation
#include<iostream>
using namespace std;

class time
{
	public:
		int hour,minute;
	public:
		time()
		{
			hour=0;
			minute=0;
		}
		time(int a)
		{
			hour=a/60;
			minute=a%60;
		}
		void display()
		{
			cout<<"Hour is a ="<<hour<<endl;
			cout<<"Minute is a ="<<minute<<endl;
		}

};

int main()
{
	int k;
	cout<<"Enter a minute :";
	cin>>k;
	time t;
	t=k;
	t.display();
	return 0;
}
