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
		for(j=i;j>=1;j--)
		{
				cout<<j;

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