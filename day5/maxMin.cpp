#include<bits/stdc++.h>
// #include<maths.h>
using namespace std;

int max(int arr[] , int n){

    int maxi = INT_MIN;
    for(int i =0 ; i<n ; i++){
            if(arr[i]> maxi){
                maxi = arr[i];
            }
    }
    return maxi;
}

int min(int arr[] , int n){

    int mini = INT_MAX;
    for(int i =0 ; i<n ; i++){
            if(arr[i]< mini){
                mini = arr[i];
            }
    }
    return mini;
}

int main(){
       int size;
       cin>>size;
       int arr[100];
       for(int i = 0; i<size; i++){
        cin>>arr[i];
       }

       
       

       cout<<"max = "<<max(arr , size)<<endl;
        cout<<"max = "<<min(arr , size)<<endl;
}