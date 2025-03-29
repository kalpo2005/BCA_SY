#include<iostream>
#include<fstream>
#include<string.h>
using  namespace std;

int main()
{
	char k[100],j,name[100];
	int i=0;
	ofstream kalpesh("Assign-3.txt");

	cout<<"Enter a line for write and capitalize :";
	gets(k);

	kalpesh<<k;
//	while(k!=EOF)
//	{
//		kalpesh<<k;
//		k=getchar();
//	}
	kalpesh.close();

	ifstream bavaliya("Assign-3.txt");

	while(bavaliya.get(j))
	{
//		if(k!=10)
		name[i++]=j;
	}
	bavaliya.close();
	cout<<strupr(name);

	return 0;
}
