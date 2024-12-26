// copy constructor
//string

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class str
{
	public:
		char name[100];
		int i,l,lower,upper,space,number,special,vowel,constant;
		str()
		{
			i=0;
			l=0;
			lower=upper=space=special=number=0;
		}
		str(str &copy)
		{
			i=copy.i;
			l=copy.l;
			upper=copy.upper;
			space=copy.space;
			special=copy.special;
			lower=copy.lower;
			for(i=0; i<l; i++)
			{
				name[i]=copy.name[i];
			}
			number=vowel=constant=0;
		}
		void input()
		{
			cout<<"Enter a  string :";
			gets(name);
		}

		void lenght()
		{
			while(name[i]!='\0')
			{
				l++;
				i++;
			}
		}

		void process()
		{
			for(i=0; i<l; i++)
			{
				if(name[i]>='a' && name[i]<='z')
				{
					if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
					{
						vowel++;
					}
					lower++;
					constant++;
				}
				else if(name[i]>='A' && name[i]<='Z')
				{
					if(name[i]=='A' || name[i]<='E' || name[i]=='I' || name[i]<='O' || name[i]=='U')
					{
						vowel++;
					}
					upper++;
					constant++;
				}
				else if(name[i]==' ')
				{
					space++;
				}
				else if(name[i]>='0' && name[i]<='9')
				{
					number++;
				}

				else
				{
					special++;
				}
			}
		}

		void display()
		{
			constant=constant-vowel;
			cout<<"Total lenght is a :"<<l<<endl;
			cout<<"Vowel is  a       :"<<vowel<<endl;
			cout<<"constant is  a    :"<<constant<<endl;
			cout<<"special char is a :"<<special<<endl;
			cout<<"With space is  a  :"<<space<<endl;
			cout<<"number is  a      :"<<number<<endl;
			cout<<"Lower case is  a  :"<<lower<<endl;
			cout<<"Upper case is  a  :"<<upper<<endl;
		}



};

int main()
{
	str A;
	A.input();
	A.lenght();
	str p(A);
	p.process();
	p.display();

	return 0;
}

