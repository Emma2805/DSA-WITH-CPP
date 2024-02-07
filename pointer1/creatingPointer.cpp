#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ptr = &n;
     //printing value:

     cout<<"printing value by using variable "<<n<<endl;
     cout<<"printing value by using pointer "<<*ptr<<endl;
     
     //printing address

     cout<<"printing address by using variable "<<&n<<endl;
     cout<<"printing add by using pointer "<<ptr<<endl;
}