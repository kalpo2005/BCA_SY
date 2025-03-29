#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{

	char k[100],r;
	int constant=0,vowel=0;

	cout<<"Enter a string for the input :";
	gets(k);

	ofstream kal("Assign-7.txt");
	kal<<k;
	kal.close();

	ifstream bav("Assign-7.txt");

	while(bav.get(r))
	{
		if(r!=10)
		{
			if(r>='a' && r<='z' || r>='A' && r<='Z')

				if(r=='a' || r=='A'|| r=='e'|| r=='E'|| r=='i'|| r=='I'|| r=='o'|| r=='O'|| r=='u'|| r=='U')
					vowel++;

				else
					constant++;
		}
	}
	bav.close();
	cout<<endl<<"A Total Vowel is a: "<<vowel;
	cout<<endl<<"A Total constant is a: "<<constant;

	return 0;
}
