#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void makeSound() {
        cout << "Animals make different sounds!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Inherited function from Animal
    myDog.bark();      // Function from Dog class

    return 0;
}
