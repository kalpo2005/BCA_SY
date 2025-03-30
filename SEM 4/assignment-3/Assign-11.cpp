#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-11.txt");

	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-11.txt");

	cout<<"A divible by 5 value is a :"<<endl;
	while(bav>>Number)
	{
		if(Number%5==0)
		cout<<Number<<endl;
	}
	bav.close();
	return 0;
}
