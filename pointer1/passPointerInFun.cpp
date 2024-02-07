#include<iostream>
using namespace std;

int print(int *p){
    cout<<"value "<<*p;
}
void update(int *p){
    //p = p+1;
    //cout<<"Inside p "<<p<<endl;
    *p = *p+1;


}
int main(){
    int value = 10;
    int *p = &value;
    //value 
    cout<<"before p "<<*p<<endl;
      update(p);
    // cout<<"after p: "<<p<<endl; will not be updated;
    cout<<"Will update the value "<<*p<<endl; // value will be 11;

    return 0;
}
