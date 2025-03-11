#include <iostream>
using namespace std;

class A {
private:
    int num;

public:
    A(int n) : num(n) {}

    // Friend function declaration
    friend void showNumber(A obj);
};

// Friend function definition
void showNumber(A obj) {
    cout << "The number is: " << obj.num << endl;
}

int main() {
    A obj(10);
    showNumber(obj); // Calling friend function
    return 0;
}
