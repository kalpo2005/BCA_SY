//Program choice for the palindrin factorial and other all series

#include<iostream.h>
#include<conio.h>
class series
{
	public:
	int n,ch,fact,pal,i,rev,mod,c,j;
	series(int a, int b, int c)
	{
		n=a;
		fact=b;
		pal=n;
		rev=c;
	}

   void menu()
   {
	cout<<"chose your choice:"<<endl;
	cout<<"1. even:"<<endl;
	cout<<"2. odd:"<<endl;
	cout<<"3.factorial:"<<endl;
	cout<<"4.palindrome:"<<endl;
	cout<<"5. Prime Number"<<endl;
	cout<<"6. exit"<<endl<<endl<<endl;

	cout<<"Enter your choice :";
	cin>>ch;

   }

   void even()
   {
	cout<<"Number is an even :"<<endl;

	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
				cout<<i<<",";
		}
	}
   }
    void odd()
    {
	cout<<"Number is an odd :";
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<",";
		}
	}
    }

   void factorial()
   {
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<"A factorial is : "<<fact<<endl;
   }

   void palindrome()
   {
	while(pal>0)
	{
		mod=pal%10;
		rev=rev*10+mod;
		pal=pal/10;
	}
	if(rev==n)
	{
		cout<<"A number is a palidrone"<<endl;
	}
	else
	{
		cout<<"A number is not  a palidrone"<<endl;
	}
   }

   void prime()
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

int main()
{
	int n;
       //	series s;
	clrscr();
	cout<<"Enter a one number :";
	cin>>n;
	series s(n,1,0);
	s.menu();

	if(s.ch==1)
	s.even();
	else if(s.ch==2)
	s.odd();
	else if(s.ch==3)
	s.factorial();
	else if(s.ch==4)
	s.palindrome();
	else if(s.ch==5)
	s.prime();
	else
	return 0;

 getch();
 return 0;
}