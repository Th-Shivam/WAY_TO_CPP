#include <iostream>
using namespace std;

// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    cout << "Sum: " << add(x, y) << endl; // Calling inline function
    return 0;
}
