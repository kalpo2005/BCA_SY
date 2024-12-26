#include <iostream>
using namespace std;

class even
{
	public:
		int n,no1,i,sum,sum1,a[100],b[100];
	public:
		even()
		{
			sum1=0;
		}

		even(even &j)
		{
			no1=j.n;
			for(i=0; i<n; i++)
			{
				b[i]=j.a[i];
			}
		}
		void input()
		{
			cout << "enter range : ";
			cin >> n;
			for(i=0; i<n; i++)
			{
				cout << "a["<<i<<"]"<<" = ";
				cin>>a[i];
			}

		}

		void display()
		{
			for(i=0; i<no1; i++)
			{
				cout<<b[i]<<endl;
			}
		}
		void Even()
		{
			cout<<endl<<b[3];
			cout << "\nEven numbers from 1 to " << no1 << ":- ";
			for (i = 0; i < no1; i++)
			{
				if (b[i] % 2 == 0)
				{
					cout << a[i] << " ";
					sum1+=b[i];
				}
			}
			cout << endl << "sum of even number : " << sum1 << endl;
			cout << endl;
		}

		// Function to display odd numbers from 1 to n
		void Odd()
		{
			sum=0;
			cout << "\nOdd numbers from 1 to " << no1 << ":- ";
			for (i = 0; i < no1; i++)
			{
				if (b[i] % 2 == 1)
				{
					cout << b[i] <<endl;
					sum+=b[i];
				}
			}
			cout << endl <<"sum of odd number : " << sum << endl;
			cout << endl;
		}

};

int main()
{

	int n;

	even x;
	x.input();
	even y(x);
	y.display();
//	y.Even();
//	y.Odd();

	return 0;
}
