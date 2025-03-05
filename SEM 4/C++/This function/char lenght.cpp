#include<iostream>
#include<string.h>

using namespace std;

class Kalpesh
{
	public:
		char name[100];
		int count,i,charlen;

		Kalpesh()
		{
			count=0;
			i=charlen=0;
		}
		void input(char name[])
		{
			strcpy(this->name,name);
//			this->name=name;
		}

		void findthelenght()
		{
//			puts(name);
			while(name[i]!='\0')
			{
				if(name[i]>='0' && name[i]<='9')
				{
					charlen++;
				}
				count++;
				i++;
			}
			cout<<endl<<"A char lenght is a :"<<count-charlen;
		}
};

int main()
{
	char name[100];
	
	cout<<"Enter a name for the lenght :";
	gets(name);

	Kalpesh K;
	K.input(name);
	K.findthelenght();

	return 0;
}
