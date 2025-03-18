#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A function\n";
    }
};

// Intermediate base class derived from A
class B : public A {
public:
    void showB() {
        cout << "Class B function\n";
    }
};

// Another intermediate base class derived from A
class C : public A {
public:
    void showC() {
        cout << "Class C function\n";
    }
};

// Derived class from both B and C (Multiple Inheritance)
class D : public B, public C {
public:
    void showD() {
        cout << "Class D function\n";
    }
};

int main() {
    D obj;
    
    // Accessing functions from derived and base classes
    obj.showB();  // Function from class B
    obj.showC();  // Function from class C
    obj.showD();  // Function from class D

    // To resolve ambiguity while accessing showA():
    obj.B::showA();  // Accessing showA() from B
    obj.C::showA();  // Accessing showA() from C

    return 0;
}
