#include<iostream>
using namespace std;

class MyClass {
public:
    int num;
    MyClass() { // Default constructor
        num = 0;
    }
    MyClass(int n) { // Constructor with an argument
        num = n;
    }
    MyClass(const MyClass& other) { // Copy constructor
        num = other.num * 2;
    }
};

int main() {
    MyClass obj; // Create a MyClass object with num set to 42
    cout << obj.num; // Print the value of num
    return 0;
}
