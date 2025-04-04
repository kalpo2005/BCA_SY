#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;

    void info() {
        cout << "This is a shape" << endl;
    }
};

// Derived class that implements the pure virtual function
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }
};

int main() {
    // Shape s; ? Not allowed – Shape is abstract
    Rectangle r(10, 5);

    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}

