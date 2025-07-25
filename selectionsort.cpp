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

        for(int i = 0 ; i<n-1 ; i++){
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