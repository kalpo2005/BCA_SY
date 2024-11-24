#include <iostream>

using namespace std;

class Houre
{
public:
    int hour;

    Houre()
    {
        hour = 2;
    }

    get()
    {
        return hour;
    }
};

class Min
{
public:
    int minute;
     operator=(Houre k)
    {
        minute = k.get() * 60;
    }
    void display();
};

int main()
{

    Houre kkkk;
    Min kal;
    kal=kkkk;
    kal.display();
    return 0;
}

void Min ::display()
{
    cout << "Min.display is-------- " << minute;
}
