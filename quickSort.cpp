#include <iostream>
using namespace std;

class Sorter{

     public:
    
     int n =6;
     int pivot = 0;
     int up = 1;
     int down = n-1;
     int arr[6];

     void getInput(){
            cout << "Enter the elements of the array: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
     }

     void display(){
            cout << "Sorted array: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
     }



     void quickSort(){
           
     }

} ;

int main()
{
    Sorter sorter;
    sorter.getInput();
    sorter.quickSort();
    sorter.display();


    return 0;
}