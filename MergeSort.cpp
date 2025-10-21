#include <iostream>
#include <vector> 
using namespace std ;

void Merge(int arr[] , int start , int mid , int end ){
    
    vector<int>temp(end-start+1) ;
    int left = start , right = mid+1 , idx = 0 ;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[idx] = arr[left] ;
            left++ ; 
            idx++ ;
        } else {
            temp[idx] = arr[right];
            idx++ ;
            right++ ;
        }
    }
    
    while(left<=mid){
        temp[idx] = arr[left] ;
        left++ ;
        idx++ ;
    }
    
    while(right<=end){
        temp[idx] = arr[right] ;
        right++ ;
        idx++ ;
    }
    idx = 0 ;
    while(start<=end){
        arr[start] = temp[idx];
        start++ ; idx++ ;
    }
}

void MergeSort(int arr[] , int start , int end ){
    if(start==end){
        return ;
    }
    
    int mid = (start + (end-start)) / 2 ;
    
    //left 
    MergeSort(arr , start , mid) ;
    //right
    MergeSort(arr , mid+1 , end) ;
    
    //combine
    
    Merge(arr , start , mid , end ) ;
    
}
int main() {
    int arr[] = {3,2,1} ;
    MergeSort(arr , 0 , 2 );
    for(int i = 0 ; i<3 ; i++){
        cout<<arr[i]<<" " ;
    }
}
