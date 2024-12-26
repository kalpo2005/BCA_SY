// library management

#include<iostream>
#include<conio.h>
using namespace std;

class library
{
	public:
		int bookno,ch,n;
		char book_name;
		
		void menu()
		{
			cout<<"select your choice :"<<endl;
			cout<<"1.dislpay a book:"<<endl;
			cout<<"1.delete a book:"<<endl;
			cout<<"3.exit:"<<endl;
			
			cout<<"enter your choice :";
			cin>>ch;
		}
		
		void display()
		{
		 n=1;	
		}
		void del()
		{
			n=2;
		}
};

int main()
{
	library book;
	 if(book.ch==1)
	 book.display();
	 else if(book.ch==2)
	 book.delz();
	 else
	 exit(0);
	
	return 0;
}
