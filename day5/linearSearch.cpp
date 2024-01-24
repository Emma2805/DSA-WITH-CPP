#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i =0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }

        //else
        
    }
    return 0;
}

int main(){
    
    int arr[10] = {12, 23 ,34, 1 , 2 ,3 , 4 ,5, 6 ,22};
    cout<<"enter the key";
    int key;
    cin>>key;

    search(arr ,10, key);

    bool found = search(arr , 10, key);
    if(found){
        cout<<"we found the key which you have searched:";
    }
    else{
        cout<<"the key is not found:";
    }
}