#include<iostream>
#include<fstream>
#include<string.h>
using  namespace std;

int main()
{
	char k,name[100];
	int i=0;
	ofstream kalpesh("Assign-5.txt");

	cout<<"Enter a line the copy another file :";
	k=getchar();
	while(k!=EOF)
	{
		kalpesh<<k;
		k=getchar();
	}
	kalpesh.close();
	ofstream kalpo("Assign-5 copy.txt");
	ifstream bavaliya("Assign-5.txt");

	while(bavaliya.get(k))
	{
		if(k!=10)
		{
			name[i++]=k;
		}
	}
	i--;
	bavaliya.close();
	kalpo<<name;
	kalpo.close();
	cout<<endl<<"successfully write in another file !!!";

	return 0;
}

