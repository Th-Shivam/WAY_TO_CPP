#include <iostream>
using namespace std;
int main(){
    int year ;
    string result ;
    cout<<"Enter the year : ";
    cin>>year;
    if(year%4==0){
        result = "Leap year";
    }
    else{
        result = "Not a leap year";
    }
    cout<<result;
};

