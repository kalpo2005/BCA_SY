#include<iostream>
#include<string.h>

using namespace std;

class kalpesh
{
	public:

		char str[100];
		int lenght;
		kalpesh()
		{
			lenght=0;
		}

		void check(char name[])
		{
			for(int i=0; name[i]!='\0'; i++)
			{
				lenght++;
				str[i]=name[i];
			}
		}

		void check()
		{
			cout<<endl<<"A string copy is a :";
			for(int i=0; i<lenght; i++)
			{
				cout<<str[i];
			}
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
