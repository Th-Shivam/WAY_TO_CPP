#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int i = 0;
    int j = n - 1;
    int mid = n / 2;
    int flag = 0;

    while (i <= j)
    {
        if (arr[mid] == key){
            cout << "key found at index " << mid << endl;
            flag = 1;
            break;
        }

        else if (key > arr[mid]){
            i = mid + 1;
            mid = (i + j) / 2;
        }
        else{
            j = mid - 1;
            mid = (i + j) / 2;
        }
     
    }

    return 0;
}