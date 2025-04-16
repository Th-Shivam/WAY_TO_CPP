#include <iostream>
#include <array>  // Required for std::array
using namespace std;

int main() {
    // Declare and initialize array
    array<int, 5> arr = {10, 20, 30, 40, 50};

    // Display array elements
    cout << "Array elements are: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Accessing first and last element
    cout << "First Element: " << arr.front() << endl;
    cout << "Last Element: " << arr.back() << endl;

    // Accessing element using at() with bounds checking
    cout << "Element at index 2: " << arr.at(2) << endl;

    // Display the size of the array
    cout << "Total number of elements: " << arr.size() << endl;

    return 0;
}
