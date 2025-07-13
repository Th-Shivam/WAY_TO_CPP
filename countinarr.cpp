#include <iostream>
using namespace std;

class Counter {
    public:

    // Counter(){
    //     cout<<"Enter the value of n :"<<endl ;
    //     cin >> n;
    // }
    // int n ;
    int a[5];
    int value;
    int counter = 0 ;

    void getinp(){
        cout << "Enter 5 values for the array :" << endl ;
        for(int i = 0 ; i<5 ; i++){
            cin>>a[i];
        }
    }

    void checker(){

        cout << "Enter the value to be checked :"<<endl;
        cin>>value;

        for (int i = 0 ; i<5 ; i++){
            if(a[i]==value){
                counter++;
            }
            else{
                continue;
            }
            
        }

        if(counter>0){
            cout<<"The value is present in the array for " << counter << " times." << endl;
        }
        else{
            cout<<"The value is not present in the array." << endl;
        }



    }



};

int main() {
    Counter c;
    c.getinp();
    c.checker();
    return 0;
}