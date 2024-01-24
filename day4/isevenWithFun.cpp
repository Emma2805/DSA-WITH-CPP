#include<iostream>
using namespace std;

bool isEven(){
    int a;
    cin>>a;
    //even - 1
    // odd -0
    if(a&1){
        return 0;
    }
    else
     return 1;
}

int main(){
    if(isEven()){
        cout<<"number is even:";
    }
    else{
        cout<<"number is odd:";
    }

}
