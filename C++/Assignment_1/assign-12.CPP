#include<iostream.h>
#include<conio.h>
class design
{
	public:
	int i,n,j,k;
	void input()
	{
		cout<<"\nEnter n=";
		cin>>n;
	}
	void output()
	{
		cout<<"\n\n";
		for(i=1;i<=n;i++)
		{
			for(j=n;j>=i;j--)
			{
				cout<<" ";
			}
			for(k=1;k<=i;k++)
			{
				if(k==1||k==i||i==n)
				{
					cout<<" *";
				}
				else
				{
					cout<<"  ";
				}
			}
			cout<<"\n";
		}
	}
};
void main()
{
	design p;
	clrscr();
	p.input();
	p.output();
	getch();
}