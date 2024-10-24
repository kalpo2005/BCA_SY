//Program for a lower case to uppercase string:

#include<iostream.h>
#include<conio.h>
#include<string.h>

class upper
{
	public:
	char name[100];

	public:
	upper(char n)
	{
		name=n;
	}
   void display()
   {
	strupr(name);
	cout<<name;
   }

};

void main()
{
	char str[99];
	clrscr();
	cout<<"Enter a lower case string :";
	cin>>str;
	upper p(str);
	p.display();
 getch();
}