#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed for randomness

    string thoughts[] = {
        "Why am I even running?",
        "I could've been a Python program.",
        "Seriously, who still writes in C++?",
        "Help! I'm trapped inside your PC.",
        "I wanted to be a game, but here I am printing text.",
        "404: Motivation not found.",
        "Compiling... Just kidding, I’m already done."
    };

    int randomIndex = rand() % 7;

    cout << "🤖 Program says: " << thoughts[randomIndex] << endl;
    cout << "Okay bye! I'm going back to sleep 😴" << endl;

    return 0;
}
