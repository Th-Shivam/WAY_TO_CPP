#include <iostream>
using namespace std;

class A {
private:
    static int count; // Static data member

public:
    A() { count++; } // Constructor increments count

    void showCount() {
        cout << "Object count: " << count << endl;
    }

    static void display() { // Static member function
        cout << "Total objects created: " << count << endl;
    }
};

// Initializing static data member
int A::count = 0;

int main() {
    A obj1, obj2, obj3;

    obj1.showCount(); 
    obj2.showCount();
    
    A::display(); // Calling static function

    return 0;
}
