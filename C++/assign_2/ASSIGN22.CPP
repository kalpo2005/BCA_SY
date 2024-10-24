//Program for find the UppperCase and lower case 


#include<iostream.h>
#include<conio.h>

class upper
{
	public:
	int key,i;
	char ch;

   upper()
   {
	key=0;
   }

  inline void input()
  {
	cout<<endl<<endl<<"Enter a one character for cheaking:";
	cin>>ch;
  }
  inline void display()
  {
	cout<<endl;
	if(ch>='A' && ch<='Z')
	{
		cout<<"Character is upperCase :";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"Character is lower case:";
	}
	else
	{
		cout<<"Invalid input entered  :";
	}
  }

};

void main()
{

	upper p;
	clrscr();
	p.input();
	p.display();

 getch();
}