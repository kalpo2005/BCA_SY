#include<iostream>
#include<string.h>

using namespace std;

class kalpesh
{
	public:

		char str[100];

		void check(char name[])
		{
			strcpy(str,name);
			cout<<endl<<"A string lenght is a :"<<strlen(name);
		}

		void check()
		{
			cout<<endl<<"A string reverse is a :"<<endl<<strrev(str);
		}

};

int main()
{

	char Name[100];
	cout<<"Enter a string :";
	gets(Name);

	kalpesh K;
	K.check(Name);
	K.check();
	return 0;
}
