#include<iostream>
#include<conio.h>

using namespace std;

class Matrix
{
	public:

		int a[3][3],b[3][3],c[3][3];
		int k;
		int i,j;

};

class child:public Matrix
{
	public:
		void input()
		{
			cout<<"Enter a value of the a matrix:"<<endl;
			for(int i=0; i<3; i++)
			{

				for(int j=0; j<3; j++)
				{
					cout<<"Enter a value of the ["<<i+1<<"]["<<j+1<<"] :";
					cin>>a[i][j];
				}
			}

			cout<<endl<<"Enter a value of the B matrix:"<<endl;
			for(int i=0; i<3; i++)
			{

				for(int j=0; j<3; j++)
				{
					cout<<"Enter a value of the ["<<i+1<<"]["<<j+1<<"] :";
					cin>>b[i][j];
				}
			}
		}

};


int main()
{
	child P;
	P.input();
	return 0;
}

