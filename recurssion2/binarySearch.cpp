#include<iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int key){
    
    if(s>e){
        return false;
    }
    int mid = s +(e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(key>arr[mid]){
 
        return binarysearch(arr,mid+1, e, key );
    }
    if(key<arr[mid]){
        return binarysearch(arr,s, mid-1, key );
    }
    
}

int main(){
    int arr[6] = {2,4,6,7,8,9};
    int size = 6;
    int key =6;
    

    int ans = binarysearch(arr,0,5,key);

    if(ans){
        cout<<"element found";

    }
    else{
        cout<<"element not found";
    }

    return 0;
}