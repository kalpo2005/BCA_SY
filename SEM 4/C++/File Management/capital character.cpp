#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	char Number,openWrite;
	int i;
	cout<<endl<<"Enter a char for the write in the file :";
	cin>>Number;

	ofstream kalpesh("F:\\SEM 4 B-03\\C++\\File Management\\big.txt");
	kalpesh<<Number;

	kalpesh.close();

	ifstream bavaliya("F:\\SEM 4 B-03\\C++\\File Management\\big.txt");
	bavaliya.get(openWrite);
	if(openWrite>='a' && openWrite<='z')
		openWrite+=32;
	cout<<endl<<"A capital leter is a :"<<openWrite;
	bavaliya.close();

	ofstream kal("F:\\SEM 4 B-03\\C++\\File Management\\small.txt");
	kal<<openWrite;
	kal.close();
	return 0;
}
