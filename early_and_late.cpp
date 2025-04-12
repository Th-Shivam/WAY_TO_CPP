#include <iostream>
using namespace std;

// --------- Early Binding (Compile-time Polymorphism) ---------
class EarlyBinding {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Double: " << y << endl;
    }

    void show(const string& str) {
        cout << "String: " << str << endl;
    }
};

// --------- Late Binding (Run-time Polymorphism) ---------
class Base {
public:
    virtual void display() {
        cout << "Display of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display of Derived class" << endl;
    }
};

int main() {
    // Early Binding Example
    cout << "--- Early Binding ---" << endl;
    EarlyBinding eb;
    eb.show(42);              // Calls show(int)
    eb.show(3.14);            // Calls show(double)
    eb.show("Hello C++!");    // Calls show(string)

    // Late Binding Example
    cout << "\n--- Late Binding ---" << endl;
    Base* basePtr;
    Derived d;
    basePtr = &d;

    basePtr->display();  // Calls Derived::display() due to late binding (virtual function)

    return 0;
}
