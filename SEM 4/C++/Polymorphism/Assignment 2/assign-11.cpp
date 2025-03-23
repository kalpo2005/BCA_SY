#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class kalpesh
{
	public:

		char str[100];

		void input(char name[])
		{
			strcpy(str,name);
		}

		void input()
		{
			int lenght=0;

			for(int i=0; str[i]!='\0'; i++)
			{
				if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
				{
					lenght++;
//					cout<<endl<<"A charachter lenght is a :"<<lenght;

				}
			}

			cout<<endl<<"A charachter lenght is a :"<<lenght;
		}

};

int main()
{
	char Name[100];

	cout<<"Enter a string :";
	cin>>Name;

	kalpesh K;
	K.input(Name);
	K.input();
	return 0;
}
