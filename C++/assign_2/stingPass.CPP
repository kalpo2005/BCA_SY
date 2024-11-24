#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person(string n)
    {
        this->name = n;
    }

    Person(Person &copy)
    {
        name = copy.name;
    }

    void introduce();

private:
    string name;
};

int main()
{

    char call[100];

    cout << "Enter a name ";

    gets(call);
    Person person1(call);
    Person person2("Bob");

    Person person44(person1);
    person1.introduce();
    person2.introduce();

    person44.introduce();

    return 0;
}

void Person ::introduce()
{
    cout << "Hello, my name is " << name << endl;
}
