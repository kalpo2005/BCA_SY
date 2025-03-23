#include<iostream.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>


void main()
{
	char name[100];
	char copy[100];
	char name2[100];
	int lenght;
	clrscr();

	cout<<endl<<"Enter a string : ";
	cin>>name;
	strcpy(name2,name);
	strcpy(copy,strrev(name));


	lenght=strcmp(name2,name);
	cout<<endl<<" A return value is a :"<<lenght;
	cout<<endl<<"revese string is a :"<<copy;
	cout<<endl<<"main string is a :"<<name2;

 getch();
}