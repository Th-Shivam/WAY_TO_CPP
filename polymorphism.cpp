#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() { // Virtual function for runtime polymorphism
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override { // Overriding base class method
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();  // Base class pointer pointing to derived class object
    Animal* a2 = new Cat();

    a1->makeSound(); // Calls Dog's makeSound()
    a2->makeSound(); // Calls Cat's makeSound()

    delete a1;
    delete a2;

    return 0;
}
