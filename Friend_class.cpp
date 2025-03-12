#include <iostream>
using namespace std;

class A {
private:
    int num;

public:
    A(int n) : num(n) {}

    // Declaring Friend Class
    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << "The number is: " << obj.num << endl;
    }
};

int main() {
    A obj(20);
    B objB;
    objB.show(obj); // Friend class accessing private member of A
    return 0;
}
