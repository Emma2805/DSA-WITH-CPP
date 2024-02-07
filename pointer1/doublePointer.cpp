#include<iostream>
using namespace std;

int main(){
    int a =10;
    int *p = &a;
    int **q = &p;

    //print the add of q:
    cout<<&a<<" ";
    cout<<p<<" ";
    cout<<*q<<endl;

    //print the add of p:
    cout<<&p<<" ";
    cout<<q<<endl;

    //print the value at a:
    cout<<a<<" ";
    cout<<*p<<" ";
    cout<<**q<<endl;
}