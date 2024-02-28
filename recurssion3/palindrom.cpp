#include<iostream>
using namespace std;

bool checkPalin(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    return checkPalin(str, i+1, j-1);
}

int main(){
    string name = "abba";
    bool isPalindrome = checkPalin(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}