#include<iostream>
using namespace std;
// 0-not prime
//1 - prime
bool isprime(int n){
    for(int i = 2; i<n ;i++){
        if(n%i == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    isprime(n);
    if(isprime(n)){
        cout<<"prime number:";
    }
    else{
        cout<<"not prime:";
    }
    return 0;
}