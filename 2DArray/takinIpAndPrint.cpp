#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    for(int row =0; row <4; row++){
        for(int col =0; col<4; col++){
            cin>>arr[row][col];
        }
    }
    for(int row =0; row <4; row++){
        for(int col =0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}