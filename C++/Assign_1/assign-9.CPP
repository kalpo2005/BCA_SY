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
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2!=0)
			{
				cout<<"0";
			}
			else
			{
				cout<<"1";
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