#include<iostream>
#include<conio.h>
using namespace std;

int k;
int productCode[100];
class Product
{
	public:
//		char productName[100][100];

		int i,j,code;
		Product()
		{
			k=0;
		}
};

class Stock:virtual public Product
{
	public:
		void display();

};

class Purchase:virtual public Stock
{
	public:
		void purchase();
};

class Sell: virtual public Stock
{
	public:
		void sell();

};

int main()
{
	int choice,i=1;
	Sell S;
	Purchase P;


	while(i)
	{
		cout<<endl<<endl<<"01.purchase \n02.sell \n03.Stock \n04.exite ";
		cout<<endl<<"Enter a your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				P.purchase();
				break;

			case 2:
				S.sell();
				break;

			case 3:
				P.display();
				break;

			case 4:
				i=0;
				break;

			default:
				cout<<endl<<"invalid choice !!!!";
				break;
		}
	}
	return 0;
}

void Stock :: display()
{
	cout<<endl<<"Availble product code :";
	for(i=0; i<k; i++)
	{
		cout<<endl<<productCode[i];
	}
}

void Sell :: sell()
{
	cout<<endl<<"Availble product code for selling :";
	cin>>code;
	for(i=0; i<k; i++)
	{
//				cout<<endl<<"Availble product code for selling :";
		if(productCode[i]==code)
		{
			for(j=i; j<k; j++)
			{
				if(productCode[j]==code)
					productCode[j]=productCode[j+1];
				break;
			}
				delete &productCode[k];
				k--;
		}
	}
}

void Purchase :: purchase()
{
	cout<<endl<<"Enter a product code :";
	cin>>productCode[k++];
}
