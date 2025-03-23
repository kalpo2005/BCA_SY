#include<iostream>
#include<string.h>

using namespace std;

class Kalpesh
{
	public:
		char name[100];
		int count,i;

		Kalpesh()
		{
			count=0;
			i=0;
		}
		void input(char name[])
		{
			for(int i=0; name[i]!='\0'; i++)
			{
				this->name[i]=name[i];
			}
		}

		void findthelenght()
		{
			while(name[i]!='\0')
			{
				count++;
				i++;
			}

			cout<<endl<<"A string lenght is a :"<<count;
		}
};

int main()
{
	char name[100];
	cout<<"Enter a name for the lenght :";
	gets(name);
	cout<<"------- lenght :"<<strrev(name);

	Kalpesh K;
	K.input(name);
	K.findthelenght();

	return 0;
}
