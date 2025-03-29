#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-14.txt");


	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		if(Number%2==0)
			kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-14.txt");

	while(bav>>Number)
	{
		cout<<Number<<endl;
	}
	bav.close();

	return 0;
}
