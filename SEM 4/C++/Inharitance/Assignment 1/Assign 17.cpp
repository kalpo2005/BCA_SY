#include<iostream>
#include<conio.h>
using namespace std;

class Product
{
	public:
//		char productName[100][100];
		int productCode[100];
		int i,k,j,code;
		Product()
		{
			k=0;
		}

};

class Purchase:public Product
{
	public:
		void purchase()
		{
			for(i=k; i<100; i++)
			{
				cout<<endl<<"Enter a product code :";
				cin>>productCode[i];
				k++;
				break;
			}
		}

};

class Sell:public Stock
{
	public:
		void sell()
		cout<<endl<<"Availble product code :";
		for(i=0; i<k; i++)
		{
			if(productCode[i]==code)
			{
				for(j=i; j<k; j++)
				{
					productCode[j]=j+1;
				}
				k--;
			}
		}
}

};

class Stock:public Purchase
{
	public:
		void display()
		{
			cout<<endl<<"Availble product code :";
			for(i=0; i<k; i++)
			{
				cout<<endl<<productCode[i];
			}

		}

};

int main()
{
	int choice,i=1;
	Purchase p;
	Stock S;

	while(i)
	{
		cout<<endl<<endl<<"01.purchase \n02.sell \n03.Stock \n04.exite ";
		cout<<endl<<"Enter a your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				S.purchase();
				break;

			case 2:
				break;

			case 3:
				S.display();
				break;

			case 4:
				break;

			default:
				cout<<endl<<"invalid choice !!!!";
				break;
		}
	}
	return 0;
}
