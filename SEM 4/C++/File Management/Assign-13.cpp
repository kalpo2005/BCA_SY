#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int i=0,Number,sum=0;

	ofstream kal("Assign-13.txt");

	while(i!=10)
	{
		cout<<"Enter a "<<i+1<<" number :";
		cin>>Number;
		kal<<Number<<endl;
		i++;
	}

	kal.close();

	ifstream bav("Assign-13.txt");
	ofstream kalpesh("Assign-13-prime.txt");

	int isPrime=0;
	while(bav>>Number)
	{
		isPrime=0;
		for(i=2; i<Number; i++)
		{
			if(Number%i==0)
			{
				isPrime=1;
				break;
			}

		}
		if(!isPrime && Number>1)
			kalpesh<<Number<<endl;
	}
	bav.close();
	kalpesh.close();

	ifstream bavaliya("Assign-13-prime.txt");

	cout<<"A Prime Number is a :"<<endl;
	while(bavaliya>>Number)
	{
		cout<<Number<<endl;
	}

	return 0;
}
