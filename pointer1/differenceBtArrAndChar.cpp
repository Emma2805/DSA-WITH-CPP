#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[5] = "abcd";
    //address  of index 0
    cout<<arr<<endl;
    //print the whole containt of char array
    cout<<ch<<endl;
    int *p = &arr[0];
    //print the add of index 0 of int array
    cout<<p<<endl;
    char *c = &ch[0];
    //print the whole containt of char array
    cout<<c<<endl;
}