//Ractanle area

#include<iostream>
using namespace std;

class Area
{

	public:
		int area,width,lenght;

		Area(int a, int b)
		{
			lenght=a;
			width=b;
		}

		void process()
		{
			area=lenght*width;
		}

		void display()
		{
			cout<<endl<<"Rectangle are is a :"<<area<<endl;
		}
};

int main()
{
	int len,wid;

	cout<<"Enter a lenght of rectangle :";
	cin>>len;

	cout<<"Enter a width of rectangle :";
	cin>>wid;
	Area a(len,wid);
	a.process();
	a.display();

	return 0;
}
