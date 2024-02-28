#include<iostream>
using namespace std;

int sum(int arr[], int n){
    if( n==0){
        return 0;
    }
    if(n == 1 ){
        return arr[0];
    }
    int x = arr[0]+arr[1];
    return x+sum(arr+2, n-2 );
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
     int ans = sum(arr, n);
     cout<<ans;
}