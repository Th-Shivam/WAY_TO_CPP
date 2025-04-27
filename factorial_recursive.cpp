#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Function to calculate factorial using iteration (better for large numbers)
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to clear input stream in case of invalid input
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    int num;
    char choice;

    do {
        cout << "Enter a non-negative integer: ";
        while (!(cin >> num) || num < 0) {
            cout << "Invalid input. Please enter a non-negative integer: ";
            clearInput();
        }

        if (num > 20) {
            cout << "Warning: Result may overflow for numbers greater than 20 (long long limit)!" << endl;
        }

        cout << "Factorial of " << num << " is: " << factorial(num) << endl;

        cout << "\nDo you want to calculate another factorial? (y/n): ";
        cin >> choice;
        clearInput(); // Clear any leftover input

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the factorial calculator!" << endl;
    return 0;
}