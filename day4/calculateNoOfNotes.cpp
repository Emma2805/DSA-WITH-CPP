#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"enter amount";
    cin>>amount;
    int n100 ,  n20 ,  n1;
    switch(amount>=100){
        case 1: n100 = amount/100;
                amount = amount - (n100 * 100);
                break;
    }
    switch(amount>=20){
        case 1: n20 = amount/20;
                amount = amount - (n20 * 20);
                break;
    }
    switch(amount>=1){
        case 1: n1 = amount/1;
                amount = amount - (n1 * 1);
                break;
    }
    cout<<"100 rupees note "<<n100<<endl;
    cout<<"20 rupees note "<<n20<<endl;
    cout<<"1 rupees note "<<n1<<endl;


}