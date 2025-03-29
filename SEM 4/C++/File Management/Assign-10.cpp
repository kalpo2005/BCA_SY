#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number;

	ofstream kal("Assign-10.txt");


	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-10.txt");
	ofstream kalOdd("Assign-10-odd.txt");
	ofstream kalEven("Assign-10-even.txt");

	kalOdd<<"A ODD NUmber is a :"<<endl;
	kalEven<<"A even Number is a :"<<endl;


	while(bav>>Number)
	{
		if(Number%2==0)
			kalEven<<Number<<endl;
		else
			kalOdd<<Number<<endl;
	}

	bav.close();
	kalOdd.close();
	kalEven.close();

	cout<<"successfully write data in the file !!!";
	return 0;
}
