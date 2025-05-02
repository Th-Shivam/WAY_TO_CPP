#include <iostream>
#include <vector>
using namespace std;

// --------- Early Binding (Compile-time Polymorphism) ---------
class EarlyBinding {
public:
    void show(int x) {
        cout << "[EarlyBinding] Integer: " << x << endl;
    }

    void show(double y) {
        cout << "[EarlyBinding] Double: " << y << endl;
    }

    void show(const string& str) {
        cout << "[EarlyBinding] String: " << str << endl;
    }

    void show(int x, int y) {
        cout << "[EarlyBinding] Sum of two integers: " << x + y << endl;
    }
};

// --------- Late Binding (Run-time Polymorphism) ---------
class Base {
public:
    virtual void display() {
        cout << "[Base] Display of Base class" << endl;
    }

    virtual ~Base() {} // Virtual destructor for safe polymorphic deletion
};

class Derived : public Base {
public:
    void display() override {
        cout << "[Derived] Display of Derived class" << endl;
    }
};

class AnotherDerived : public Base {
public:
    void display() override {
        cout << "[AnotherDerived] Display of AnotherDerived class" << endl;
    }
};

int main() {
    // Early Binding Example
    cout << "========== Early Binding ==========" << endl;
    EarlyBinding eb;
    eb.show(42);                   // show(int)
    eb.show(3.14);                 // show(double)
    eb.show("Hello C++!");         // show(string)
    eb.show(10, 20);               // show(int, int)

    // Late Binding Example
    cout << "\n========== Late Binding ==========" << endl;
    Base* basePtr;

    Derived d;
    AnotherDerived ad;

    vector<Base*> objects = { &d, &ad };

    for (Base* obj : objects) {
        obj->display(); // Dynamically calls appropriate display() based on actual object
    }

    return 0;
}
