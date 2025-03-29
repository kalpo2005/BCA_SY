#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-8.txt");

	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-8.txt");

	cout<<"A value is a :"<<endl;
	while(bav>>Number)
	{
		cout<<Number<<endl;
	}

	return 0;
}
