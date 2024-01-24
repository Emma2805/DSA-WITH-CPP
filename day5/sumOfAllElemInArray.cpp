#include<iostream>
using namespace std;

int sum( int arr[] , int n){
    int count = 0;
    for(int i =0; i<n; i++){
        count = count + arr[i];
    }
    cout<<"sum of array is "<<count;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        
    }
    sum(arr , n);
}