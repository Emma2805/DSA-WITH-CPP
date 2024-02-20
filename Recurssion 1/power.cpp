#include<iostream>

int power(int n){
    if(n == 0){
        return 1;
    }
    int small = power(n-1);
    int big = 2* small;
    return big;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans;
}