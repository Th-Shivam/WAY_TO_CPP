#include <iostream>
using namespace std ;

int main(){

    int n ;
    int arr[n];
    int value;
    int position = 0;
    cout<<"Enter the value of n :"<<endl ;
    cin >> n;
    cout << "Enter " << n << " values for the array :" << endl ;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout << "Enter the value to be checked :"<<endl;
    cin>>value;

    for(int i = 0 ; i<n ; i++){
        if(arr[i]==value){
            position = i+1 ;

            
        } else{
            continue;
        }
    }

    if(position>0){
        cout<<"The value is present in the array at position " << position << "." << endl;
    }
    else{
        cout<<"The value is not present in the array." << endl;
    }
return 0 ;

}