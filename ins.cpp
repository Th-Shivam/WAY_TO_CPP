#include <iostream>
using namespace std ;
class Sorter{
    public:

    int arr[5];
    int n = 5;

    void getInput(){
        cout<<"Enter the value of 5 elements of the array :" << endl;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i] ;
        }
    }

    void display(){
        for(int i = 0 ; i<n ; i++){
            cout<<arr[i];
        }
    }

    void insertionSort(){
        for(int i = 1 ; i<n ; i++){
            int previous = i-1;
            int curr = arr[i];
            while(previous>=0 && arr[previous] > curr){
                arr[previous+1] = arr[previous];
                previous--;
            }
            arr[previous+1] = curr ;
        }
    }




};

int main(){
    Sorter s1 ;
    s1.getInput() ;
    cout<<"Array before sorting: " << endl;
    s1.display();

    s1.insertionSort();
    cout << "\nArray after sorting: " << endl;
    s1.display();
}