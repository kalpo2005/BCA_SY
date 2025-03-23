#include<iostream>
using namespace std;

class Abc
{
	public:

		int Num[10];
		int lenght;

		Abc()
		{
			lenght=0;
		}

		void demo(int Num[10])
		{
			for(int i=0; i<10; i++)
			{
				cout<<"Enter a value of the index["<<i<<"]:";
				cin>>Num[i];
				this->Num[i]=Num[i];
			}
		}

		void demo()
		{
			for(int i=0; i<10; i++)
			{
				lenght+=Num[i];
			}
			cout<<"A sum is a :"<<lenght;
		}
};

int main()
{
	int total[10];
	Abc A;
	A.demo(total);
	A.demo();

	return 0;
}
