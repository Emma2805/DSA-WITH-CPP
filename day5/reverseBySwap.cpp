#include<bits/stdc++.h>
using namespace std;

void rev(int arr[] , int size){
    
    int start =0;
    int end = size -1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[] , int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    rev(arr , size);
    printArray(arr , size);
}