// For the find string lenght nad reverse string

#include<iostream.h>
#include<conio.h>

class str
{
	char name[100];
	int lenght;

   public:
   str()
   {
	lenght=0;
   }
   void input()
   {
	cout<<"Enter a any string :";
	cin>>name;
   }

   friend void findStr(str);
};

void findStr(str k)
{
	while(k.name[k.lenght]!='\0')
	{
		k.lenght++;
	}

	cout<<"<<A reverse sting is a :";

	while(k.lenght>=0)
	{
		cout<<k.name[k.lenght];
		k.lenght--;

	}
}
void main()
{
	str s;
	clrscr();
	s.input();
	findStr(s);

 getch();
}