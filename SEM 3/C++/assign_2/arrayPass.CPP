#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
        this->size = size;
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    int data[10]; // Assuming a maximum size of 10
    int size;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    MyClass obj(arr, size);
    obj.printArray();

    return 0;
}