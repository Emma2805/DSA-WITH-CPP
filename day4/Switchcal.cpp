#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"take the input a ans b:";
    cin>>a>>b;
    char ch;
    cout<<"type the operator:";
    cin>>ch;
    switch(ch){
        case '+': cout<<"addition: "<<a+b;
        break;
        case '-': cout<<"substration: "<<a-b;
        break;
        case '*': cout<<"multiplication: "<<a*b;
        break;
        case '/': cout<<"division: "<<a/b;
        break;
        default : cout<<"please enter valid choice: ";
        
    }
}