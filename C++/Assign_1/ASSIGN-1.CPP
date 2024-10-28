#include<iostream.h>
#include<conio.h>
class matrix
{
	public:
	int i,j,r,c,a[20][20];
// code by kkkk

	void input()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"Enter Value of ["<<i<<"]["<<j<<"]";
				cin>>a[i][j];
			}
			c=j;
		}
		r=i;
	}
	void display()
	{
		cout<<"\nRow="<<r<<endl;
		cout<<"column="<<c;
	}

};
void main()
{
	matrix p;
	clrscr();
	p.input();
	p.display();
	getch();
}
