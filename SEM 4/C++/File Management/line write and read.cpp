#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	char name;
	char read;

	cout<<endl<<"Enter a name of any string for the write in the file :";
	name=getchar();

	ofstream kalpesh("F:\\SEM 4 B-03\\C++\\File Management\\writeLine.txt");
	while(name!=EOF)
	{
		kalpesh<<name;
		name=getchar();
	}

	kalpesh.close();
	cout<<endl<<"Enter a name of any string for the write in the file :"<<endl;
	ifstream bavaliya("F:\\SEM 4 B-03\\C++\\File Management\\writeLine.txt");
	while(bavaliya.get(read))
	{
		cout<<read;
	}
	bavaliya.close();

	return 0;
}
