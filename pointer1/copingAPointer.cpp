#include<iostream>
using namespace std;

int main(){
    int n =5;
    int *p = &n;
    cout<<"n - "<<n<<endl;
    int *q = p;
    cout<<" p - "<<*p<<endl;
    cout<<"q -"<<*q<<endl;
}