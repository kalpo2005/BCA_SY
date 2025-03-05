#include<iostream>
#include<conio.h>
using namespace std;

class Publisher
{
	public:
		char color[100];
		int width,height;
		Publisher()
		{
			width=height=0;
		}

};

class child:public Publisher
{
	public:

		void input();

		void display();

};

int main()
{
	child k;
	k.input();
	k.display();
	return 0;
}

void child :: input()
{
	cout<<endl<<"Enter a color of the Publisher :";
	cin>>color;

	cout<<endl<<"Enter a height of the Publisher :";
	cin>>height;

	cout<<endl<<"Enter a width of the Publisher :";
	cin>>width;
}

void child :: display()
{
	cout<<endl<<"color of the Publisher :"<<color;

	cout<<endl<<"height of the Publisher :"<<height;

	cout<<endl<<"width of the Publisher :"<<width;
}

