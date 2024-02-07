#include<iostream>
using namespace std;
int *fun(){
    int x =10;
    return &x;
}

int main(){
    int *p = fun(); // *p is pointing to something which not valid anymore
    cout<<*p;
    return 0;

}