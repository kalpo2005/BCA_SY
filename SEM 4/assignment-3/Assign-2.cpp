#include<iostream>
#include<string.h>
#include<fstream>
using  namespace std;

int main()
{
	string name,rename;
	cout<<"Enter a string for the write:";
	cin>>name;

	ofstream kalpesh("Assign-2.txt");
	kalpesh<<name;

	kalpesh.close();

	ifstream bavaliya("Assign-2.txt");

	bavaliya>>rename;
	bavaliya.close();

	cout<<endl<<"file data is a :";
	cout<<rename;

	return 0;
}
