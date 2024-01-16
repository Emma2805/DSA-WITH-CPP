#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"take the input:";
    cin>>n;
    for(int i=2; i<n;i++){
        if((n%i)==0){
            cout<<" n is not prime:";
        }
        else{
            cout<<"n is prime:";
        }
    }
}