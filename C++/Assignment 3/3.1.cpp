// program about the default constuctor

#include<iostream>
#include<string.h>
using namespace std;

class defaultcon
{
	public:
		char name[100];

		defaultcon()
		{
			cout<<"This is default constructor";
		}

};

int main()
{
	defaultcon p;
	return 0;
}
