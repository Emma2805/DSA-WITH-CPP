#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int first[10] = {1, 3 , 50};
    printArray(first , 10);

    int second[15] = {0};
    printArray(second , 15);
}