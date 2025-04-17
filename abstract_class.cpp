#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void area() = 0;
    
    void display() {
        cout << "This is a shape class." << endl;
    }
};

// Derived Class
class Rectangle : public Shape {
private:
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    
    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Another Derived Class
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    
    void area() override {
        cout << "Area of Circle: " << 3.1415 * radius * radius << endl;
    }
};

int main() {
    // Shape s; // Not allowed! Abstract class can't be instantiated.

    Rectangle rect(10, 5);
    Circle circ(7);

    rect.display();
    rect.area();

    circ.display();
    circ.area();

    return 0;
}
