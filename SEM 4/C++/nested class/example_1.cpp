#include <iostream>
using namespace std;

class Outer {
private:
    int outer_data;

public:
    Outer(int val) : outer_data(val) {}

    void show() {
        cout << "Outer data: " << outer_data << endl;
    }

    class Inner {
    public:
        void print() {
            cout << "This is the Inner class.\n";
        }

        // Accessing outer class data is NOT possible directly unless it's passed or a pointer/reference is used
        void tryAccessOuter(Outer& o) {
            cout << "Accessing Outer data from Inner: " << o.outer_data << endl;
        }
    };
};

int main() {
    Outer outer(100);
    outer.show();

    Outer::Inner inner;
    inner.print();
    inner.tryAccessOuter(outer);

    return 0;
}

