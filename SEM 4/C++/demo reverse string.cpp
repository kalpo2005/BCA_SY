#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[100];
	char reverse[100];

	cout<<endl<<"Enter a value of string:";

	gets(name);
	strcpy(reverse,strrev(name));

	cout<<endl<<"Reverse string is a :"<<reverse;

	return 0;
}
