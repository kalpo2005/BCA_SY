//Program for the cheaking positive or a nagative with a parameterize constructor


#include<iostream.h>
#include<conio.h>

class possitive
{
	public:
	int n;

	possitive(int a)
	{
		n=a;
	}

  void display()
  {

	if(n==0)
	{
		cout<<"Number is a zero :";
	}
	else if(n>0)
	{
		cout<<"Number is a Positive :";
	}
	else
	{
		cout<<"Number is a Nagative :";
	}
  }

};
void main()
{
	int k;
	clrscr();
	cout<<"Enter a number for a possitive or a nagative:";
	cin>>k;
	possitive p(k);
	p.display();

 getch();
}