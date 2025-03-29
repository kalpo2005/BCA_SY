#include<iostream>
#include<fstream>
#include<string.h>
using  namespace std;

int main()
{
	char k[100],name[100],j;
	int i=0;
	ofstream kalpesh("Assign-4.txt");

	cout<<"Enter a line for write and capitalize :";
	gets(k);
//	while(k!=EOF)
//	{
//		kalpesh<<k;
//		k=getchar();
//	}
	kalpesh<<k;
	kalpesh.close();

	ifstream bavaliya("Assign-4.txt");

	while(bavaliya.get(j))
	{
		name[i++]=j;
	}
	bavaliya.close();
	cout<<strlwr(name);

	return 0;
}
