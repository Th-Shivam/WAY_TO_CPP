#include <iostream>
using namespace std;

class arr
{
public:
    int a[5];
    int arr1[6];

    arr()
    {
        cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    };


    void addelem(int x ){


        for(int i = 0 ; i<=5 ; i++){
            if (i==5){
                arr1[i] = x;
            }

            else{arr1[i] = a[i];}
            
            
        }

    }

    void display()
    {
        cout << "The elements are: ";
        for (int i = 0; i < 6; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }


} ;


int main(){
    arr a1 ;
    a1.addelem(10); // The argument is not used in the function, but required by the signature
    a1.display();
    return 0 ;
}



