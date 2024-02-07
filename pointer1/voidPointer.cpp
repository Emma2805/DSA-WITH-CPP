#include<iostream>
using namespace std;

int main(){
    void *ptr;
    int a = 10;
    ptr = &a;

    //address of a
    cout<<&a<<" ";
    cout<<ptr<<endl;

    //value of a;
    cout<<a<<" ";
    //show error because void is not a pointer to object type
    
    //cout<<*ptr;
    

}