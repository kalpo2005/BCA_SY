#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-12.txt");

	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-12.txt");
	int sum=0;
	cout<<"A Sum is a :"<<endl;
	while(bav>>Number)
	{
		sum+=Number;
	}
	cout<<sum;
	bav.close();
	return 0;
}
