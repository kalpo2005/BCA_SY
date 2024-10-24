#include<iostream.h>
#include<conio.h>
class design
{
 public:
 int i,n,j,sp,k;

 design()
 {
  k=0;
  }
   void input()
   {
    cout<<"n=";
    cin>>n;
    }
    void display()
    {
     k=n;
     for(i=1;i<=n;i++)
     {
      for(sp=1;sp<=k;sp++)
      {
      cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
       if(j==1||i==n||j==i)
	cout<<" *";
	else
	 cout<<"  ";
	 }
	 cout<<"\n";
	 k=k-1;
	 }
	}
       };
       void main()
       {
	clrscr();
	design p;
	p.input();
	p.display();
	getch();
	}
