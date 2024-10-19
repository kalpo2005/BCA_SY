#include<iostream.h>
#include<conio.h>

class pattern
{
	public:
	int n,i,j;

  void input()
  {
	cout<<"Enter a row of design:";
	cin>>n;
  }

  void display()
  {
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<"\n";
	}

  }

};

void main()
{
	clrscr();
	pattern p;
	p.input();
	p.display();


 getch();
}