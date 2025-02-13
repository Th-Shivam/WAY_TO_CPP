#include <iostream>
using namespace std;
int main()
{
    float a, b, c, grater_of_3;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;
    if (a > b && a > c)
    {
        grater_of_3 = a;
    }
    else if (b > a && b > c)
    {
        grater_of_3 = b;
    }
    else
    {
        grater_of_3 = c;
    }
    cout << "The greater of the three numbers is : " << grater_of_3;
    return 0;
};