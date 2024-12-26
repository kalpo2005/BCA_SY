#include<iostream>
using namespace std;
class library
{
	public:
		int a[100],i,j,reduce,k,no;
		library()
		{
			j=0;
		}
		library(library & m)
		{
			j=m.j;
			i=m.j;
		}
		void insert()
		{

			cout << endl <<" enter how many book enter = ";
			cin >> no;
			for(i=j; i<no; i++)
			{
				cout << i << " book code = " ;
				cin >> a[i];
				j++;
			}

		}
		void remove()
		{
			cout << endl << "remove book code = " ;
			cin >> reduce;
			for(i=0; i<100; i++)
			{
				if(i==reduce)
				{
					for(k=i; k<j-1; k++)
					{
						a[k]=a[k+1];
					}
				}
			}
			j--;
		}
		void display()
		{
			for(i=0; i<j; i++)
			{
				if(a[i]!='\0')
				{
					cout << endl<< i << " book index = " << a[i];
				}
			}

		}
};
int main()
{
	library k;
	library p(k);
	int number,i=1;
	while(i)
	{

		cout << endl <<"1.insert." << endl;
		cout << "2.delete." << endl;
		cin >> number;

		switch(number)
		{
			case 1:
				p.insert();
				break;
			case 2:
				p.remove();
				break;
			case 3:
				p.display();
				break;
			case 4:
				i=0;
				break;
			default:
				break;
		}

	}
	return 0;
}
