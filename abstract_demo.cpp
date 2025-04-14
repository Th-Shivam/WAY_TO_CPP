#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;

    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
private:
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    // Shape s; // ❌ Not allowed — abstract class
    Rectangle rect(10, 5);
    rect.display();  // Calling concrete function from base class
    rect.area();     // Calling overridden pure virtual function
    
    return 0;
}
