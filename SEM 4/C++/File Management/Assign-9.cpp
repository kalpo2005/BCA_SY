#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-9.txt");


	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-9.txt");
	ofstream bavaliya("Assign-9-copy.txt");

	bavaliya<<"the file data copy is a :"<<endl;

	while(bav>>Number)
	{
		bavaliya<<Number<<endl;
	}

	bav.close();
	bavaliya.close();

	cout<<"successfully write data in the file !!!";
	return 0;
}
