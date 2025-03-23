#include<iostream>
#include<fstream>
using  namespace std;

int main()
{
	char k;
	ofstream kalpesh("F:\\SEM 4 B-03\\C++\\File Management\\write Line with the while.txt");
	k=getchar();
	while(k!=EOF)
	{
		kalpesh<<k;
		k=getchar();
	}
	kalpesh.close();
	cout<<endl<<"a file value is a :"<<endl;
	ifstream bavaliya("F:\\SEM 4 B-03\\C++\\File Management\\write Line with the while.txt");

	while(bavaliya.get(k))
	{
		cout<<k;
	}
	bavaliya.close();

	return 0;
}
