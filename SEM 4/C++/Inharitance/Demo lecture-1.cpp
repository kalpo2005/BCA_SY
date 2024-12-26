#include<iostream>
#include <conio.h>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout << "Hello World !" << endl;
    }
};

class Child : public Parent
{
public:
    void input();
};

int
main()
{
    Child p;
    p.input();
    return 0;
}
void Child::input()
{
    cout << "Hii !!! , Mr.Kalpesh Bavaliya !!" << endl;
}
