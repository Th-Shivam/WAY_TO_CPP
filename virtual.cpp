#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "This is Base class function.\n";
    }
};

class Derived : public Base {
public:
    void show() override {  // Overriding the base class function
        cout << "This is Derived class function.\n";
    }
};

int main() {
    Base* basePtr;         // Base class pointer
    Derived d;             // Derived class object

    basePtr = &d;
    basePtr->show();       // Calls Derived class function due to virtual function

    return 0;
}
