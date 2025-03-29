#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	char Number[100],openWrite[100];
	int i;
	cout<<endl<<"Enter a string for the write in the file :";
	gets(Number);

	ofstream kalpesh("Assign-2.txt");
	kalpesh<<Number;

	kalpesh.close();

	ifstream bavaliya("Assign-2.txt");
bavaliya>>openWrite;

	cout<<endl<<"A file letter is a :"<<openWrite;
	bavaliya.close();
	return 0;
}
