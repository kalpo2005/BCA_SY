//  this program about reverse the number

#include<iostream.h>
#include<conio.h>

class reverse
{
	public:
	int rev,num,n;

	reverse()
	{
		rev=0;
	}

    void input()
    {
	cout<<" \n Enter a number for reverse it :";
	cin>>num;

       // Logic of reverse the number

	while(num>0)
	{
		n=num%10;
		rev=rev*10+n;
		num=num/10;
	}
    }

    void display()

    //Display the reverse output

    {
	cout<<"\n The reverse number is a : "<<rev;
    }

};

void main()
{
	clrscr();
	reverse r;
	r.input();
	r.display();


 getch();
}