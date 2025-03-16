#include <iostream>

int main() {
    int num = 10;     // Declare an integer variable
    int* ptr = &num;  // Declare a pointer and store the address of num

    // Display the value and address
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Pointer ptr holds address: " << ptr << std::endl;
    std::cout << "Value at ptr (dereferencing): " << *ptr << std::endl;

    // Modify the value using pointer
    *ptr = 20;
    std::cout << "Updated value of num using pointer: " << num << std::endl;

    return 0;
}
