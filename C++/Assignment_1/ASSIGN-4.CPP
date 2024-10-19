#include<iostream.h>
#include<conio.h>
class fibo
{
	public:
	int t1,t2,tnext,n,i;
	fibo()
	{
		t1=0;
		t2=1;
	}
	void input()
	{
		cout<<"Enter Number=";
		cin>>n;
	}
	void display()
	{
		cout<<"\n "<<t1<<" "<<t2;
		for(i=3;i<=n;i++)
		{
			tnext=t1+t2;
			cout<<" "<<tnext;
			t1=t2;
			t2=tnext;

		}
	}
};
void main()
{
	fibo p;
	clrscr();
	p.input();
	p.display();
	getch();
}