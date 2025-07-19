#include <iostream>
using namespace std;
class Sorter
{

public:
    int n = 5;
    int arr[5];

    void getInput()
    {
        cout << "Enter 6 integers: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void InsertionSort()
    {
        int value, j;
        for (int i = 1; i < n; i++)
        {
            cout<< "Iteration " << i << ": " << endl;
            value = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > value)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = value;
        }
    };
};

int main(){
    Sorter s1;
    s1.getInput();
    s1.InsertionSort();
    s1.display();
    return 0;
}