#include <iostream>
using namespace std;

// Class definition
class A {
private:
    int num;  // Private member variable

public:
    // Constructor
    A(int n) : num(n) {}

    // Setter method for updating the value
    void setNumber(int n) {
        num = n;
    }

    // Friend function declaration for accessing private data
    friend void showNumber(const A& obj);
};

// Friend function definition
void showNumber(const A& obj) {
    cout << "The number is: " << obj.num << endl;
}

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;

    A obj(input);           // Creating object with user input
    showNumber(obj);        // Calling friend function to display the value

    // Optional: modifying the value using setter
    obj.setNumber(input + 5);
    cout << "After modifying using setter function:" << endl;
    showNumber(obj);

    return 0;
}