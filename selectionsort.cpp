// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         // Swap the found minimum element with the first element
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     selectionSort(arr, n);

//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class SelectionSort{

    public:
    int n = 6;
    int arr[6];

    void getInput() {
        cout << "Enter 6 integers: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sort(){

        for(int i = 0 ; i<n ; i++){
            for (int j = i+1 ; j <n ; j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                }
            }

        }

    }



};

int main() {
    SelectionSort s1;
    s1.getInput();
    s1.sort();
    s1.display();
    return 0;
}