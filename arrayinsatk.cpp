#include <iostream>
using namespace std;

class Pelhar
{

public:
    int a[5];
    int arr[6];
    int k = 4;

    Pelhar()
    {
        cout << "enter the 5 elem : ";
        for (int i = 0; i <= 4; i++)
        {
            cin >> a[i];
        }
    }

    void inselem(int x)
    {

        for (int i = 0; i < k; i++)
        {
            arr[i] = a[i];
        }

        arr[k] = x ; 

        for(int i = k+1 ; i <= 5 ; i++){

            arr[i] = a[i-1];

        }
    }

        void display(){
            cout << "up arr" << endl;
            for (int i = 0; i <= 5; i++)
            {
                cout << arr[i];
            }

            cout << "" << endl;

            cout << "p arr" << endl;
            for (int i = 0; i <= 4; i++)
            {
                cout << a[i];
            }
        }
    };


    int main()
    {
        Pelhar p1;
        p1.inselem(8);
        p1.display();
    }