#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{

	char k[100],r;
	int Number=0,space=0,charchter=0,special=0;

	cout<<"Enter a string for the input :";
	gets(k);

	ofstream kal("Assign-6.txt");
	kal<<k;
	kal.close();

	ifstream bav("Assign-6.txt");

	while(bav.get(r))
	{
		if(r!=10)
		{
			if(r>='0' && r<='9')
				Number++;

			else if(r==' ')
				space++;

			else if(r>='a' && r<='z' || r>='A' && r<='Z')
				charchter++;
			else
				special++;
		}
	}
	bav.close();
	cout<<endl<<"A Total Number is a: "<<Number;
	cout<<endl<<"A Total space is a: "<<space;
	cout<<endl<<"A Total Alphabet is a: "<<charchter;
	cout<<endl<<"A Total word is a: "<<space+1;
	cout<<endl<<"A Total special character is a: "<<special;
	return 0;
}
