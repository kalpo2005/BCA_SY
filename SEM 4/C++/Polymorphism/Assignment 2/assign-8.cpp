#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class kalpesh
{
	public:

		char str[100];
		char name[100];
		int lenght;

		kalpesh()
		{
			lenght=0;
		}

		void check(char name[])
		{
			strcpy(this->name,name);
		}

		void check()
		{
			strcpy(str,strrev(name));
			strrev(name);
			int k;
			if(strcmp(str,name))
				cout<<endl<<"String is a not a Palindrome !!!";
			else
				cout<<endl<<"String is a palindrome !!!";
		}
};

int main()
{

	char Name[100];
	cout<<"Enter a string :";
	cin>>Name;

	kalpesh K;
	K.check(Name);
	K.check();
	return 0;
}
