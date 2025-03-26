#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
long long factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
