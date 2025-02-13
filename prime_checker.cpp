#include <iostream>
using namespace std;
int main()
{
    int n;
    string result;
    cout << "Enter the number: ";
    cin >> n;
    if (n == 1)
    {
        result = "Not a prime number";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                result = "Not a prime number";
                break;
            }
            else
            {
                result = "Prime number";
            }
        }
    }
    cout << result;
};