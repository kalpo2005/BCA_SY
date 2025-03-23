#include<iostream>
#include<fstream>
using  namespace std;

int main()
{
	char k;
	ofstream kalpesh("F:\\SEM 4 B-03\\C++\\File Management\\capital string.txt");
	k=getchar();
	while(k!=EOF)
	{
		kalpesh<<k;
		k=getchar();
	}
	kalpesh.close();
	cout<<endl<<"a file value is a :"<<endl;
	ifstream bavaliya("F:\\SEM 4 B-03\\C++\\File Management\\capital string.txt");

	while(bavaliya.get(k))
	{
		if(k>='a' && k<='z')
			k-=32;
		cout<<k;
	}
	bavaliya.close();

	return 0;
}
