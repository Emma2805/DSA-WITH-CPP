#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1, 29, 3 ,4, 5,};
    cout<<"address of index 0 :-"<<arr<<endl;
    cout<<"address of index 0 :-"<<&arr[0]<<endl;
    cout<<"value at index 0:- "<<*arr<<endl;
    cout<<"value of index 0 + 1:-"<<*arr +1<<endl;
    cout<<"value at index 1:- "<<*(arr +1)<<endl;
    int i =3;
    cout<<i[arr]<<endl;
    return 0;
}
