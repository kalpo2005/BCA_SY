
#include<iostream>
#include<fstream>
using  namespace std;

int main()
{
	double N;
	int read;

	cout<<endl<<"Enter a value of N:";
	cin>>N;

	cout<<endl<<N;
	cout.width(5); // Foir the specific space or the width 
	cout.fill('-'); // For the specific sign add
	cout.precision(2);
	cout<<endl<<N;
	cout.precision(); // for the dpecific number output
	cout<<endl<<N;
	
//	ofstream kal("demo.txt");
//	kal<<N;
//	kal.close();
//	ifstream bav("demo.txt");
//	bav.getline(read,15);
//	cout<<"A value of file is a :"<<read;
//	bav.close();

	return 0;
}
