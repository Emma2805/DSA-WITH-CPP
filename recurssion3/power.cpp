#include<iostream>
using namespace std;

int power(int a, int b){
    if(b ==0){
        return 1;
    }
    if(b ==1){
        return a;
    }
    //recursion call
    int x = power(a, b/2);

    //if b is even
    if(b%2 == 0){
        return x*x;
    }
    else{
        return a*x*x;
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans;
}