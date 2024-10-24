//  This program for cheak armstrong number

#include<iostream.h>
#include<conio.h>

class armstrong
{
	public:
	int arm,num,r,isArm;

	armstrong()
	{
		arm=0;
	}

    void input()
    {
	cout<<" \n Enter a number for armstrong nimber it :";
	cin>>num;
	isArm=num;


    }

    void display()
    {

     // Logic for armstrong number the number


	while(num>0)
	{
		r=num%10;
		arm=arm+(r*r*r);
		num=num/10;
	}

	//Display the armstrong output

	if(isArm==arm)
	{
		cout<<"\n Yes the number:" <<isArm <<"\t arm strong";
	}
	else
	{
		cout<<"\n No, the number:" <<isArm <<"\t arm strong";
	}
   }
};

void main()
{
	clrscr();
	armstrong a;
	a.input();
	a.display();


 getch();
}