#include<iostream>
using namespace std;

bool linearSearch1(int arr[], int size, int key){
//bassecase
if(size == 0){
    return false;
}
if(arr[0] == key){
    return true;
}
else{
    bool remain = linearSearch1(arr + 1, size - 1, key);
    return remain;
}

}
int main(){
    int arr[5] = {2,8,5,7,6};
    int size = 5;
    int key;
    cin>>key;

    int ans = linearSearch1(arr, size, key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}