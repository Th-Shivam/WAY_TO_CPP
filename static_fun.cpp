#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static data member

public:
    static void increment() { // Static member function
        count++;
        cout << "Count: " << count << endl;
    }
};

// Initializing static data member
int Counter::count = 0;

int main() {
    Counter::increment(); // Calling static function without object
    Counter::increment();
    Counter::increment();

    return 0;
}
