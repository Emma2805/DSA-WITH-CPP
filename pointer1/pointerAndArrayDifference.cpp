#include<iostream>
using namespace std;

int main(){
    int a[10] = {0};
    cout<<"print the address of index 0 :-"<<&a<<endl;
    int *p = &a[0];
    cout<<"print the address of p :-"<<&p<<endl;
    
    //error
    //a = a+1;
    //cout<<a<<endl;
    p = p+1; //points to next address of array;
    cout<<p<<endl;


    return 0;
}