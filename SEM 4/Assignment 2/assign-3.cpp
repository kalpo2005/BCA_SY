#include<iostream>

using namespace std;

class even
{
	public:
		int num,revnum;

		void kalpesh(int m)
		{
			num=m;
			cout<<endl<<"A even Numbetr is a :";
			for(int i=1; i<=m; i++)
			{
				if(i%2==0)
				{
					cout<<endl<<i;
				}
			}
		}

		void kalpesh()
		{
			int count=1;
			cout<<endl<<"A prime Number is a :";
			for(int i=1; i<=num; i++)
			{
				count=1;
				for(int j=2; j<i; j++)
				{
					if(i%j==0)
					{
						count=0;
						break;
					}
				}
				if(count)
					cout<<endl<<i;
			}
		}


};

int main()
{
	int a;

	cout<<"Enter a Number 1 :";
	cin>>a;

	even O;
	O.kalpesh(a);
	O.kalpesh();

	return 0;
}
