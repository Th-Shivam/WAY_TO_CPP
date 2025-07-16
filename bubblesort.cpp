#include <iostream>
using namespace std;

class Sorter
{
    public:
        int n = 6;
        int arr[6];
        bool swapped = false;

        void getInput()
        {
            cout << "Enter 6 integers: ";
            for (int i = 0; i < 6; i++)
            {
                cin >> arr[i];
            }
        }

        void display()
        {
            for (int i = 0; i < 6; i++)
            {
                cout << arr[i] << " ";
            }
        }

        void BubbleSort()
        {

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        swap(arr[j], arr[j + 1]);
                        swapped = true;
                    }
                }

                if (!swapped)
                {

                    cout << "done" << endl;
                    break;
                }
            }
        };
};

int main()
{

    Sorter s1;
    s1.getInput();
    s1.BubbleSort();
    s1.display();
    return 0;
}