#include<iostream>
using namespace std;

void Printsum(int arr[][3], int row, int col){
    for(int row =0; row<3; row++){
        int count = 0;
        for(int col=0; col<3; col++){
            count = count + arr[row][col];
        }
        cout<<count<< " ";
    }
    
}

int main(){
    int arr[3][3];
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    Printsum(arr, 3, 3);

}