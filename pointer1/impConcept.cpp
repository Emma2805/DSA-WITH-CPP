#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *t = &i;
    cout<<"before i "<<i<<endl;
    *t = *t+1;
    cout<<"after i "<<i<<endl;
    cout<<"before t"<<t<<endl;
    t = t+1;
    cout<<"after t "<<t<<endl;

    return 0;
}