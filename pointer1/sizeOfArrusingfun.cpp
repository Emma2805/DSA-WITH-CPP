#include<iostream>
using namespace std;

int getsum(int arr[], int n){

    cout<<"size of: "<<sizeof(arr)<<endl;
    int sum =0;
    for(int i =0; i<n; i++){
        sum =sum +1;
    }
    return sum;
}

int main(){
    int arr[5] = {1, 2, 3, 4,5};
    cout<<"sum is "<<getsum(arr,5);

}