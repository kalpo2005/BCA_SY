#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int number;
	int n;
	int i=0;
	cout<<endl<<"Enter a number for you want enter :";
	cin>>n;
	ofstream kal("Number input.txt");
	while(i<n)
	{
		cout<<endl<<"enter a any Number :";
		cin>>number;
		kal<<number<<endl;
		i++;
	}
	kal.close();

	return 0;
}
