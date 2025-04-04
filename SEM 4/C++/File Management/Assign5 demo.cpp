#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{

	char k[100];
	string r;


	cout<<"Enter a string for the input :";
	gets(k);

	ofstream kal("input6.txt");
	kal<<k;
	kal.close();

	ifstream bav("input6.txt");
	getline(bav,r);
	cout<<r;
	bav.close();

	ofstream second("output-6.txt");
	second<<r;
	second.close();
	return 0;
}
