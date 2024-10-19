#include<iostream.h>
#include<conio.h>
class prime
{
	public:
	int j,n,i,c;
	void input()
	{
		cout<<"Enter Number=";
		cin>>n;
	}
	void display()
	{
		for(i=2;i<=n;i++)
		{
			c=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					c++;
				}
			}
			if(c==0)
			{
				cout<<" "<<i;
			}
		}
	}
};
void main()
{
	prime p;
	clrscr();
	p.input();
	p.display();
	getch();
}